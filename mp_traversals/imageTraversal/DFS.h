/**
 * @file DFS.h
 */

#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <stack>
#include <queue>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * A depth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class DFS : public ImageTraversal {
public:
  DFS(const PNG & png, const Point & start, double tolerance);

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();

  void add(const Point & point);
  Point pop();
  Point peek() const;
  bool empty() const;

  bool add_increases_size(Point point);

private:
	/** @todo [Part 1] */
	/** add private members here*/
  PNG image_;
  double tolerance_;
  Point start_;
  std::stack<Point> stack_;
  std::vector<std::vector<bool>> visited_before;
  HSLAPixel startpoint;

  bool check_visited(int x,int y);
  

};