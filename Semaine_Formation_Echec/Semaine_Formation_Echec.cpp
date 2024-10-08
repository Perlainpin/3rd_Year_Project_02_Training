#include <iostream>
#include "Board.h"

using namespace std;

#ifdef _LOG
    #define LOG(txt)            cout << txt << endl
#else
    #define LOG(txt)
#endif

#ifdef _DEMO
    #define Nombre_De_Coup_Max 2  
    #define Mots_De_Fin "merci d'avoir jouer a la demo de notre jeu"
#else
    #define Nombre_De_Coup_Max 999
    #define Mots_De_Fin "merci d'avoir jouer a notre jeu"
#endif


void main()
{
    int coups_jouer = 0;

    while (coups_jouer < Nombre_De_Coup_Max){
        Board* board = new Board();
        board->ResetPieces();
        coups_jouer++;
    }

    LOG("log work");

    cout << Mots_De_Fin << "\n";

    return;
}