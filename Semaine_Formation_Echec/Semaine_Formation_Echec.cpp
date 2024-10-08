#include <iostream>
#include "Board.h"

using namespace std;

#ifdef _LOG
    #define LOG(txt) cout<<txt<<endl
#else
    #define LOG(txt)
#endif

bool play = true;


void Input() {
    string input;
    cout << "Select X coordinates or type \"quit\" to leave the game:\n";
    cin >> input;
    if (input == "quit") {
        play = false;
        cout << "Leaving game";
        return;
    }
    if (stoi(input) > 0 && stoi(input) < 9) {
        //valid
        LOG("valid");
    }
    else {
        cout << "\nEnter a valid X coordinate (between 1 and 8)\n";
    }
}

int main()
{
    Board* board = new Board();
    board->ResetPieces();
    board->DrawBoard();
    while (play)
    {
        Input();
        
        /*LOG(board->_Grid[0][0]->Move(3, 0, board->_Grid));
        board->DrawBoard();*/
        //LOG(board->_Grid[3][0]->Move(3, 7, board->_Grid));
        //board->DrawBoard();
        //play = false;
    }
    
    return 0;
}