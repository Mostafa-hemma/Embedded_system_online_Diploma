/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"
void main()
{
	int arr[100];
	int x,y,z;
	printf("enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		fflush(stdin);fflush(stdout);

		scanf("%d",&arr[i]);

	}
	printf("enter element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	for(int i=0;i<x;i++)
	{
		if(y==arr[i])
		{
			z=i+1;
			break;
		}
	}


	printf("Number found at location: %d",z);

}
