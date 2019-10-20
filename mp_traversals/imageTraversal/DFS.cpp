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
#include "DFS.h"


/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * 
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::DFS(const PNG & png, const Point & start, double tolerance) : image_(png), tolerance_(tolerance) ,start_(start) {  
  /** @todo [Part 1] */

  stack_.push(start);
  startpoint = image_.getPixel(start_.x,start_.y);

  visited_before.resize((int)image_.height(),std::vector<bool>((int)image_.width()));
  for (int i = 0; i < (int)image_.height(); i++) {
    for (int j = 0; j < (int)image_.width(); j++) {
      visited_before[i][j] = false;
    }
  }

}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator DFS::begin() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(this, start_);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point & point) {
  /** @todo [Part 1] */
  if ((int)point.x + 1 < (int)image_.width() && calculateDelta(startpoint, image_.getPixel(point.x + 1, point.y)) < tolerance_ && !check_visited((int)point.x + 1, (int)point.y)) {
		stack_.push(Point(point.x + 1, point.y));
	}

	if ((int)point.y + 1 < (int)image_.height() && calculateDelta(startpoint, image_.getPixel(point.x, point.y + 1)) < tolerance_ && !check_visited((int)point.x, (int)point.y + 1)){
		stack_.push(Point(point.x, point.y + 1));
	}

	if ((int)(point.x - 1) >= 0 && calculateDelta(startpoint, image_.getPixel(point.x - 1, point.y)) < tolerance_ && !check_visited((int)point.x - 1, (int)point.y)){
		stack_.push(Point(point.x - 1, point.y));	
	}

	if ((int)(point.y - 1) >= 0 && calculateDelta(startpoint, image_.getPixel(point.x, point.y - 1)) < tolerance_ && !check_visited((int)point.x, (int)point.y - 1)){
		stack_.push(Point(point.x, point.y - 1));
	}
  
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop() {
  /** @todo [Part 1] */
  Point toreturn = stack_.top();
  stack_.pop();
  visited_before[(int)toreturn.y][(int)toreturn.x] = true;
  if(!stack_.empty()) {
    Point tocheck = stack_.top();
    while(check_visited((int)tocheck.x, (int)tocheck.y) && !stack_.empty()) {
      tocheck = stack_.top();
      stack_.pop();
    }
  }
  visited_before[(int)toreturn.y][(int)toreturn.x] = true;
  return toreturn;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const {
  /** @todo [Part 1] */
  /*if (empty()) {
    return Point(0,0);
  }
  */
  return stack_.top();
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const {
  /** @todo [Part 1] */
  return stack_.empty();
}

bool DFS::check_visited(int x, int y) {
  return visited_before[y][x];
}

bool DFS::add_increases_size(Point point) {
  if (point.x + 1 < image_.width() && calculateDelta(startpoint, image_.getPixel(point.x + 1, point.y)) < tolerance_ && !check_visited((int)point.x + 1, (int)point.y)) {
		return true;
	}

	if (point.y + 1 < image_.height() && calculateDelta(startpoint, image_.getPixel(point.x, point.y + 1)) < tolerance_ && !check_visited((int)point.x, (int)point.y + 1)) {
		return true;
	}

	if ((int)(point.x - 1) >= 0 && calculateDelta(startpoint, image_.getPixel(point.x - 1, point.y)) < tolerance_ && !check_visited((int)point.x - 1, (int)point.y)) {
		return true;	
	}

	if ((int)(point.y - 1) >= 0 && calculateDelta(startpoint, image_.getPixel(point.x, point.y - 1)) < tolerance_ && !check_visited((int)point.x, (int)point.y - 1)) {
		return true;
	}

  bool toreturn = false;
  std::stack<Point> temp;

  while(!stack_.empty()) {
    temp.push(stack_.top());
    if (!check_visited(peek().x,peek().y)) {
      toreturn = true;
    }
    stack_.pop();
  }

  while(!temp.empty()) {
    stack_.push(temp.top());
    temp.pop();
  }

  return toreturn;
}

