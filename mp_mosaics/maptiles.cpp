/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */

    std::vector<Point<3>> points_vect;

    std::map<Point<3>,int> points_map;

    for (int i = 0; i < (int)theTiles.size(); i++){

        LUVAPixel pixel = theTiles[i].getAverageColor();
        Point<3> pt;
        pt.set(0, pixel.l);
        pt.set(1, pixel.u);
        pt.set(2, pixel.v);
        points_vect.push_back(pt);

        points_map[pt] = i;

    }

    KDTree<3> tree(points_vect);

    MosaicCanvas * mosaic = new MosaicCanvas(theSource.getRows(), theSource.getColumns());

    for (int i = 0; i < theSource.getRows(); i++) {
        for (int j = 0; j < theSource.getColumns(); j++) {

            LUVAPixel pixel = theSource.getRegionColor(i,j);
            Point<3> pt;
            pt.set(0, pixel.l);
            pt.set(1, pixel.u);
            pt.set(2, pixel.v);

            Point<3> nearest_neighbour = tree.findNearestNeighbor(pt);

            int place = points_map[nearest_neighbour];

            TileImage * img = &theTiles[place];

            mosaic->setTile(i, j, img);
        }
    }
    return mosaic;
}

