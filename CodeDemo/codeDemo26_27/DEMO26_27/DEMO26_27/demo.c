//-----------------------------------------------------------------------------------//
// Project Name 		: Demo26_27
// File name 			: demo.c
// Date de cr�ation     : 29.09.2025
// Date de modification : 15.09.2026
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 1.4
//
// Description          : demo pour SLO1 26-27
//						  -> types Entier
//						  -> variable - tableau 
//						  -> condition - it�ration
//						  -> appel de fontion - utilisation lib perso + standard 
// 
// Remarques			:         
//----------------------------------------------------------------------------------//

//-- librairie standard --// 
#include <stdio.h>			// lib pour les entr�e - sortie (console - lecture clavier)
#include <stdint.h>			// lib pour le entier normalis� 
	// lib pour le type bool 
	// pour la gestion des chaine de caract�re

//-- librairie perso --//  


//-- d�finition --// 
#define ANNEES "26-27"
#define VERSION 1.1


//-- constante gloable --// 


//----------------------------------------------------------------------------------//
//-- nom fct : main
//-- param�tre entr�e : -
//-- param�tre sortie : - 
//-- param�tre IN-OUT : - 
//-- description : programme principal 
//----------------------------------------------------------------------------------//
void main()
{
	//-- variables --//
	//--- Entier Standard 
	//--- Sign� (+/-) ->	// possibilité de mettre le mot :  "signed" devant le type
	char exemple1; 			// 1 octet -> en lien avec des les caractère ASCII
	short exemple2 = 0; 	// 2 octets 
	int exemple3; 			// 4 octets -> int ou long - /!\ en lien avec soit le uC/uP le compilateur / OS			
	long long exemple; 		// 8 octets 

		//--- Non sign� (+) 
	unsigned char exemple1_s; 			// 1 octet -> en lien avec des les caractère ASCII
	unsigned short exemple2_s = 0; 		// 2 octets 
	unsigned int exemple3_s; 			// 4 octets - int ou long - /!\ en lien avec soit le uC/uP le compilateur / OS			
	unsigned long long exemple_s; 		// 8 octets 

		//--- Entier Notrmalis� -> librairie ???
			//--- Sign� (+/-)
	int8_t 	exemple1_std;		// 1 octet
	int16_t exemple2_std;		// 2 octets 
	int32_t exemple3_std;		// 4 octets			
	int64_t exemple4_std;		// 8 octets 

	//--- Non sign� (+) 
		// 1 octet
		// 2 octets 
		// 4 octets			
		// 8 octets 




	//--- autre(s)

	//---


	//--- Réel 
		// 4 octets 
		// 8 octets 
	



	
	//-- appel de fonction 
	//--- fct -> Affichage utilisateur 

	//--- fct -> taille variable - constante - autre 


	//-- opérateur mathématique 

	//-- opérateur logique -> bit à bit 

	//-- opérateur de décalage

	//-- opréateur relationnels (condition)

	// cast implicite 

	// cast explicite 

	//-- condtion - selection 

	//-- itérations 
}








	
















	//--> info user 
	//printf("Code demo - SLO - %s - %2.1f \n", ANNEES, VERSION);

	//--> message user -> info taille 
	/*printf("\n-> taille d'un booleen %d [o]", );
	printf("\n-> taille du tableau multidimension : %d [o]", );*/


	//--d�finition d'un type enum�ration -> e_machineEtat -> locale --// 
					  //ETAT1 = 0, ETAT2 = 20, ETAT3 = 21
	

	//-- utilisation d'une �num�ration globale -> e_FORME --// 
	

	//-- d�claration structure --// 
	//-- local //-- type //-- variable 
	


	// -- type		//-- variable 
	

								//led R, G, B, lum, nb



	// -- gestion union 
 

					  //MSB - LSB



	//-- lecture �criture --// 


	//-- passage par r�f�rence --//


	//-- MAJ de la variable enum


	//--- Reel 
	//-> taille 4 octets
 

	// cast implcite -> entier -> reel
        // _m => metre 

	//-> taille 8 octets 


	// -> pour tester 10 case -> soit < 10 ou <= 9
	// -> remplir un tableau en partant de la lettre 'A'


		// -> Ox41 correspond au 'A'	(voir table ASCII) 

		
		// -> affichage de chaque caract�re 


	// -> exemple de r�cuperation d'une valeur d'un tableau 


	// -> exemple d'un 



	//-- une imstruction  est compos� d'op�randes (variable) et d'op�rateur (signe) --//
	//-- cast => (type)variable 


	//-- attention au cast implicite


	//-- appel de fct 
	//--> calcul perimetre ccercle 


	//--> calcul d'une moyenne


	//-> message user 
 
	
	//--> perim�tre 


	//--> moyenne


	//-- condition -> expression


	//-- condition prioritaire 
	

		//-- condition secondaire 
		//

	

	//-- machine �tat --//

		//-- instruction 1... 
		//-- instruction 2... 
		

	
		//-- instruction 1... 
		//-- instruction 2... 




	//-- it�ration  --// 

	//--> 1 contion  -> 2 execution si vrai 
	//-- boucle infinie 
	



	//-- au minium une fois dans la boucle


			
	//-- pour les compteur --> connait le nombre d'it�ration
	//-- boucle � l'infini --// 
	


	//->1) initialisation plusieurs variables 2) condition 3) 
	





















