/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */

#include "stdio.h"

int check_prime(int x)
{
	int flag=0;
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0){
			flag=1;
			break;
		}
	}

	return flag;

}

void main()
{
	printf("please enter the two intervals: \n");
	int x,y;
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	printf("prime number between %d  and %d : ",x,y);
	int flag=0;
	for(int i=x;i<y;i++){
		flag=check_prime(i);
		if(flag==0)
			printf("%d ",i);

	}



}
