#pragma once
#include "Utility.h"

class Piece
{
public:
	std::vector<int> position;
	int _color;
	char _symbole;
	
	Piece();
	virtual ~Piece();

	bool Move(int x, int y, Piece* board[8][8]);
	void SetPosition(int x, int y, Piece* board[8][8]);
	bool isCaseEmpty(int x, int y, Piece* grid[8][8]);
};

