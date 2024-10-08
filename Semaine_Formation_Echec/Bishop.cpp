#include "Board.h"

#include "Bishop.h"

Bishop::Bishop(int _color){
	symbol = "B";
	color = _color;
}

Bishop::~Bishop() {

}

bool Bishop::Move(int x, int y, Piece* board[8][8])
{
	std::cout << "Moving bishop from " << position[0] << ", " << position[1] << " to " << x << ", " << y << "\n";
	if(isCaseEmpty(x, y, board) == false){
		return false;
	}

	// check if on same diagonal as the piece
	for (int i = 0; i < 8; i++) {
		for (int j= 0; j < 8; j++) {

		}
	}
}
