#pragma once
#include "Piece.h"
class Bishop : public Piece
{
public:
	Bishop(int color);
	virtual ~Bishop();

	bool Move(int x, int y, Piece* board[8][8]);
};

