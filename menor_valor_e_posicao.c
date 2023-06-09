/*Escrever um programa que lê um número N. Este N é o tamanho de um array.

Em seguida, leia cada um dos N números do array, encontre o menor elemento desse array, 
a sua posição dentro do array e imprima essas informações.

Considere que o array começa na posição 0*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, count, menor, posicao;
    scanf("%i", &n);
    
    int array[n];
    for (count = 0; count < n; count++) {
        scanf("%d", &array[count]);
    }

    for (count = 0, menor = array[0]; count < n; count++) {
        if (array[count] < menor){
            menor = array[count];
            posicao = count;
        }
    }

    printf("Menor valor: %i\nPosicao: %i", menor, posicao);

	return 0;
}