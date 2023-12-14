//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice3
// Nom du fichier 		: main.c
// Date de création 	: 30.09.2015
// Date de modification : 07.01.2016
//
// Auteur 				: Philou (Ph. Bovey), ACL
//
// Version				: x.x
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
					// Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf
const __int16 VMAX = 10000;
const __int16 VMin = -10000;
const double PI = 3.14;

int main(void)
{
	double surface = 0;
	double rayon = 0;
	char lettre = 0;

	__int16 tension = VMAX;
	unsigned __int32 bigVal = 0x123456;
	enum e_TypeFigure { cercle, ellipse, carre, rectangle, triangle };
	__int16 state;
	enum state e_TypeFigure = carre;
	//scanf("%c", lettre);
	lettre = 'B';
	tension = 9500;

	printf(" Tension:%d\nBigVal: %x\nLettre: %c\nFigure %d\nRayon: %a\nSurface: %a\n ",tension, bigVal, lettre, e_TypeFigure,rayon,surface);

	return(0);
}
