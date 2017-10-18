/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
const int n=50 ;
int t[n];
int a,i,x,j;
printf("donner un entier a convertir");
scanf("%d",&x);
i=-1;
do {
	i=i+1 ;
	a=x%2 ;
	t[i]=a ;
	x=x/2 ;
} while (x!=0);
for (j=i;j>0;j--)
{
	printf("%d",t[j]);
}
}
