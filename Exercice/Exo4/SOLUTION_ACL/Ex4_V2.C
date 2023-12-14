//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice4
// Nom du fichier 		: Ex4_V2.c
// Date de création 	: xx.xx.2023
// Date de modification : xx.xx.2023
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//						  ACL
//
// Version 				: 2
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf


int main(void)
{
	// Déclaration cas A
	signed short A1 = 400;
	signed short A2 = 500;
	signed short resA1 = A1 * A2;
	signed long resA2 = A1 * A2;

	// Déclaration cas B
	unsigned short  valB = 0x1234;
	unsigned char  highVal = 0;
	unsigned char  lowVal = 0;
	// Déclaration cas C
	unsigned short C1 = 0x5555;
	unsigned short C2 = 0x0F0F;
	unsigned short resC = C1 | C2;
	// Déclaration cas D
	signed char D1 = 1325;
	signed char D2 = 7;
	signed char resD1 = D1/D2;
	signed char resD2 = D1 % D2;
	// Traitement cas A
	printf("Traitement cas A \n%");

	printf("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2, resA1);
	printf("ResA2 = A1 * A2 soit  %d * %d = %d \n", A1, A2, resA2);

	// Traitement cas B
	highVal = (valB >> 8);
    lowVal = ((valB << 8)>>8);
	printf("Traitement cas B \n");

	printf ("ValB %x HighValB = %x LowValB = %x \n", valB, highVal, lowVal);

	// Traitement cas C
	printf("Traitement cas C \n");

	printf ("ResC = %x  OU %x =  %x \n",C1,C2,resC);

	resC = C1 & C2;

	printf ("ResC = %x  ET %x =  %x \n", C1, C2, resC);

	// Traitement cas D

	printf("Traitement cas D \n");

	printf ("Division de %d par %d = %d Reste = %d \n",D1,D2,resD1,resD2);

	return(0);
}
