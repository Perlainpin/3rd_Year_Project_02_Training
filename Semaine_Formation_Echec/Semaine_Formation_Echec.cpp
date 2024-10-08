#include <iostream>
#include "Board.h"

using namespace std;

#ifdef _LOG
    #define LOG(txt) cout<<txt<<endl
#else
    #define LOG(txt)
#endif

int main()
{
    Board* board = new Board();
    board->ResetPieces();
    board->DrawBoard();
    LOG(board->_Grid[0][0]->Move(3,0,board->_Grid));
    board->DrawBoard();
    LOG(board->_Grid[3][0]->Move(3, 7, board->_Grid));
    board->DrawBoard();
    return 0;
}