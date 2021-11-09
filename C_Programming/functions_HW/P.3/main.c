/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: mosta
 */


#include "stdio.h"
#include "string.h"

void reversing(char arr[],int x){

	printf("%c",arr[x-1]);
	x--;
	if(x>0)
		reversing(arr,x);



}


void main(){
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);

	char arr[100];
	gets(arr);
	int x=0;
	x=strlen(arr);
	reversing(arr,x);
	//printf("your sentence is: %x",arr[11]);

}
