#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"

using namespace std;
using namespace cs225;

int main()
{
    // Write your own main here
    //me so cheezy hehe
    SquareMaze large;
    large.makeMaze(9,9);
    HSLAPixel redpixel = HSLAPixel(0,1,0.5);
    PNG * result = large.drawMazeWithSolution();
    int count = 0;
    bool done = false;
    HSLAPixel & end = result->getPixel(result->width() - 5, 5);

    while (!done) {
        if (end != redpixel) {
            for (int i = 10*count; i < 10* count + 11; i++) {
                for (int j = result->width() - 11; j <(int) result->width(); j++) {
                    HSLAPixel & change = result->getPixel(j,i);
                    change = HSLAPixel(0,0,0);
                    
                }
            }
            done = true;
        } else {
            count ++;
        }
    }
    result->writeToFile("creative.png");

    return 0;
}
