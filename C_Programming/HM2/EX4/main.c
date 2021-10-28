/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"

void main(){

	float x;
	printf("enter the number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x>0)
		printf("%f is positive ",x);
	else if(x<0)
		printf("%f is negative ",x);
	else
	printf("%f is zero ",x);

}
