/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
int x,i,j ;
 const int n=10 ;
 int T[n];
 float M ;
 printf("entrer la taille du tableau");
 scanf("%d",&j);
 x=0;
 for (i=0;i<j;i++)
 {
	 printf("T[%d]",i);
	 scanf("%d",&T[i]);
	 x=x+T[i];
 }
 M=(x+0.0)/j;
 printf("%f",M);

}
