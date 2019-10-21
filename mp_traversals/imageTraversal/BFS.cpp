#include <iterator>
#include <cmath>

/*#include <list>
#include <queue>
#include <stack>
#include <vector>
*/

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"

using namespace cs225;

/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::BFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
  image_ = png;
  start_ = start;
  tolerance_ = tolerance;
  queue_.push(start_);

}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(this, start_, tolerance_, image_);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
  /** @todo [Part 1] */
  /*
  if (point.x + 1 < image_.width() && calculateDelta(startpoint, image_.getPixel(point.x + 1, point.y)) < tolerance_ && !check_visited((int)point.x + 1, (int)point.y)) {
		queue_.push(Point(point.x + 1, point.y));
	}

	if (point.y + 1 < image_.height() && calculateDelta(startpoint, image_.getPixel(point.x, point.y + 1)) < tolerance_ && !check_visited((int)point.x, (int)point.y + 1)) {
		queue_.push(Point(point.x, point.y + 1));
	}

	if ((int)(point.x - 1) >= 0 && calculateDelta(startpoint, image_.getPixel(point.x - 1, point.y)) < tolerance_ && !check_visited((int)point.x - 1, (int)point.y)) {
		queue_.push(Point(point.x - 1, point.y));	
	}

	if ((int)(point.y - 1) >= 0 && calculateDelta(startpoint, image_.getPixel(point.x, point.y - 1)) < tolerance_ && !check_visited((int)point.x, (int)point.y - 1)) {
		queue_.push(Point(point.x, point.y - 1));
	}
  */
 queue_.push(point);
  
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point BFS::pop() {
  /** @todo [Part 1] */
  /*
  Point toreturn = queue_.front();
  queue_.pop();
  */
  /*
  while (check_visited(toreturn.x,toreturn.y)) {
    toreturn = queue_.front();
    queue_.pop();
  }
  */
 /*
  visited_before[(int)toreturn.y][(int)toreturn.x] = true;

  if(!queue_.empty()) {
    Point tocheck = queue_.front();
    while(check_visited((int)tocheck.x, (int)tocheck.y) && !queue_.empty()) {
      tocheck = queue_.front();
      queue_.pop();
    }
  }

  return toreturn;
  */
 Point toreturn = queue_.front();
 queue_.pop();
 return toreturn;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return queue_.front();
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  return queue_.empty();
}

