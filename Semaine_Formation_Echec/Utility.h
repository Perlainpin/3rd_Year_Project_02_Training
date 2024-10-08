#pragma once
#include <vector>
#include <iostream>

#ifdef _LOG
	#define LOG(txt)            std::cout << txt << std::endl
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