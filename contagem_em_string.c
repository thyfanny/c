/*Eu sou fanático pela letra a. Para mim, é muito importante saber quantas vezes a letra a aparece em qualquer texto. 
Você pode me ajudar? Crie um programa que leia um texto qualquer e me diga quantas vezes a letra a aparece nele.

OBS: desconsidere acentos, como ã e à.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char texto[100];
    int count, contador = 0;

    fgets(texto, sizeof(texto), stdin);

    for (count = 0; texto[count] != '\0'; count++){
        if (texto[count] == 'a' || texto[count] == 'A') {
            contador++;
        }
    }

    printf("%d", contador);

	return 0;
}