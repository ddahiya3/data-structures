#include "StickerSheet.h"

using cs225::HSLAPixel;
using cs225::PNG;


StickerSheet::StickerSheet(const Image & picture, unsigned max) {
    images = new image[max];
    base = picture;
    length = max;
    current_last_filled_index = -1;
}

StickerSheet::~StickerSheet() {
    delete[] images;
}

void StickerSheet::copy(StickerSheet const & other) {
    delete[] images;

    this->base = other.base;

    this->images  = new image[other.length];
    this->length = other.length;

    for (unsigned i = 0; i < other.length; i++) {

        images[i].image = other.images[i].image;
        images[i].x_coordinate = other.images[i].x_coordinate;
        images[i].y_coordinate = other.images[i].y_coordinate;

    }

    current_last_filled_index = other.current_last_filled_index;
}

StickerSheet::StickerSheet(const StickerSheet & other) {
    images = NULL;
    copy(other);
}

const StickerSheet & StickerSheet::operator=(const StickerSheet & other) {
    if (this != &other) { copy(other); }
    return *this;
}


int StickerSheet::addSticker(Image & sticker, unsigned x, unsigned y) {

    if (current_last_filled_index < (int)(length - 1)) {

        current_last_filled_index++;
        images[current_last_filled_index].image = sticker;
        images[current_last_filled_index].x_coordinate = x;
        images[current_last_filled_index].y_coordinate = y; 
        
        return current_last_filled_index;

    } else {

        return -1;

    }

} 

void StickerSheet::changeMaxStickers(unsigned max) {

    image * images_copy = new image[max];
    int go_to = std::min((int)max,current_last_filled_index + 1);

    for (int i = 0; i < go_to; i ++) {
        images_copy[i].image = images[i].image;
        images_copy[i].x_coordinate = images[i].x_coordinate;
        images_copy[i].y_coordinate = images[i].y_coordinate;
        current_last_filled_index = i;
    }

    delete[] images;

    images = new image[max];

    for (int i = 0; i < go_to; i ++) {
        images[i].image = images_copy[i].image;
        images[i].x_coordinate = images_copy[i].x_coordinate;
        images[i].y_coordinate = images_copy[i].y_coordinate;
    }

    delete[] images_copy;
  
    length = max;

}

Image * StickerSheet::getSticker(unsigned index) {
    if (index < 0 || (int)index > current_last_filled_index) {
        return NULL;
    } else {
        Image * return_ = & images[index].image;
        return return_;
    }
}

void StickerSheet::removeSticker(unsigned index) {
    if ((int) index > current_last_filled_index || index < 0) {
        return;
    }

    if ((int) index == 0 && current_last_filled_index == 0) {
        current_last_filled_index = -1;
        return;
    }

    for (unsigned i = 0; i < length - 1; i++) {
        if (i >= index && (int)i < current_last_filled_index) {
            images[i].image = images[i + 1].image;
            images[i].x_coordinate = images[i + 1].x_coordinate;
            images[i].y_coordinate = images[i + 1].y_coordinate;
        }
    }
    current_last_filled_index -= 1;
}

/*void StickerSheet::removeSticker(unsigned index) {
    if ((int)index > current_last_filled_index || index < 0) {

        return;

    } else if ((int)index == 0 && current_last_filled_index == 0) {

        current_last_filled_index = -1;

    } else {

        for (unsigned i = 0 ; i < length; i ++) {
            if (i < index) {
                continue;
            } else if (i + 1 == length) {
                current_last_filled_index -= 1;
                continue;
            } else if (i >= index) {
                if (current_last_filled_index > (int)i) {

                images[i].image = images [i + 1].image;


                }
            }
        }
    }
}
*/

Image StickerSheet::render() const {

    Image *nw_base = new Image(base);

    //base is the base image
    for (int i = 0; i <= current_last_filled_index; i++) {

        if (images[i].x_coordinate + images[i].image.width() > nw_base->width() && images[i].y_coordinate + images[i].image.height() > nw_base->height()) {

            nw_base->resize(images[i].x_coordinate + images[i].image.width(), images[i].y_coordinate + images[i].image.height());

        } else if (images[i].x_coordinate + images[i].image.width() > nw_base->width()) {

            nw_base->resize(images[i].x_coordinate + images[i].image.width(), nw_base->height());

        } else if (images[i].y_coordinate + images[i].image.height() > nw_base->height()) {

            nw_base->resize(nw_base->width(),images[i].y_coordinate + images[i].image.height());

        }

        for (unsigned x = images[i].x_coordinate ; x < images[i].image.width() + images[i].x_coordinate; x++) {
            for (unsigned y = images[i].y_coordinate; y < images[i].image.height() + images[i].y_coordinate; y++) {

                HSLAPixel &pixel = nw_base->getPixel(x,y);
                HSLAPixel &sticker_pixel = images[i].image.getPixel(x - images[i].x_coordinate ,y - images[i].y_coordinate);
                
                if (sticker_pixel.a != 0) {
                    pixel = sticker_pixel;
                }
            }
        }

    }
    Image to_return = *nw_base;
    delete nw_base;
    return to_return;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {

    if (getSticker(index) == NULL) {
        return false;
    } else {
        images[index].x_coordinate = x;
        images[index].y_coordinate = y;
        render();
    }
    return true;
}