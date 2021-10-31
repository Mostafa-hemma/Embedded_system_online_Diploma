/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */

#include "stdio.h"
void main(){
	float arr1[2][2];
	float arr2[2][2];
	printf("Enter the elements of the first matrix \n");

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix \n");

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr2[i][j]);
			arr2[i][j]=arr2[i][j]+arr1[i][j];
		}
	}
	printf("the sum is: \n");

		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				printf("%f    ",arr2[i][j]);
				if(j==1)
					printf("\n");

			}
		}


}
