/*Na primeira linha você receberá um número inteiro n indicando o tamanho de cada um dos arrays.

As próximas n linhas correspondem aos elementos do primeiro array.

Depois seguirão mais n linhas correspondendo aos elementos do segundo array.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, count;

    scanf("%i", &num);

    int lista1[num], lista2[num];

    for (count = 0; count < num; count++) {
        scanf("%d", &lista1[count]);
    }

    for (count = 0; count < num; count++) {
        scanf("%d", &lista2[count]);
    }

    for (count = 0; count < num; count++) {
        printf("%i\n", lista1[count]);
        printf("%i\n", lista2[count]);
    }

	return 0;
}