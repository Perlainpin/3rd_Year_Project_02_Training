#include "Board.h"

#include "Bishop.h"

Bishop::Bishop(int color){
	_symbole = 'B';
	_color = color;
}

Bishop::~Bishop() {

}

bool Bishop::Move(int x, int y, Piece* board[8][8])
{
	if(isCaseEmpty(x, y, board) == false){
		return false;
	}

	// check if on same diagonal as the piece
	for (int i = 0; i < 8; i++) {
		for (int j= 0; j < 8; j++) {

		}
	}
}
