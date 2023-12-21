//-- librairies standard --//
#include <stdint.h>
#include "testQ4.h"

//-- variable globales --//


//-- programme principal --//
void main()
{
	int16_t infoSigne, infoValeurEntier, valeurTemp;
	float infoValeurDemi;

	
	infoSigne = Valeur_Brut_CptDS1820 >> 8; //décalage de 8bits

	if (infoSigne == 0xFF)
	{
		infoSigne = -1;
	}
	else
	{
		infoSigne = 1;
	}

	infoValeurDemi = (Valeur_Brut_CptDS1820 & 0x0001) * Multiple_Demi;

	infoValeurEntier = (Valeur_Brut_CptDS1820 & 0x00FF) >> Decalage_Bit;

	valeurTemp = (float)infoSigne * (infoValeurDemi + infoValeurEntier);

}
