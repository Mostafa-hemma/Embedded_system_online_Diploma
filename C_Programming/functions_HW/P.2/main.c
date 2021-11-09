/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */
#include "stdio.h"

int factorial(int x){
	static int product=1;
	product=product*x;
	x--;
	if(x>0)
		factorial(x);
	return product;

}
void main(){

	printf("please enter the positive number: ");
	int x=0;
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int y=0;
	y=factorial(x);
	printf("Factorial of %d is: %d",x,y);

}
