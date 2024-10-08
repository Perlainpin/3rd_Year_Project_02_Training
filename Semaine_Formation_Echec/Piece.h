#pragma once
#include "Utility.h"

class Piece
{
public:
	std::string symbol;
	int position[2]{0,0};
	int color;
	
	Piece();
	Piece(int color);
	virtual ~Piece();

	virtual bool Move(int x, int y, Piece* board[8][8]);
	void SetPosition(int x, int y, Piece* board[8][8]);
	bool isCaseEmpty(int x, int y, Piece* grid[8][8]);
};

