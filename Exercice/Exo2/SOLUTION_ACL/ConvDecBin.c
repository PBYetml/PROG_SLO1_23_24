//Diviseur binaire
#include <stdio.h>
#include <math.h>




void main(void)
{
	
	int ValDec_initial = 0;
	int ValDec = ValDec_initial;
	float Quotient = 0;
	int Reste = 0;
	//tableau pour resultat
	int TaValBi [8];
	/*iterator*/
	int ite = 0;

	//Demander une valeur comprise entre 0 et 255
	printf_s("Entrez une valeur decimale comprise entre 0 et 255 : ");
	scanf_s("%d", &ValDec_initial);


	//Verifier si la valeur est correcte
	while (ValDec_initial < 0 || ValDec_initial > 255)
	{
		printf_s("La valeur decimal doit etre comprise 0 et 255");
	}
	ite = (log2(ValDec_initial)+1);
	ValDec = ValDec_initial;
	//Tant que ValDec est différent de zéro
	for (int i = 0; i < ite; i++)
	{
		//Calculer le quotient et le reste de la division par 2
		Quotient = (ValDec / 2);
		Reste = (ValDec % 2);

		//Afficher les étapes de la conversion
		printf_s("%d, :2 = %f, R = %d\n", ValDec, Quotient, Reste);
		
		//Mettre à jour ValDec avec le quotient pour la prochaine itération
		ValDec = Quotient;
	}


}
