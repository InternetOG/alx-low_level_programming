#include <stdio.h>
#include "main.h"

/**
 * _isupper - This checks for Uppercase char
 *
 * @c: This is a char
 *
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int sum1 = 0;	
	int nRows = sizeof(*a) / sizeof(*a[0]);
    	int nCols = sizeof(*a[0]) / sizeof(*a[0][0]);
	size = nRows;

	for (i = 0; i < nRows; i++){
		for (j = 0; j < nCols; j++){
			if (i == j){
				sum += *a[i][j];
			}
		}
	}
	for (i = 0; i < nRows; i++){
		for (j = nCols; j >= 0; j--){
			if ((nRows - i) - 1 == j){
				sum1 += *a[i][j];
			}
		}
	}
	printf("%i, %i", sum, sum1);
}
