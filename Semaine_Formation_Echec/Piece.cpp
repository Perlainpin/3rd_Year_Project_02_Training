#include "Piece.h"
#include <iostream>

Piece::Piece() {
	symbol = "O";
	color = 0;
}

Piece::Piece(int _color) {
	symbol = "O";
	color = _color;
}

Piece::~Piece() {

}

void Piece::SetPosition(int x, int y, Piece* board[8][8]){
	// if board case is occupied, eat the piece (except if you are a pawn)
	
	if(isCaseEmpty(x,y,board)){
		board[x][y] = this;
		board[position[0]][position[1]] = nullptr;
	}
	position[0] = x;
	position[1] = y;
}

bool Piece::Move(int x, int y, Piece* board[8][8]) {
	std::cout << "Moving piece from " << position[0] << ", " << position[1] << " to " << x << ", " << y << "\n";
	return false;
}

bool Piece::isCaseEmpty(int x, int y, Piece* grid[8][8]) {
	if (grid[x][y] != nullptr) {
		return false;
	}
	return true;
};