#include "Knight.h"

Knight::Knight(int _color){
	symbol = "H";
	color = _color;
}

Knight::~Knight(){

}

bool Knight::Move(int x, int y, Piece* board[8][8]) {
	return false;
}