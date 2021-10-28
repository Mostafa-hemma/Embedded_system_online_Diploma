/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"

void main()
{
	int x=0;
	printf("enter an integer u want to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);

	}


}
