#pragma once
#include "Piece.h"
class Knight : public Piece
{
public:
	Knight(int color);
	virtual ~Knight();

	bool Move(int x, int y, Piece* board[8][8]);
};

