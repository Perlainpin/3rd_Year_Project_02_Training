#include "Rook.h"
#include "Board.h"

Rook::Rook(int _color){
	symbol = "R";
	color = _color;
};

Rook::~Rook() {

};

bool Rook::Move(int x, int y, Piece* board[8][8]){

	//symbol = "W";
	//board[x][y] = this;
	std::cout << "Moving rook from " << position[0] << ", " << position[1] << " to " << x << ", " << y << "\n";
	if (x == position[0] && y == position[1]) {
		std::cout << "You are already on this spot";
		return false;
	}

	if(x != position[0] && y != position[1]){
		std::cout << "This is not aligned";
		return false;
	}
	// check if piece in the way
	if(y == position[1]){
		// check x axis
		if (position[0] < x) {
			for (int i = position[0]+1; i < x-1; i++) {
				if (isCaseEmpty(i, position[1], board) == false) {
					std::cout << "Someone is already on this spot (" << i<<", "<<position[1]<<")";
					return false;
				}
			}
		}
		else {
			for (int i = position[0]; i > x; i--) {
				if (isCaseEmpty(position[0], i, board) == false){
					std::cout << "Someone is already on this spot (" << i << ", " << position[1] << ")";
					return false;
				}
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
	std::cout << "Yuh uh";
	SetPosition(x, y, board);
	return true;

}