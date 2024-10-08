#include "Utility.h"
#include "Board.h"

using namespace std;

void main()
{
    int CoupsJouer = 0;

    int PlayerTour = 0;

    while (CoupsJouer < Nombre_De_Coup_Max){
        Board* board = new Board();
        board->ResetPieces();
        //board->Show();
        CoupsJouer++;
    }

    LOG("log work");

    cout << Mots_De_Fin << "\n";

    return;
}