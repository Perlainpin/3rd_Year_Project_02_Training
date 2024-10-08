#include <iostream>
#include "Board.h"

using namespace std;

#ifdef _LOG
    #define LOG(txt) cout<<txt<<endl
#else
    #define LOG(txt)
#endif

bool play = true;


void Input(Board* board) {
    bool allSelected = false;
    string input;

    string axis = "Y";
    while (!allSelected) {
        if (board->destX == 0 || board->selectedX == 0) {
            axis = "X";
        }
        cout << "Select " << axis << " coordinates or type \"quit\" to leave the game:\n";
        cin >> input;

        if (input == "quit") {
            play = false;
            cout << "Leaving game";
            return;
        }

        if (stoi(input) > 0 && stoi(input) < 9) {
            //valid
            LOG("valid");
            if (board->selectedX == 0) {
                board->selectedX = stoi(input);
            } 
            else if (board->selectedY == 0) {
                board->selectedY = stoi(input);
            }
            else if (board->destX == 0) {
                board->destX = stoi(input);
            }
            else if (board->destY == 0) {
                board->destY = stoi(input);
            }
            else {
                allSelected = true;
            }
        }
        else {
            cout << "\nEnter a valid X coordinate (between 1 and 8)\n";
        }
        board->DrawBoard();
    }

    board->_Grid[board->selectedX][board->selectedY]->Move(board->destX, board->destY, board->_Grid);
}

int main()
{
    Board* board = new Board();
    board->ResetPieces();
    board->DrawBoard();
    while (play)
    {
        Input(board);
        
        /*LOG(board->_Grid[0][0]->Move(3, 0, board->_Grid));
        board->DrawBoard();*/
        //LOG()
        //board->_Grid[3][0]->Move(3, 7, board->_Grid);
        //board->DrawBoard();
        //play = false;
    }
    
    return 0;
}