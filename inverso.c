/*Seu programa deve receber um vetor de N valores inteiros e imprimir na ordem inversa.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, count;

    scanf("%i", &n);

    int array[n];

    for (count = 0; count < n; count++) {
        scanf("%d", &array[count]);
    }

    for(count = n - 1; count >= 0; count--) {
        printf("%i ", array[count]);
    }

	return 0;
}