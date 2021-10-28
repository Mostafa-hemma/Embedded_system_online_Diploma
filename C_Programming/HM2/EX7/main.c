/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"

void main(){

	int x=0;
	int factorial=1;
	printf("enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);

	if(x<0)
		printf("ERROR!!! Factorial of negtive number doesnt exist");
	else
	{
		for(int i=1;i<=x;i++)
			{
				factorial=factorial*i;

				//printf("sum is %d",sum);

			}
			fflush(stdin);fflush(stdout);

			printf("sum is %d",factorial);

	}
}
