#include <cmath>

#include "Image.h"

using cs225::HSLAPixel;
using cs225::PNG;

void Image::darken() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);

            if (pixel.l < 0.1) {
                pixel.l = 0;
            } else {
                pixel.l -= 0.1;
            }

        }
    }
}

void Image::darken(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);

            if (pixel.l < amount) {
                pixel.l = 0;
            } else {
                pixel.l -= amount;
            }
        }
    }
}

void Image::lighten() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);

            if (pixel.l > 0.9) {
                pixel.l = 1;
            } else {
                pixel.l += 0.1;
            }

        }
    }
}

void Image::lighten(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);

            if (pixel.l + amount > 1) {
                pixel.l = 1;
            } else {
                pixel.l += amount;
            }

        }
    }
}

void Image::saturate() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);
            
            if (pixel.s > 0.9) {
                pixel.s = 1;
            } else {
                pixel.s += 0.1;
            }

        }
    }
}

void Image::saturate(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);
            
            if (pixel.s + amount > 1) {
                pixel.s = 1;
            } else {
                pixel.s += amount;
            }

        }
    }
}

void Image::desaturate() {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);
            
            if (pixel.s < 0.1) {
                pixel.s = 0;
            } else {
                pixel.s -= 0.1;
            }

        }
    }
}

void Image::desaturate(double amount) {
    for (unsigned x = 0; x < width(); x++) {
        for (unsigned y = 0; y < height(); y++) {

            HSLAPixel & pixel = getPixel(x,y);
            
            if (pixel.s < amount) {
                pixel.s = 0;
            } else {
                pixel.s -= amount;
            }

        }
    }
}

void Image::grayscale() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {

      HSLAPixel & pixel = getPixel(x, y);
      pixel.s = 0;

    }
  }
}

void Image::illinify() {

  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {

      HSLAPixel & pixel = getPixel(x, y);

      double difference_from_blue = std::min(fabs(pixel.h - 216),fabs(pixel.h  - 360 - 216)); // hue for blue is 216
      double difference_from_orange = std::min(fabs(pixel.h - 11),fabs(pixel.h - 360 - 11)); // hue for orange is 11

      if (difference_from_blue > difference_from_orange) {
        pixel.h = 11;
      } else {
        pixel.h = 216;
      }

    }
  }
}

void Image::rotateColor(double degrees) {

    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

        HSLAPixel & pixel = getPixel(x, y);

        if (pixel.h + degrees < 0) {
            pixel.h = 360 + (pixel.h + degrees);
        } else if (pixel.h + degrees > 360) {
            pixel.h = std::fmod((pixel.h + degrees),360.0);
        } else {
            pixel.h += degrees;
        }
      }
    }
}	

void Image::scale(double factor) {

int new_width = int(width() * factor);
int new_height = int(height() * factor);

HSLAPixel * newImageData = new HSLAPixel[new_width * new_height];

    if (factor < 1.0) {

        int number_of_times  = int(1/factor);
        int i = 0, j = 0;
    
        for (unsigned x = 0; x < width(); x+= number_of_times) {
            for (unsigned y = 0; y < height(); y+=number_of_times) {

                HSLAPixel & oldPixel = getPixel(x,y);
                HSLAPixel & newPixel = newImageData[ (i + (j * new_width)) ];
                newPixel = oldPixel;
                j++;
            }

            i++;
            j = 0;
        }

        this->resize(new_width,new_height);

        for (int i = 0; i < new_width; i ++) {
            for (int j = 0; j < new_height; j ++) {
                HSLAPixel & Pixel = getPixel(i,j);
                HSLAPixel & newPixel = newImageData[ (i + (j * new_width)) ];
                Pixel = newPixel;
                
            }
        }
        
        delete[] newImageData;

    } else {

        int int_factor = (int) factor;
        int w = 0, h = 0;

        for (int x = 0; x < new_width; x+=factor) {
            for (int y = 0; y < new_height; y+=factor) {
                HSLAPixel & oldPixel = getPixel(w,h);
                for (int i = 0; i < int_factor; i ++) {
                    for (int j = 0; j < int_factor; j++) {
                        HSLAPixel & newPixel = newImageData[ (i + x + ((j + y) * new_width)) ];
                        newPixel = oldPixel;
                    }
                }
                h++;
            }
            w++;
            h = 0;
        }

        this->resize(new_width,new_height);

        for (int i = 0; i < new_width; i ++) {
            for (int j = 0; j < new_height; j ++) {
                HSLAPixel & Pixel = getPixel(i,j);
                HSLAPixel & newPixel = newImageData[ (i + (j * new_width)) ];
                Pixel = newPixel;
                
            }
        }
        
        delete[] newImageData;
    }
}

void Image::scale(unsigned w, unsigned h) {

    double factor;

    if (w < width() || h < height()) {
        if (std::min(w,h) == w) {
            factor = w / width();
        } else {
            factor = h / height();
        }
        scale(factor);
        return;
    } else {
        if (std::min(w,h) == w) {
            factor = width() / w;
        } else {
            factor = height() / h;
        }
        scale(factor);
        return;
    }
}