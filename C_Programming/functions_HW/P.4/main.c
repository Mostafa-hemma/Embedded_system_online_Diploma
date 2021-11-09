/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */

#include "stdio.h"


int power_calculator(int base,int power){
	static int result=1;

	result=result*base;
	power--;
	if(power>0)
		power_calculator(base,power);
	return result;
}
void main(){
	printf("Enter base: ");
	fflush(stdin);fflush(stdout);
	int x=0;
	scanf("%d",&x);
	printf("Enter power: ");
	fflush(stdin);fflush(stdout);
	int y=0;
	scanf("%d",&y);
	int result=0;
	result=power_calculator(x,y);

	printf("%d ^ %d = %d",x,y,result);

}
