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
	printf("Enter an alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	switch(x)
	{
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
	case'A':
	case'E':
	case'I':
	case'O':
	case'U':
	{
		printf("%c is a vowel",x);
		break;
	}
default:
{
	printf("%c is a consonant",x);
			break;
}



	}


}
