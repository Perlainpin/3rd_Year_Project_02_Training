#include "Rook.h"
#include "Board.h"

using namespace std;

#ifdef _LOG
	#define LOG(txt) cout<<txt<<endl
#else
	#define LOG(txt)
#endif



Rook::Rook(int _color){
	symbol = "R";
	color = _color;
};

Rook::~Rook() {

};

bool Rook::Move(int x, int y, Piece* board[8][8]){

	//symbol = "W";
	//board[x][y] = this;
	LOG("Moving rook from " << position[0] << ", " << position[1] << " to " << x << ", " << y);
	if (x == position[0] && y == position[1]) {
		LOG("You are already on this spot");
		return false;
	}

	if(x != position[0] && y != position[1]){
		LOG("This is not aligned");
		return false;
	}
	// check if piece in the way
	if(y == position[1]){
		LOG("Same y axis");
		// check x axis
		if (position[0] < x) {
			for (int i = position[0]+1; i < x-1; i++) {
				if (isCaseEmpty(i, position[1], board) == false) {
					LOG("Someone is already on this spot (" << i<<", "<<position[1]<<")");
					return false;
				}
			}
		}
		else {
			for (int i = position[0]-1; i > x+1; i--) {
				if (isCaseEmpty(position[0], i, board) == false){
					LOG("Someone is already on this spot (" << i << ", " << position[1] << ")");
					return false;
				}
			}
		}
	} else if(x == position[0]){
		LOG("Same x axis");
		// check y axis
		if(position[1] < y){
			for (int i = position[1]+1; i < y-1; i++) {
				if (isCaseEmpty(position[0], i, board) == false) {
					LOG("Someone is already on this spot (" << i << ", " << position[1] << ")");
					return false;
				}
			}
		} else {
			for (int i = position[1]-1; i > y+1; i--) {
				if (isCaseEmpty(position[0], i, board) == false){
					LOG("Someone is already on this spot (" << i << ", " << position[1] << ")");
					return false;
				}
			}
		}
		
		// we good
		//return true;
		//SetPosition(x, y, board);
		LOG("uh idk");
	}
	LOG("Yuh uh");
	SetPosition(x, y, board);
	return true;

}