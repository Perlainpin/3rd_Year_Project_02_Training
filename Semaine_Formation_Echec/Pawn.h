#pragma once
#include "Piece.h"
class Pawn : public Piece { 

public:

	bool firstMove;

	Pawn(int _color);
	virtual ~Pawn();
	bool Move(int x, int y, Piece* board[8][8]);
};

