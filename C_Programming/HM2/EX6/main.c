/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"

void main(){

	int x=0;
	int sum=0;
	printf("enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);

	for(int i=1;i<=x;i++)
	{
		sum=sum+i;

		//printf("sum is %d",sum);

	}
	fflush(stdin);fflush(stdout);

	printf("sum is %d",sum);

}
