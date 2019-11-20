/* Your code here! */

#include "maze.h"
#include "dsets.h"
#include <iostream>
#include <queue>
#include <time.h>

using std::vector;
using std::queue;

SquareMaze::SquareMaze()
{
}

bool SquareMaze::canTravel(int x, int y, int dir) const
{
	if (dir < 2) {
		return dir % 2 ? !maze[x][y].downWall : !maze[x][y].rightWall;
	}
	else {
		if (dir == 2 && x - 1 >= 0) {
			return !maze[x - 1][y].rightWall;
		} 
		else if (dir == 3 && y - 1 >= 0) {
			return !maze[x][y - 1].downWall;
		}
		return false;
	}
}

PNG* SquareMaze::drawMaze() const
{
    PNG* toReturn = new PNG(width * 10 + 1, height * 10 + 1);

    HSLAPixel black = HSLAPixel(0, 0, 0);

    for (unsigned i = 0; i < toReturn->width(); i++)
    {
        if (i < 1 || i > 9) {
            HSLAPixel& copy = toReturn->getPixel(i,0);
            copy = black;
        }
    }

    for (unsigned i = 0; i < toReturn->height(); i++) {
        HSLAPixel& copy = toReturn->getPixel(0, i);
        copy = black;
    }

    for (int x = 0;  x < width;  x++)
    {
        for (int y = 0; y < height; y++) {
            //if ((x < 1 || x > 9) && y == 0) {
            //    for (int z = 0; z < 11; z++) {
            //        HSLAPixel& copy = toReturn->getPixel(x*10+z, (y+1)*10);
            //        copy = black;
            //    }
            //}
            //std::cout << x << std::endl;
            //if (x == 0) {
                //std::cout << __LINE__ << std::endl;
            //    HSLAPixel& copy = toReturn->getPixel(x,y);
            //    copy = black;
            //}
            if (maze[x][y].rightWall) {
                for (int z = 0; z < 11; z++)
                {
                    HSLAPixel& copy = toReturn->getPixel((x+1)*10, y*10+z);
                    copy = black;
                }
            } if (maze[x][y].downWall) {
                for (int z = 0; z < 11; z++)
                {
                    HSLAPixel& copy = toReturn->getPixel(x*10+z, (y+1)*10);
                    copy = black;
                }
            }
        }
    }
    return toReturn;
}

PNG* SquareMaze::drawMazeWithSolution()
{
	PNG * image = drawMaze();
    HSLAPixel redpixel = HSLAPixel(0,1,0.5);
    vector<int> path = solveMaze();
    Point start(5,5);

    for (int i = 0; i < (int)path.size(); i++) {
        if (path[i] == 0) {
            for (int j = 0; j < 11; j++) {
                HSLAPixel & pixel = image->getPixel(start.x + j,start.y);
                pixel = redpixel;
            }
            start.x += 10;
        } else if (path[i] == 1) {
            for (int j = 0; j < 11; j++) {
                HSLAPixel & pixel = image->getPixel(start.x, start.y + j);
                pixel = redpixel;
            }
            start.y += 10;
        } else if (path[i] == 2) {
            for (int j = 0; j < 11; j++) {
                HSLAPixel & pixel = image->getPixel(start.x - j, start.y);
                pixel = redpixel;
            }
            start.x -= 10;
        } else if (path[i] == 3) {
            for (int j = 0; j < 11; j++) {
                HSLAPixel & pixel = image->getPixel(start.x, start.y - j);
                pixel = redpixel;
            }
            start.y -= 10;
        }
    }
    HSLAPixel white = HSLAPixel(0,0,1);
    for (int i = 1; i <= 9; i++) {
        HSLAPixel & pixel = image->getPixel((start.x / 10) * 10 + i,(height) * 10);
        pixel = white;
    }

    return image;
}

