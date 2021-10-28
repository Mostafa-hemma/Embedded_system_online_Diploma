/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"

void main(){

	float a=0;
	float b=0;
	float temp=0;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);

	scanf("%f",&a);
	fflush(stdin);fflush(stdout);

	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);

	scanf("%f",&b);
	temp=b;
	b=a;
	a=temp;
	printf("After swapping, value of a =  %f",a,"\n");
	printf("After swapping, value of a =  %f",b);

}
