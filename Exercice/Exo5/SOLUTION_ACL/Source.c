/*
ACL
14.12.2023
Exercice5: les boucles
*/

#include <stdio.h>
#include <stdlib.h>

int GetUserVal()
{
	unsigned int userVal = 0;
	printf("entre une valeur BCD (1->9)");
	scanf("%d", &userVal);

	while (userVal > 9)
	{
		printf("WOW entre 1 et 9 : ");
		scanf("%d", &userVal);
	}

	return userVal;
}

void TestA(void)
{
	unsigned int i = 0;
	unsigned int a = 0;
	a = GetUserVal();

	for (i = 0; i < a; i++)
	{
		printf("i=%d\n", i);
	}

}
void TestB(void)
{
	signed char int8Val = 125;
	unsigned char uint8Val = 125;
	unsigned int i = 0;
	for (i = 0; i < 10; i++)
	{

		printf("int8val = %d uint8val = %d \n ", (int8Val), uint8Val);
		int8Val++;
		uint8Val++;
	}

}
int ChoseMode()
{
	unsigned int status = 0;
	unsigned int choix = 0;
	printf("Entrez votre choix Pour TestA: A,Pour TestB: B, Pour quitter: Q ");

	scanf("%c", &choix);
	switch (choix)
	{
	case 'A':
		TestA();
		break;
	case 'B':
		TestB();
		break;
	case 'Q':
		exit(status);
		break;
	}

}
void main(void)
{
	while (1)
	{
		ChoseMode();
	}
}
