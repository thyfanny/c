/*Crie um problema em Linguagem C que preenche dois vetores com dez números inteiros. E seguida, seu programa deverá armazenar em um 
terceiro vetor a soma dos dois vetores lidos.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int vetor1[10], vetor2[10], vetorSoma[10];
    int count;

    for (count = 0; count < 10; count++) {
        scanf("%d", &vetor1[count]);
    }

    for (count = 0; count < 10; count++) {
        scanf("%d", &vetor2[count]);
    }

    // Soma dos vetores
    for (count = 0; count < 10; count++) {
        vetorSoma[count] = vetor1[count] + vetor2[count];
    }

    for (count = 0; count < 10; count++) {
        printf("%d ", vetorSoma[count]);
    }

    return 0;
}
