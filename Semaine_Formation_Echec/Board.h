#pragma once
#include "King.h"
#include "Queen.h"
#include "Pawn.h"
#include "Knight.h"
#include "Bishop.h"
#include "Rook.h"

class Board
{
public:
	Board();
	virtual ~Board();

	Piece* _Grid[8][8];

	void ResetPieces();
	void Show();
};



