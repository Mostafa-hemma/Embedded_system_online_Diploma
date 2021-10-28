/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"

void main()
{
	char x;
	printf("enter an character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if((x<='z'&&x>='a')||(x<='Z'&&x>='A'))
	{
		printf("%c is an alphabet",x);
	}
	else

		printf("%c is not an alphabet",x);
}
