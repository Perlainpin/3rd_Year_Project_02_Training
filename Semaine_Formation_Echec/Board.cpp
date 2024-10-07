#include "Board.h"

Piece* Gridtemplate[8][8] = {
		{ new Rook, new Knight, new Bishop, new Queen, new King, new Bishop, new Knight, new Rook },
		//{ new Pawn,  new Pawn,  new Pawn,  new Pawn,  new Pawn,  new Pawn,  new Pawn, new Pawn },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ new Pawn,  new Pawn,  new Pawn,  new Pawn,  new Pawn,  new Pawn,  new Pawn, new Pawn },
		{ new Rook, new Knight, new Bishop, new Queen, new King, new Bishop, new Knight, new Rook },
};

Board::Board() {


};

Board::~Board() {


};

void Board::ResetPieces() {
	// board size : 8 x 8 
	/*

	T C F R R F C T
	P P P P P P P P
	0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0
	P P P P P P P P
	T C F R R F C T

	*/

	for (int i = 0; i < 8; i++) {
		for (int j = 0; i < 8; i++) {
			_Grid[i][j] = Gridtemplate[i][j];
		}
	}

};

