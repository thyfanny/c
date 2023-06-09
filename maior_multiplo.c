/*Seu objetivo é determinar o maior múltiplo de um inteiro dado menor do que ou igual a um outro inteiro dado*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, max, multiplicador = 0, multiplo = 0;
    scanf("%i", &num);
    scanf("%i", &max);

    while(multiplo <= max){
        multiplo = multiplicador * num;
        multiplicador++;
    }

    if (num > max) {
        printf("Não há múltiplos menores que %i", max);
    }
    else{
        printf("%i", multiplo-num);
    }

	return 0;
}