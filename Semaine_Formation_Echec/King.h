#pragma once
#include "Piece.h"

class King : public Piece 
{
public:
	King(int color);
	virtual ~King();

	bool Move(int x, int y, Piece* board[8][8]);
};
