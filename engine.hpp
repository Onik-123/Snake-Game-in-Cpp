#pragma once

#include "food.hpp"
#include "grid.hpp"
#include "snake.hpp"

class Engine {
	public:
	Grid grid;
	Snake snake;
	Food food;
	Engine(int width, int height);
	void reset();
	void update();
	bool isGameOver();
};