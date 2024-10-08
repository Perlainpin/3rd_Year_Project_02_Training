#include "Board.h"

#ifdef _LITE
Piece* Gridtemplate[8][8] = {
		{ new Rook(1), new Pawn(1), new Bishop(1), new Pawn(1), new King(1), new Bishop(1), new Pawn(1), new Rook(1)},
		{ new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1), new Pawn(1)},
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0), new Pawn(0)},
		{ new Rook(0), new Pawn(0), new Bishop(0), new Pawn(0), new King(0), new Bishop(0), new Pawn(0), new Rook(0)},
};
#else
Piece* Gridtemplate[8][8] = {
		{ new Rook(1), new Knight(1), new Bishop(1), new Queen(1), new King(1), new Bishop(1), new Knight(1), new Rook(1)},
		{ new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1), new Pawn(1)},
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0), new Pawn(0)},
		{ new Rook(0), new Knight(0), new Bishop(0), new Queen(0), new King(0), new Bishop(0), new Knight(0), new Rook(0)},
};
#endif

using namespace std;

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
		for (int j = 0; j < 8; j++) {
			_Grid[i][j] = Gridtemplate[i][j];
		}
	}

};

void Board::Show() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (_Grid[i][j] == nullptr) {
				cout << "-";
			}
			else {
				cout << _Grid[i][j]->_symbole;
			}
		}
		cout << "\n";
	}
}

