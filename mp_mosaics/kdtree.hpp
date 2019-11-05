/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if (curDim >= Dim || curDim < 0) {
      return false;
    }
    if (first[curDim] == second[curDim]) {
      return first < second;
    } else {
      return first[curDim] < second[curDim];
    }

}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
    int current_distance = 0;
    int potential_distance = 0;

    for (int i = 0; i < Dim; i++) {
      current_distance += ((currentBest[i] - target[i]) * (currentBest[i] - target[i]));
      potential_distance += ((potential[i] - target[i]) * (potential[i] - target[i]));
    }

    if (current_distance == potential_distance) {
      return potential < currentBest;
    } else {
      return potential_distance < current_distance;
    }
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    points_vect = newPoints;
    size = points_vect.size();
    root = make_tree(0, points_vect.size() - 1, 0);

}


template <int Dim>
int KDTree<Dim>::partition_quickselect(int dim, int left, int right, int pivotIndex) {
  Point<Dim> pivotValue = points_vect[pivotIndex];
  std::swap(points_vect[right], points_vect[pivotIndex]);
  int storeIndex = left;

  for (int i = left; i <= right - 1; i++) {

    if (smallerDimVal(points_vect[i], pivotValue, dim)) {

      std::swap(points_vect[storeIndex], points_vect[i]);
      storeIndex++;
    
    }
  }
  
  std::swap(points_vect[right], points_vect[storeIndex]);

  return storeIndex;
}

template <int Dim>
void KDTree<Dim>::quickSelect(int left, int right, int dim, int mid) {

  if (left == right) {
    return;
  }

  int pivotIndex = (left + right) / 2;
  pivotIndex = partition_quickselect(dim, left, right, pivotIndex);

  if (pivotIndex == mid) {
    return;
  } else if (mid < pivotIndex) {
      return quickSelect(left, pivotIndex - 1, dim, mid);
  } else {
      return quickSelect(pivotIndex + 1, right, dim, mid);
  }

}

template<int Dim>
typename KDTree<Dim>::KDTreeNode * KDTree<Dim>::make_tree(int left, int right, int dim) {

  if (left > right) {
    return NULL;
  }

  KDTreeNode * toreturn = new KDTreeNode();
  int dimension = (dim + 1) % Dim;
  
  int mid = (right + left) / 2;
  quickSelect(left, right, dim, mid);
  
  toreturn->point = points_vect[mid];
  toreturn->left = make_tree(left, mid - 1, dimension);
  toreturn->right = make_tree(mid + 1, right, dimension);
  
  return toreturn;

}


template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    if (points_vect.empty()) {
        return Point<Dim>();
    }
    int mid = (points_vect.size() - 1) / 2;
    return findNearestNeighbor(query, points_vect[mid], 0, points_vect.size() - 1, 0);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query, Point<Dim> currentBest, int left, int right, int dimension) const {
    
  if (left > right) {
    return currentBest;
  } else if (left == right) {
      if (shouldReplace(query, currentBest, points_vect[left])) {
        currentBest = points_vect[left];
      }
      return currentBest;
  } else {
      int mid = (left + right) / 2;
      int lefttree1, lefttree2, righttree1, righttree2;

      if (!(smallerDimVal(query, points_vect[mid], dimension))) {
        lefttree1 = mid + 1;
        lefttree2 = left;
        righttree2 = mid - 1;
        righttree1 = right;
      } else {
        lefttree2 = mid + 1;
        lefttree1 = left;
        righttree1 = mid - 1;
        righttree2 = right;
      }

      int dim = (dimension + 1) % Dim;
      currentBest = findNearestNeighbor(query, currentBest, lefttree1, righttree1, dim);
      if (shouldReplace(query, currentBest, points_vect[mid])) {
        currentBest = points_vect[mid];
      }

      int current_distance = 0;
      int potential_distance = 0;

      for (int i = 0; i < Dim; i++) {
        current_distance += ((currentBest[i] - query[i]) * (currentBest[i] - query[i]));
      }   
      potential_distance = (points_vect[mid][dimension] - query[dimension]) * (points_vect[mid][dimension] - query[dimension]);
        
      if ((current_distance == potential_distance && points_vect[mid] < currentBest) || (potential_distance < current_distance)) {
        return findNearestNeighbor(query, currentBest, lefttree2, righttree2, dim);
      } else {
        return currentBest;
      }
      
  }
  return Point<Dim>();
}



