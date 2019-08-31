/**
 * @file lab_intro.cpp
 * Implementations of image manipulation functions.
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>

#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "lab_intro.h"

using cs225::HSLAPixel;
using cs225::PNG;

/**
 * Returns an image that has been transformed to grayscale.
 *
 * The saturation of every pixel is set to 0, removing any color.
 *
 * @return The grayscale image.
 */
PNG grayscale(PNG image) {
  /// This function is already written for you so you can see how to
  /// interact with our PNG class.
  for (unsigned x = 0; x < image.width(); x++) {
    for (unsigned y = 0; y < image.height(); y++) {
      HSLAPixel & pixel = image.getPixel(x, y);

      // `pixel` is a pointer to the memory stored inside of the PNG `image`,
      // which means you're changing the image directly.  No need to `set`
      // the pixel since you're directly changing the memory of the image.
      pixel.s = 0;
    }
  }

  return image;
}



/**
 * Returns an image with a spotlight centered at (`centerX`, `centerY`).
 *
 * A spotlight adjusts the luminance of a pixel based on the distance the pixel
 * is away from the center by decreasing the luminance by 0.5% per 1 pixel euclidean
 * distance away from the center.
 *
 * For example, a pixel 3 pixels above and 4 pixels to the right of the center
 * is a total of `sqrt((3 * 3) + (4 * 4)) = sqrt(25) = 5` pixels away and
 * its luminance is decreased by 2.5% (0.975x its original value).  At a
 * distance over 160 pixels away, the luminance will always decreased by 80%.
 * 
 * The modified PNG is then returned.
 *
 * @param image A PNG object which holds the image data to be modified.
 * @param centerX The center x coordinate of the crosshair which is to be drawn.
 * @param centerY The center y coordinate of the crosshair which is to be drawn.
 *
 * @return The image with a spotlight.
 */
PNG createSpotlight(PNG image, int centerX, int centerY) {

  for (unsigned x = 0; x < image.width(); x++) {
    for (unsigned y = 0; y < image.height(); y++) {

      HSLAPixel & pixel = image.getPixel(x, y);

      int eucledian_distance = sqrt((centerX - x) * (centerX - x) + (centerY - y) * (centerY - y));

      if (eucledian_distance < 160) {
        pixel.l *= (1 - 0.005 * eucledian_distance);
      } else {
        pixel.l = 0.2 * pixel.l;
      }
    }
  }

  return image;
  
}
 

/**
 * Returns a image transformed to Illini colors.
 *
 * The hue of every pixel is set to the a hue value of either orange or
 * blue, based on if the pixel's hue value is closer to orange than blue.
 *
 * @param image A PNG object which holds the image data to be modified.
 *
 * @return The illinify'd image.
**/
PNG illinify(PNG image) {

  for (unsigned x = 0; x < image.width(); x++) {
    for (unsigned y = 0; y < image.height(); y++) {

      HSLAPixel & pixel = image.getPixel(x, y);

      double difference_from_blue = std::min(fabs(pixel.h - 216),fabs(pixel.h  - 360 - 216)); // hue for blue is 216
      double difference_from_orange = std::min(fabs(pixel.h - 11),fabs(pixel.h - 360 - 11)); // hue for orange is 11

      if (difference_from_blue > difference_from_orange) {
        pixel.h = 11;
      } else {
        pixel.h = 216;
      }

    }
  }

return image;

}
 

/**
* Returns an immge that has been watermarked by another image.
*
* The luminance of every pixel of the second image is checked, if that
* pixel's luminance is 1 (100%), then the pixel at the same location on
* the first image has its luminance increased by 0.2.
*
* @param firstImage  The first of the two PNGs to be averaged together.
* @param secondImage The second of the two PNGs to be averaged together.
*
* @return The watermarked image.
*/
PNG watermark(PNG firstImage, PNG secondImage) {

  int x_to_consider = std::min(firstImage.width(), secondImage.width());
  int y_to_consider = std::min(firstImage.height(), secondImage.height());

  for (unsigned x = 0; x < x_to_consider; x++) {
    for (unsigned y = 0; y < y_to_consider; y++) {

      HSLAPixel & pixel_first_image = firstImage.getPixel(x, y);
      HSLAPixel & pixel_second_image = secondImage.getPixel(x, y);

      if (pixel_second_image.l == 1.0) {

        if (pixel_first_image.l <= .8) {
          pixel_first_image.l += 0.2;
        } else {
          pixel_first_image.l = 1.0;
        }

      }
    }
  }
  
  return firstImage;
}
