#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <fstream>
#include "Brick.h"
#include "Drawable.h"

class Level
{
public:
	Level();
	~Level();

	void LoadLevel();
private:
	std::vector<GameObject> gameObjects;
};

#endif