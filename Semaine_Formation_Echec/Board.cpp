#include "Board.h"
#define COLOR_RED "\033[30;41m"
#define COLOR_NEUTRAL "\033[30;47m"
#define COLOR_BLACK "\033[37;40m"
#define COLOR_BLUE "\033[30;44m"

#define COLOR_SELECTED_BLUE "\033[33;44m"
#define COLOR_SELECTED_RED "\033[33;41m"
#define COLOR_SELECTED_NEUTRAL "\033[33;47m"

#define COLOR_DEST_BLUE "\033[32;44m"
#define COLOR_DEST_RED "\033[32;41m"
#define COLOR_DEST_NEUTRAL "\032[33;47m"

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

Board::Board() {};

Board::~Board() {};

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
				if ((y == selectedY - 1 || selectedY == 0) && (x == selectedX-1 || selectedX == 0) && !(selectedX == 0 && selectedY == 0))
					std::cout << COLOR_SELECTED_NEUTRAL;
				if ((y == destY - 1 || destY == 0) && (x == destX - 1 || destX == 0) && !(destX == 0 && destY == 0))
					std::cout << COLOR_DEST_NEUTRAL;
				std::cout << "_ ";
			}
			else {
				if (_Grid[x][y]->color == 0) {
					std::cout << COLOR_BLUE;
					if ((y == selectedY - 1 || selectedY == 0) && (x == selectedX-1 || selectedX == 0) && !(selectedX == 0 && selectedY == 0))
						std::cout << COLOR_SELECTED_BLUE;
					if ((y == destY - 1 || destY == 0) && (x == destX - 1 || destX == 0) && !(destX == 0 && destY == 0))
						std::cout << COLOR_DEST_BLUE;
				}
				else {
					std::cout << COLOR_RED;
					if ((y == selectedY - 1 || selectedY==0) && (x == selectedX-1 || selectedX == 0) && !(selectedX == 0 && selectedY == 0))
						std::cout << COLOR_SELECTED_RED;
					if ((y == destY - 1 || destY == 0) && (x == destX - 1 || destX == 0) && !(destX==0 && destY==0))
						std::cout << COLOR_DEST_RED;
				}
				std::cout << _Grid[x][y]->symbol << " ";
			}
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	std::cout << COLOR_BLACK;
}

