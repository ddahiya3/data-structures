/* Your code here! */
#pragma once
#include "cs225/PNG.h"
#include <vector>

using namespace cs225;

struct SquareMazeBlock
{
	bool downWall;
	bool rightWall;
	SquareMazeBlock();

};

struct MazeSolve {
	int length;
	int camefrom;
};

struct Point {
	int x;
	int y;

	Point(int x, int y) : x(x), y(y) { }
};

class SquareMaze
{
public:
	SquareMaze();
	bool canTravel(int x, int y, int dir) const;
	PNG* drawMaze() const;
	PNG* drawMazeWithSolution();
	void makeMaze(int width, int height);
	void setWall(int x, int y, int dir, bool exists);
	std::vector<int> solveMaze();
	int convert(int x, int y);

	std::vector<std::vector<SquareMazeBlock>> maze;
	int width;
	int height;
};



