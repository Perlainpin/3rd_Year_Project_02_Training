#include "Queen.h"

Queen::Queen(int _color){
	symbol = "Q";
	color = _color;
};

Queen::~Queen(){

};

bool Queen::Move(int x, int y, Piece* board[8][8]) {
	return false;
}