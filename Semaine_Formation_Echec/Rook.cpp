#include "Rook.h"
#include "Board.h"

Rook::Rook(){

};

Rook::~Rook() {

};

bool Rook::Move(int x, int y, Piece* board[8][8]){
	if (x == position[0] && y == position[1])
		return false;

	if(x != position[0] && y != position[1]){
		return false;
	}
	// check if piece in the way
	if(y == position[1]){
		// check x axis
		if (position[0] < x) {
			for (int i = position[0]; i < x; i++) {
				if (isCaseEmpty(position[1], i, board) == false)
					return false;
			}
		}
		else {
			for (int i = position[0]; i > x; i--) {
				if (isCaseEmpty(position[1], i, board) == false)
					return false;
			}
		}
	} else if(x == position[0]){
		// check y axis
		if(position[1] < y){
			for (int i = position[1]; i < y; i++) {
				if (isCaseEmpty(position[0], i, board) == false)
					return false;
			}
		} else {
			for (int i = position[1]; i > y; i--) {
				if (isCaseEmpty(position[0], i, board) == false)
					return false;
			}
		}
		
		// we good
		return true;
		//SetPosition(x, y, board);
		
	}

	return false;

}