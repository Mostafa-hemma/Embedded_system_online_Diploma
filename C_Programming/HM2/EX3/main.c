/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: mosta
 */


#include "stdio.h"

void main(){

	float x=0 ,y=0 ,z=0;
	printf("enter first Numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf("enter 2nd Numbers : ");

	fflush(stdin);fflush(stdout);

	scanf("%f",&y);
	printf("enter 3rd Numbers : ");

	fflush(stdin);fflush(stdout);

	scanf("%f",&z);



	if(x>y)
	{
		if (x>z)
		printf("largest number is : %f",x);
		else if(x<z)
			printf("largest number is : %f",z);

	}
	else if(x<y && z<y)
		printf("largest number is : %f",y);

}
