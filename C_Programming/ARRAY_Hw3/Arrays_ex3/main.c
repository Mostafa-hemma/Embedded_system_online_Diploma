/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */


#include "stdio.h"
void main()
{
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	int rows ,cloumns;
	int arr[100][100];

	scanf("%d",&rows);
	scanf("%d",&cloumns);
	printf("Enter elements of matrix: ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cloumns;j++)
		{
			printf("Enter element a%d%d: ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);

		}
	}
	printf("Entered matrix: \n");

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cloumns;j++)
		{
			printf("%d  ",arr[i][j]);
			if(j==cloumns-1)
				printf("\n");

		}
	}

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cloumns;j++)
		{

			arr[j][i]=arr[i][j];


		}
	}
	printf("Transpose: \n");

	for(int i=0;i<cloumns;i++)
		{
			for(int j=0;j<rows;j++)
			{

				printf("%d  ",arr[i][j]);
				if(j==rows-1)
					printf("\n");

			}
		}


}
