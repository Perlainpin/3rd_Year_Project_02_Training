#include "Pawn.h"

Pawn::Pawn(int color){
	_symbole = 'P';
	_color = color;
}

Pawn::~Pawn() {

}

bool Pawn::Move(int x, int y, Piece* board[8][8]){

	LOG("Moving Pawn from " << position[0] << ", " << position[1] << " to " << x << ", " << y);
	
	if (x == position[0] && y == position[1]) {
		LOG("You are already on this spot");
		return false;
	}

	if (x != position[0] && y != position[1]) {
		LOG("This is not aligned");
		return false;
	}

	// check if piece in the way
	if (y == position[1]) {
		LOG("Same y axis");
		// check x axis
		if (position[0] < x && _color == 1) {
			for (int i = position[0] + 1; i < x - 1; i++) {
				if (isCaseEmpty(i, position[1], board) == false) {
					LOG("Someone is already on this spot (" << i << ", " << position[1] << ")");
					return false;
				}
			}
		}
		else {
			for (int i = position[0] - 1; i > x + 1; i--) {
				if (isCaseEmpty(position[0], i, board) == false) {
					LOG("Someone is already on this spot (" << i << ", " << position[1] << ")");
					return false;
				}
			}
		}
	}

	LOG("Yuh uh");
	SetPosition(x, y, board);
	return true;
}