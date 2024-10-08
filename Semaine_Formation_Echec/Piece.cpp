#include "Piece.h"

Piece::Piece() {
	_symbole = 'X';
}

Piece::~Piece() {

}

void Piece::SetPosition(int x, int y, Piece* board[8][8]){
	// if board case is occupied, eat the piece (except if you are a pawn)
	if(isCaseEmpty(x,y,board)){
		board[x][y] = this;
		board[position[0]][position[1]] = nullptr;
	}
}

bool Piece::Move(int x, int y, Piece* board[8][8]) {
	return false;
}

bool Piece::isCaseEmpty(int x, int y, Piece* grid[8][8]) {
	if (grid[x][y] != nullptr) {
		return false;
	}
	return true;
};