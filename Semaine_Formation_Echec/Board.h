#pragma once
#include "King.h"
#include "Queen.h"
#include "Pawn.h"
#include "Knight.h"
#include "Bishop.h"
#include "Rook.h"

#include <iostream>
#include <typeinfo>

class Board
{
public:
	Board();
	virtual ~Board();

	Piece* _Grid[8][8]{ 
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr } 
	};

	void ResetPieces();
	void DrawBoard();
};