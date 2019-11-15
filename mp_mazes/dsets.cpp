/* Your code here! */
#include "dsets.h"

void DisjointSets::addelements (int n) {
    for (int i = 0; i < n; i++) {
        tree.push_back(-1);
    }
}

int DisjointSets::find (int elem) {
    if (tree[elem] < 0) {
        return elem;
    } else {
        int root = find(tree[elem]);
        tree[elem] = root;
        return root;
    }
}

void DisjointSets::setunion (int a, int b) {

    int finda = find(a);
    int findb = find(b);

    if (finda == findb) {
        return;
    }

    int newSize = tree[finda] + tree[findb];

    if (finda < findb) {
        tree[findb] = finda;
        tree[finda] = newSize;
    } else {
        tree[finda] = findb;
        tree[findb] = newSize;
    }
}

int DisjointSets::size (int elem) {
    return tree[find(elem)] * (-1);
}

