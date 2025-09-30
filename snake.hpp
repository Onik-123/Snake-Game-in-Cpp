#pragma once

#include <vector>

class Snake {
	public:
	int x_pos, y_pos;
	int length;

	private:
	std::vector<int> x_body;
	std::vector<int> y_body;
	int max_length;
	int direction;
};