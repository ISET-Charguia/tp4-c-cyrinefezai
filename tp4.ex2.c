/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main() {
	const int n, n1, n2 = 50;
	int t[n], tp[n1], tn[n2];
	int i, k, c, j, a, b;
	printf("donner la taille de tableau t ");
	scanf("%d", &k);
	j = 0;
	c = 0;
	for (i = 0; i < k; i++) {
		printf("t[%d]", i);
		scanf("%d", &t[i]);
		if (t[i] < 0) {
			tn[c] = t[i];
			c = c + 1;
		} else {
			tp[j] = t[i];
			j++;
		}

	}
	printf("les element de tn est \n");
	for (a = 0; a < c; a++) {
		printf(" ");
		printf("%d", tn[a]);
	}
	printf("\n");
	printf("les element de tp est \n");
	for (b = 0; b < j; b++) {
		printf(" ");
		printf("%d", tp[b]);
	}

}
