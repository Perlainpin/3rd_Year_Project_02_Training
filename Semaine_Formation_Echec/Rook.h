#pragma once
#include "Piece.h"

class Rook : public Piece
{
public:
	Rook(int color);
	virtual ~Rook();
	bool Move(int x, int y, Piece* board[8][8]);
};

