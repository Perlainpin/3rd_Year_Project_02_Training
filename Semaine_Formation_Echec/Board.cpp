#include "Board.h"
#define COLOR_RED "\033[30;41m"
#define COLOR_NEUTRAL "\033[30;47m"
#define COLOR_BLACK "\033[37;40m"
#define COLOR_BLUE "\033[30;44m"

Piece* Gridtemplate[8][8] = {
		{ new Rook(1), new Knight(1), new Bishop(1), new Queen(1), new King(1), new Bishop(1), new Knight(1), new Rook(1)},
		//{ new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1),  new Pawn(1), new Pawn(1)},
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		{ nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr },
		//{ new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0),  new Pawn(0), new Pawn(0)},
		{ new Rook(0), new Knight(0), new Bishop(0), new Queen(0), new King(0), new Bishop(0), new Knight(0), new Rook(0)},
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
		for (int j = 0; j < 8; j++) {
			_Grid[i][j] = Gridtemplate[i][j];
			if (_Grid[i][j] != nullptr) {
				_Grid[i][j]->position[0] = i;
				_Grid[i][j]->position[1] = j;
			}
		}
	}

};

void Board::DrawBoard() {
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			if (_Grid[x][y] == nullptr) {
				std::cout << COLOR_NEUTRAL;
				std::cout << "_ ";
			}
			else {
				if (_Grid[x][y]->color == 0)
					std::cout << COLOR_BLUE;
				else
					std::cout << COLOR_RED;
				std::cout << _Grid[x][y]->symbol << " ";
			}
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	std::cout << COLOR_BLACK;
}

