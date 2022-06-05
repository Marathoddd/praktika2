#include <conio.h>
#include <stdio.h>
#include "struk.h"

int main()
{
	typedef struct result result;
	result* dannie = Constructor();
	otchislien(dannie);
	stipendia(dannie);
	dopstependia(dannie);
	peresdacha(dannie);
	printf("ќценка: %5.0f\n", minimum_rating(dannie));
	return 0;

}

