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
	int x,y,z,temp,temp2;
	printf("enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		fflush(stdin);fflush(stdout);

		scanf("%d",&arr[i]);

	}
	printf("enter element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);

	printf("enter it's location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&z);

	for(int i=0;i<x;i++)
	{
		if(i+1==z)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			temp=arr[i];
			arr[i]=y;
		}
		else if(i+1>z){
			temp2=arr[i+1];
			arr[i+1]=temp;
			temp=temp2;

		}

	}
	for(int i=0;i<x+1;i++)
	{
		printf("%d ",arr[i]);
	}

}
