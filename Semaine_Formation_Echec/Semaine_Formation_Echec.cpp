#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
    Board* board = new Board();
    board->ResetPieces();
    board->DrawBoard();
    cout << board->_Grid[0][0]->Move(1,0,board->_Grid);
    cout << "\n";
    board->DrawBoard();
    return 0;
}