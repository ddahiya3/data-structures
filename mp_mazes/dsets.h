/* Your code here! */
#include <vector>

class DisjointSets {

    public : 
    void addelements (int n);
    int find (int elem);
    void setunion (int a, int b);
    int size (int elem);

    private :
    std::vector<int> tree;
};