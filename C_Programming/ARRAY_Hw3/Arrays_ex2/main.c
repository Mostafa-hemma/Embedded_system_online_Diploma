/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include"stdio.h"
int main()
{
	printf("enter the numbers of data: \n");
	int x;
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("%d",x);
	float arr[100];
	float sum=0;
for(int i=0;i<x;i++)
{
	printf("enter the number: \n");
		fflush(stdin);fflush(stdout);
		scanf("%f",arr[i]);
		sum+=arr[i];
}
printf("Average: %f",sum/x);

}
