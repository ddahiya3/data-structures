#include "cs225/PNG.h"
#include <list>
#include <iostream>

#include "colorPicker/ColorPicker.h"
#include "imageTraversal/ImageTraversal.h"

#include "Point.h"
#include "Animation.h"
#include "FloodFilledImage.h"

using namespace cs225;

/**
 * Constructs a new instance of a FloodFilledImage with a image `png`.
 * 
 * @param png The starting image of a FloodFilledImage
 */
FloodFilledImage::FloodFilledImage(const PNG & png) {
  /** @todo [Part 2] */
  image_ = new PNG(png);
}

/**
 * Adds a FloodFill operation to the FloodFillImage.  This function must store the operation,
 * which will be used by `animate`.
 * 
 * @param traversal ImageTraversal used for this FloodFill operation.
 * @param colorPicker ColorPicker used for this FloodFill operation.
 */
void FloodFilledImage::addFloodFill(ImageTraversal & traversal, ColorPicker & colorPicker) {
  /** @todo [Part 2] */

  traversal_.push_back(&traversal);
  color_.push_back(&colorPicker);
  
}

/**
 * Creates an Animation of frames from the FloodFill operations added to this object.
 * 
 * Each FloodFill operation added by `addFloodFill` is executed based on the order
 * the operation was added.  This is done by:
 * 1. Visiting pixels within the image based on the order provided by the ImageTraversal iterator and
 * 2. Updating each pixel to a new color based on the ColorPicker
 * 
 * While applying the FloodFill to the image, an Animation is created by saving the image
 * after every `frameInterval` pixels are filled.  To ensure a smooth Animation, the first
 * frame is always the starting image and the final frame is always the finished image.
 * 
 * (For example, if `frameInterval` is `4` the frames are:
 *   - The initial frame
 *   - Then after the 4th pixel has been filled
 *   - Then after the 8th pixel has been filled
 *   - ...
 *   - The final frame, after all pixels have been filed)
 */ 
Animation FloodFilledImage::animate(unsigned frameInterval) const {
  Animation animation;
  /** @todo [Part 2] */
  /*
  animation.addFrame(*image_);

  for (unsigned i = 0; i < traversal_queue_.size(); i++) {

    ImageTraversal::Iterator it_begin = traversal_queue_[i]->begin();
    ImageTraversal::Iterator it_end = traversal_queue_[i]->end();

    int counter = 0;

    for (ImageTraversal::Iterator k = it_begin; k != it_end; ++k) {

      if (counter == (int)frameInterval) {
        animation.addFrame(*image_);
        counter = 0;
      }

      counter++;

      HSLAPixel & image_pixel = image_->getPixel((*k).x, (*k).y);
      HSLAPixel color_pixel = color_queue_[i]->getColor((*k).x, (*k).y);

      image_pixel.h = color_pixel.h;
      image_pixel.l = color_pixel.l;
      image_pixel.a = color_pixel.a;
      image_pixel.s = color_pixel.s;
    }

    animation.addFrame(*image_);

  }

  return animation;
  */
	animation.addFrame(*image_);
  int counter = 0;

  for (unsigned i = 0; i < traversal_.size(); ++i) {

    for (ImageTraversal::Iterator it = traversal_[i]->begin(); it != traversal_[i]->end(); ++it) {
      
      if (counter % (int)frameInterval == 0) {
        animation.addFrame(*image_);
      }

      HSLAPixel & old_pixel = image_->getPixel((*it).x, (*it).y);
      old_pixel = color_[i]->getColor((*it).x, (*it).y);

      

      counter++;
    }
    animation.addFrame(*image_);
  }
  
/*
	std::list<ImageTraversal*>::iterator it_traverse;
	std::list<ColorPicker*>::iterator it_color = color_.begin();
	for (it_traverse = traversal_.begin(); it_traverse != traversal_.end(); ++it_traverse)
	{
		ImageTraversal* telement = *(it_traverse);
		ColorPicker* celement = *(it_color);
		for (ImageTraversal::Iterator it = telement->begin(); it!=telement->end(); ++it)
		{
			unsigned x_coord = (*it).x;
			unsigned y_coord = (*it).y;
			HSLAPixel & p1 = image_.getPixel(x_coord, y_coord);
			p1 = celement->getColor(x_coord, x_coord);
			frame++;
			//cout << frame << endl;
			if (frame%frameInterval==0)
				animation.addFrame(image_);
		}
		++it_color;
	}
	animation.addFrame(image_);
  */
  
	return animation;
}
