#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() : image_traversal_(NULL) {
  /** @todo [Part 1] */
  ended_ = true;
  
}

ImageTraversal::Iterator::Iterator(ImageTraversal * traversal, Point start) : image_traversal_(traversal) , start_point_(start) {
  current_ = image_traversal_->peek();
  ended_ = false;
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  if (!image_traversal_->empty()) {
    current_ = image_traversal_->pop();
    if (image_traversal_->add_increases_size(current_)) {
      image_traversal_->add(current_);
      current_ = image_traversal_->peek();
    } else {
      ended_ = true;
    }
  }
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return current_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  /*
  if (image_traversal_->empty() && !other.image_traversal_->empty()) {
    return true;
  } else if (!image_traversal_->empty() && other.image_traversal_->empty()) {
    return true;
  } else {
    return image_traversal_ != other.image_traversal_;
  }
  */
 /*
  bool thisEmpty = false; 
	bool otherEmpty = false;

	if (image_traversal_ == NULL) { thisEmpty = true; }
	if (other.image_traversal_ == NULL) { otherEmpty = true; }
				
	if (!thisEmpty)  { thisEmpty = image_traversal_->empty(); }
	if (!otherEmpty) { otherEmpty = other.image_traversal_->empty(); }
			
	if (thisEmpty && otherEmpty) return false; // both empty then the traversals are equal, return true
	else if ((!thisEmpty)&&(!otherEmpty)) return (image_traversal_ != other.image_traversal_); //both not empty then compare the traversals
	else return true; // one is empty while the other is not, return true
  */

  return ended_ != other.ended_;
}

