/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"
void main ()
{

	char x;
	float y=0,z=0,sum = 0;
	printf("enter the operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	printf("enter the two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	scanf("%f",&z);
	switch(x)
	{
	case '*': {
		sum=y*z;
		printf("%f %c %f = %f",y,x,z,sum);

	}
	break;

	case '/': {
		sum=y/z;
		printf("%f %c %f = %f",y,x,z,sum);

	}
	break;

	case '+': {
		sum=y+z;
		printf("%f %c %f = %f",y,x,z,sum);

	}
	break;

	case '-': {
		sum=y-z;
		printf("%f %c %f = %f",y,x,z,sum);

	}

	break;



	}


}