void SquareMaze::makeMaze(int width, int height)
{
	//maze making part
	this->width = width;
	this->height = height;

	if (!maze.empty()) { maze.clear(); }

	maze.resize(width, std::vector<SquareMazeBlock>(height));

	DisjointSets dis_set;
	dis_set.addelements(width * height);

	int wallsremoved = 0;

	//srand(time(0));
	//std::vector<bool> xAccessed(width);
	//std::vector<bool> yAccessed(height);

	while (wallsremoved < width*height-1) {
		int wall_width = rand() % (width);
		int wall_height = rand() % (height);
		int dir = rand() % 2;


		int tmpX = wall_width;
		int tmpY = wall_height;

		//std::cout << __LINE__ << "wall width: "<< wall_width << " wall height: "<< wall_height << " walls removed: " <<wallsremoved <<  std::endl;

		//while (xAccessed[wall_width])
		//{
		//	std::cout << __LINE__ << "wall width: " << wall_width << " wall height: " << wall_height << " walls removed: " << wallsremoved << std::endl;
		//	wall_width = (wall_width + 1) % (width);
		//	if (wall_width == tmpX) {
		//		break;
		//	}
		//}
		//while (yAccessed[wall_height])
		//{
		//	std::cout << __LINE__ << "wall width: " << wall_width << " wall height: " << wall_height << " walls removed: " << wallsremoved << std::endl;
		//	wall_height = (wall_height + 1) % (height);
		//	if (wall_height == tmpY) {
		//		break;
		//	}
		//}

		//std::cout << __LINE__ << "wall width: " << wall_width << " wall height: " << wall_height << " walls removed: " << wallsremoved << std::endl;

		if (dir == 0) {
			if (wall_width < width - 1&& dis_set.find(convert(wall_width, wall_height)) != dis_set.find(convert(wall_width + 1, wall_height)) && maze[wall_width][wall_height].rightWall) {
				setWall(wall_width, wall_height, dir, false);
				dis_set.setunion(convert(wall_width, wall_height), convert(wall_width + 1, wall_height));
				//xAccessed[wall_width] = true;
				wallsremoved++;
			}
		}
		else {
			if (wall_height < height -1 && dis_set.find(convert(wall_width, wall_height)) != dis_set.find(convert(wall_width, wall_height + 1)) && maze[wall_width][wall_height].downWall) {
				setWall(wall_width, wall_height, dir, false);
				dis_set.setunion(convert(wall_width, wall_height), convert(wall_width, wall_height + 1));
				//yAccessed[wall_height] = true;
				wallsremoved++;
			}
		}
	}
	//std::cout << "It's over 8002" << std::endl;
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++) {
			//std::cout << "position: " << i << ", " << j << " Right wall : " << maze[i][j].rightWall << " Down wall : " << maze[i][j].downWall << std::endl;
		}
	}
}

int SquareMaze::convert(int x, int y) {
	return width * y + x;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists)
{
	if (dir) { maze[x][y].downWall = exists; }
	else { maze[x][y].rightWall = exists; }
}

std::vector<int> SquareMaze::solveMaze()
{

	std::queue<Point> queue;
	queue.push(Point(0, 0));
	vector<vector<bool>> visitedbefore;
	visitedbefore.resize(width, vector<bool>(height));
	vector<vector<MazeSolve>> solvehelper;
	solvehelper.resize(width, vector<MazeSolve>(height));
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			visitedbefore[i][j] = false;
		}
	}
	visitedbefore[0][0] = true;
	solvehelper[0][0].length = 0;
	solvehelper[0][0].camefrom = -1;

	while (!queue.empty()) {
		Point current = queue.front();
		queue.pop();
		if (canTravel(current.x, current.y, 0)) {
			if (!visitedbefore[current.x + 1][current.y]) {
				queue.push(Point(current.x + 1, current.y));
				solvehelper[current.x + 1][current.y].length = solvehelper[current.x][current.y].length + 1;
				solvehelper[current.x + 1][current.y].camefrom = 0;
				visitedbefore[current.x + 1][current.y] = true;
			}
		}
		if (canTravel(current.x, current.y, 1)) {
			if (!visitedbefore[current.x][current.y + 1]) {
				queue.push(Point(current.x, current.y + 1));
				solvehelper[current.x][current.y + 1].length = solvehelper[current.x][current.y].length + 1;
				solvehelper[current.x][current.y + 1].camefrom = 1;
				visitedbefore[current.x][current.y + 1] = true;
			}
		}
		if (canTravel(current.x, current.y, 2)) {
			if (!visitedbefore[current.x - 1][current.y]) {
				queue.push(Point(current.x - 1, current.y));
				solvehelper[current.x - 1][current.y].length = solvehelper[current.x][current.y].length + 1;
				solvehelper[current.x - 1][current.y].camefrom = 2;
				visitedbefore[current.x - 1][current.y] = true;
			}
		}
		if (canTravel(current.x, current.y, 3)) {
			if (!visitedbefore[current.x][current.y - 1]) {
				queue.push(Point(current.x, current.y - 1));
				solvehelper[current.x][current.y - 1].length = solvehelper[current.x][current.y].length + 1;
				solvehelper[current.x][current.y - 1].camefrom = 3;
				visitedbefore[current.x][current.y - 1] = true;
			}
		}
	}

	int maxlength = 0;
	Point point(0, 0);
	for (int i = 0; i < width; i++) {
		if (solvehelper[i][height - 1].length > maxlength) {
			point = Point(i, height - 1);
			maxlength = solvehelper[i][height - 1].length;
		}
	}

	vector<int> toreturn;

	Point curr = point;

	while (solvehelper[curr.x][curr.y].camefrom != -1) {
		toreturn.push_back(solvehelper[curr.x][curr.y].camefrom);
		if (solvehelper[curr.x][curr.y].camefrom == 0) {
			curr.x -= 1;
		}
		else if (solvehelper[curr.x][curr.y].camefrom == 1) {
			curr.y -= 1;
		}
		else if (solvehelper[curr.x][curr.y].camefrom == 2) {
			curr.x += 1;
		}
		else if (solvehelper[curr.x][curr.y].camefrom == 3) {
			curr.y += 1;
		}
	}

	std::reverse(toreturn.begin(), toreturn.end());

	return toreturn;

}

SquareMazeBlock::SquareMazeBlock()
{
	downWall = true;
	rightWall = true;
}


