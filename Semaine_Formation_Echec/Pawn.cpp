#include "Pawn.h"

Pawn::Pawn(int _color){
	symbol = "P";
	firstMove = true;
	color = _color;
}

Pawn::~Pawn() {

}

bool Pawn::Move(int x, int y, Piece* board[8][8]) {
	if (board[x][y] == nullptr) {
		if(x != position[0]) // trying to move diagonally on an empty case
			return false;
		else
		{

		}
	}
}