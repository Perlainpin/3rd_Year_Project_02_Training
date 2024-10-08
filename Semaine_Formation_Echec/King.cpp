#include "King.h"

King::King(int _color){
	symbol = "K";
	color = _color;
}

King::~King() {

}

bool King::Move(int x, int y, Piece* board[8][8]) {
	return false;
}