/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
    length_ = 0;
    head_ = NULL;
    tail_ = NULL;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {

  while(head_ != NULL) {
    ListNode * temp = head_->next;
    delete head_;
    head_ = temp;
  }
  length_ = 0;
  head_ = NULL;
  tail_ = NULL;
  /// @todo Graded in MP3.1

}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  
  if (length_ == 0) {
    head_ = new ListNode(ndata);
    tail_ = head_;
  } else {
    ListNode * newNode = new ListNode(ndata);
    newNode->next = head_;
    head_->prev = newNode;
    head_ = newNode;
  }
  length_++;

}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1
  
  if (length_ == 0) {
    head_ = new ListNode(ndata);
    tail_ = head_;
  } else {
    ListNode * newNode = new ListNode(ndata);
    newNode->prev = tail_;
    tail_->next = newNode;
    tail_ = newNode;
  }
  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  ListNode * curr = start;

  if(curr == NULL) {
    return NULL;
  }

  if (splitPoint == 0) {
    if (curr->prev != NULL) {
      curr->prev->next = NULL;
    }
    return curr;
  }

  for (int i = 0; i < splitPoint && curr != NULL; i++) {
    curr = curr->next;
  }

  if (curr != NULL) {
      curr->prev->next = NULL;
      curr->prev = NULL;
  }

  return curr;
}

/**
 * Modifies the List using the waterfall algorithm.
 * Every other node (starting from the second one) is removed from the
 * List, but appended at the back, becoming the new tail. This continues
 * until the next thing to be removed is either the tail (**not necessarily
 * the original tail!**) or NULL.  You may **NOT** allocate new ListNodes.
 * Note that since the tail should be continuously updated, some nodes will
 * be moved more than once.
 */
template <typename T>
void List<T>::waterfall() {
  ListNode * curr = head_;
  
  if (curr == NULL || length_ == 0) {
    return;
  }

  ListNode * tailptr = tail_;
  ListNode * toswitch;
  ListNode * temp;

  while(curr->next!= tailptr && curr->next->next != NULL) {

    //get initial pointers
    toswitch = curr->next;
    temp = toswitch->next;

    //set prev and next before removing
    temp->prev = curr;
    curr->next = temp;

    //set tail and toswitch in proper places
    tailptr->next = toswitch;
    toswitch->prev = tailptr;
    tailptr = toswitch;
    toswitch->next = NULL;
    
    //move curr onto the next one
    curr = curr->next;

  }

}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  
  reverse(head_,tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {

  if (startPoint == NULL || endPoint == NULL || startPoint == endPoint) {
    return;
  }

  ListNode * endptr = endPoint->next;
  ListNode * headptr = startPoint->prev;
  ListNode * temp;
  ListNode * current = startPoint;

    while(current != endptr) {

      temp = current->prev;  
      current->prev = current->next;  
      current->next = temp;              
      current = current->prev;

    }

    temp = endPoint;
	  endPoint = startPoint;
	  startPoint = temp;
    endPoint->next = endptr;
	  startPoint->prev = headptr;
    
}


  /// @todo Graded in MP3.2


/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  
  if (n <= 1 || empty()) {
    return;
  } 

  ListNode * headptr = head_;
  ListNode * curr = head_;
  int counter = 1;

  while(curr != NULL) {
    while (counter < n) {
      if (curr->next != NULL) {
        curr = curr->next;
      }
      counter += 1;
    }
    counter = 1;

    reverse(headptr,curr);

    if (curr->next != NULL) {
      curr->next->prev = curr;
    }
    if (headptr->prev != NULL) {
      headptr->prev->next = headptr;
    }
    

    headptr = curr->next;
    curr = curr->next;

  } 

  tail_ = curr;

  while(head_->prev != NULL) {
	  head_ = head_->prev;
  }

}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  if (second == NULL) {
    return first;
  } else if (first == NULL) {
    return second;
  } 

  bool firstadd = true; 
  ListNode * previous = NULL;
  ListNode * headptr = first;
  ListNode * tailptr = first;
  ListNode * currf = first;
  ListNode * currs = second;
  ListNode * temp;

  while (currf != NULL && currs != NULL) {
    
    if (currf->data < currs->data) {
      tailptr = currf;
      currf = currf->next;
      
    } else {

      if (currf == first && firstadd) {
        temp = currs;
        currs = currs->next;
        temp->next = headptr;
        temp->prev = NULL;
        headptr->prev = temp;
        headptr = temp;
        previous = temp;
        firstadd = false;

      } else if (currf == first) {
        temp = currs;
        currs = currs->next;
        temp->next = currf;
        temp->prev = previous;
        previous->next = temp;
        currf->prev = temp;
        previous = temp;
      }
        
        else {

        temp = currs;
        currs = currs->next;
        temp->next = currf;
        temp->prev = currf->prev;
        currf->prev->next = temp;
        currf->prev = temp;

      }

      tailptr = currf;
    
   }
  }
  
  while(currs != NULL) {

    temp = currs;
    currs = currs->next;
    temp->prev = tailptr;
    tailptr->next = temp;
    tailptr = temp;

  }
  

  first = headptr;
  return first;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  
  if (chainLength == 1) {
    return start;
  }

  int half = chainLength / 2;
  ListNode * secondhalf = split(start, half);

  ListNode * firstsorted = mergesort(start, half);
  ListNode * secondsorted = mergesort(secondhalf, chainLength - half);

  return merge(firstsorted,secondsorted);
  

}
