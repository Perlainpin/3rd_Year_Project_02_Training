#pragma once
#include "Piece.h"
class Bishop : public Piece
{
public:
	Bishop();
	virtual ~Bishop();

	bool Move(int x, int y, Piece* board[8][8]);
};

