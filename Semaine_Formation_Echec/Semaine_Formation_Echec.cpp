#include <iostream>
#include "Board.h"

using namespace std;

void main()
{
    Board* board = new Board();
    board->ResetPieces();
    cout << board->_Grid[0][0]->Move(1,0,board->_Grid);
    return;
}