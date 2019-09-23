/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once

#include "Image.h"
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

struct image {
    Image image;
    unsigned x_coordinate;
    unsigned y_coordinate;
};

class StickerSheet {

    image * images;
    Image base;
    unsigned length;
    int current_last_filled_index;

    public :
    StickerSheet(const Image & picture,unsigned max);
    ~StickerSheet();
    StickerSheet(const StickerSheet & other);

    int addSticker(Image & sticker,unsigned x,unsigned y);
    void changeMaxStickers(unsigned max);
    Image* getSticker(unsigned index);
    void removeSticker(unsigned index);
    Image render() const;
    bool translate(unsigned index, unsigned x, unsigned y);
    void copy(StickerSheet const & other);
    StickerSheet const & operator= (StickerSheet const & other);
};

 
