
#include "stdio.h"

void main(){

	float a=0;
	float b=0;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);

	scanf("%f",&a);
	fflush(stdin);fflush(stdout);

	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);

	scanf("%f",&b);
	//a=20
	//b=60
	//a=60  b=20
	a=a*b; //a=1200
	b=a/b;  // 1200/60=20
	a=a/b;
	printf("After swapping, value of a =  %f",a,"\n");
	printf("\nAfter swapping, value of a =  %f",b);

}
