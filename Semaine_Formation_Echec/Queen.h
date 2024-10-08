#pragma once
#include "Piece.h"
class Queen : public Piece
{
public:
	Queen(int color);
	virtual ~Queen();

	bool Move(int x, int y, Piece* board[8][8]);
};

