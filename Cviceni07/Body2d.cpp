#include <iostream>
//#include "stdafx.h" mozna to bude potreba ve skole
#include "Body2d.h"

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	referencniX = (*poleBodu)[0];
	referencniY = (*poleBodu)[1];

	printf("Napiste X pro nejblizsi index:  .");
	scanf_s((*poleBodu)[0]);
	
	printf("Napiste Y pro nejblizsi index:  .");
	scanf_s((*poleBodu)[1]);
	return referencniX;
	return referencniY;
}

double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY) 
{
	return 0;
}