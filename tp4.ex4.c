/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 const int n=30;
 int i,j,x;
 printf(" donner la taille du tableau");
 scanf("%d",&x);
for (i=0;i<x;i++);
{
	printf("t1[%d]",i);
	scanf("%d",&t1[i]);
}
for(j=0;j<x;j++)
{
	printf("t2[%d",j);
	scanf("%d",&t2[j]);
}
printf("le contenue de t1 avant permutation est \n");
for(j=0;j<x;j++){
	printf("%d",t1[j]);}
printf("\n");
printf("le contenue de t2 avant permutation est \n");
for (j=0;j<x;j++);
printf("%d",t2[j]);
printf("\n");
}
for (j=0; j<x ;j++)
{
	t3[j]=t1[j];
	t1[j]=t2[j];
	t3[j]=t3[j];
}
printf("le contenue de t");
}
