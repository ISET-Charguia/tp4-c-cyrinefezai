/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
#include <stdio.h>

int main()
{
	const int b=20;
	int T1[b];
	int T2[b];
	int T3[b];
	int i,j,k,x,y;
	printf("donner la taille du tableau 1");
	scanf("%d",&x);
	printf("donner  la taille du tableau 2");
	scanf("%d",&y);
	for (i=0;i<x;i++)
	{
		printf("donner T[%d]",i);
		scanf("%d",&T1[i]);
	}
	for (i=0;i<y;i++)
	{
		printf("Saisie T[%d]",i);
		scanf("%d",&T2[i]);
	}
	for (i=0;i<x+y;i++)
	{
		for (k=0;k<x;k++)
		{
		   T3[i]=T1[i];
		}
		for (i=0;j<y;j++)
		{
		   if (T2[j]<T3[i])
		   {
			   T3[i+1]=T3[i];
			   T3[i]=T2[j];
		   }
		   else
		   {
			   T3[i]=T2[j];
		   }
		}
	}
	for (j=0;j<y+x;j++)
	{
		printf("\n",T3[j]);
	}
}
