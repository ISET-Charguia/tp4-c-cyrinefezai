/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int main()
{
	const int t=20;
	int tab[t][t];
	int i,a,b,j,S=0;
	printf("donner le nombre des lignes");
	scanf("%d",&b);
	printf("donner le nombre des colonne");
	scanf("%d",&a);
	for (i=0;i<b;i++)
	{
		for (j=0;j<a;j++)
		{
		printf("donner T[%d,%d]",i,j);
		scanf("%d",&tab[i][j]);
		S=S+tab[i][j];
		}
	}
	for (i=0;i<b;i++)
	{
		for (j=0;j<a;j++)
		{
		    printf("\n %d",tab[i][j]);
		}
	}
	printf("\n La moyenne des entiers de tableau= %d",S/(b*a));
	printf("\n La somme des entiers de tableau= %d",S);
	return 0;
}
