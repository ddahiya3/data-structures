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
    double current_distance = 0;
    double potential_distance = 0;

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
  root = copy(other.root);
  size = other.size;
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */
  if(this != &rhs) {

    destroy(root);
    root = copy(rhs.root);
    size = rhs.size;

  }

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
  destroy(root);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    int mid_current_best = (points_vect.size() - 1) / 2;
    //return neighborHelper(query, root, 0);
    return findNearestNeighbor(query, points_vect[mid_current_best], 0, points_vect.size() - 1, 0);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query, Point<Dim> currentBest, int left, int right, int dimension) const {
    
  if (left > right) {
    return currentBest;
  } else if (left == right) {
      if (shouldReplace(query, currentBest, points_vect[right])) {
        currentBest = points_vect[right];
      }
      return currentBest;
  } else {
    //split into half
      int mid = (left + right) / 2;
      int dim = (dimension + 1) % Dim; //dimension for next call
      bool smallerdimval = true;

      if (!(smallerDimVal(query, points_vect[mid], dimension))) {
        currentBest = findNearestNeighbor(query, currentBest, mid + 1, right, dim);
        smallerdimval = false;
        if (shouldReplace(query, currentBest, points_vect[mid])) {
          currentBest = points_vect[mid];
        }
      } else {
        currentBest = findNearestNeighbor(query, currentBest, left, mid - 1, dim);
        if (shouldReplace(query, currentBest, points_vect[mid])) {
          currentBest = points_vect[mid];
        }
      }

      double current_distance = 0;
      double potential_distance = 0;

      for (int i = 0; i < Dim; i++) {
        current_distance += ((currentBest[i] - query[i]) * (currentBest[i] - query[i]));
      }   
      potential_distance = (points_vect[mid][dimension] - query[dimension]) * (points_vect[mid][dimension] - query[dimension]);
      //other side 
      if (potential_distance < current_distance) {
        if (smallerdimval) {
          return findNearestNeighbor(query, currentBest, mid + 1, right, dim);
        } else {
          return findNearestNeighbor(query, currentBest, left, mid - 1, dim);
        } 
      } else if (current_distance == potential_distance) {
        if (points_vect[mid] < currentBest) {
          if (smallerdimval) {
          return findNearestNeighbor(query, currentBest, mid + 1, right, dim);
          } else {
          return findNearestNeighbor(query, currentBest, left, mid - 1, dim);
          }
        } else {
          return currentBest;
        }
      } else {
        return currentBest;
      }
      
  }
  return Point<Dim>();
}


template<int Dim>
void KDTree<Dim>::destroy(KDTreeNode * root) {
  if (root == NULL) {
    return;
  }

  destroy(root->left);
  destroy(root->right);
  delete root;
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode * KDTree<Dim>::copy(const KDTreeNode* root) {

  if (root == NULL) {
    return NULL;
  } else {
    KDTreeNode * node = new KDTreeNode(root->point);
    node->left = copy(root->left);
    node->right = copy(root->right);
    return node;
  }

}

/*
template<int Dim>
inline Point<Dim> KDTree<Dim>::neighborHelper(const Point<Dim>& target, KDTreeNode* current, int currentDimension) const
{
	bool went_left = 0;
	if (current->point == target) {
		return current->point;
	}
	//basecase
	if (current->right == NULL && current->left == NULL) {
		return current->point;
	}
	//step to next point down to get currbest
	Point<Dim> currentBest;
	if (smallerDimVal(target, current->point, currentDimension)) {
		currentBest = neighborHelper(target, current->left, (currentDimension + 1) % Dim);
		went_left = true;
	}
	else {
		currentBest = neighborHelper(target, current->right, (currentDimension + 1) % Dim);
		went_left = false;
	}
	if (shouldReplace(target, currentBest, current->point)) {
		currentBest = current->point;
	}
	double radius;
	double currentDifference = 0;
	for (int currentDim = 0; currentDim < Dim; currentDim++) {
		currentDifference += (target[currentDim] - currentBest[currentDim]) * (target[currentDim] - currentBest[currentDim]);
	}
	radius = std::pow(currentDifference, .5);
  
	if (target[currentDimension] + radius > current->point[currentDimension] && went_left && current->right != NULL) {
		Point<Dim> toAssess = neighborHelper(target, current->right, (currentDimension + 1) % Dim);
		if (shouldReplace(target, currentBest, toAssess)) {
			currentBest = toAssess;
		}
	}
	else if (target[currentDimension] + radius > current->point[currentDimension] && current->left != NULL) {
		Point<Dim> toAssess = neighborHelper(target, current->left, (currentDimension + 1) % Dim);
		if (shouldReplace(target, currentBest, toAssess)) {
			currentBest = toAssess;
		}
	}
	return currentBest;
}

*/

