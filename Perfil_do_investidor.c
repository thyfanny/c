/*Ambrósio abriu uma corretora e precisa de um programa para traçar o perfil dos investidores, conforme alocação em renda fixa e 
variável. Ambrósio considera que aqueles que investem apenas até 10% em renda variável são considerados conservadores. Já aqueles
que investem mais de 10% a até 30% são arrojados. Já aqueles que investem mais de 30% em renda variável são considerados agressivos. 
Seu programa deve receber os valores investidos em renda fixa (nacional e internacional) e renda variável (nacional e internacional), 
calcular os percentuais e informar o perfil do cliente junto com seu percentual em renda variável.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float rfn, rfi, rvn, rvi;
    
    printf("Insira os valores: ");
    scanf ("%f %f %f %f", &rfn, &rfi, &rvn, &rvi);
    
    float soma = rfn + rfi + rvn + rvi;
    float renda_variavel = rvn + rvi;
    float porcentagem = (100*renda_variavel)/soma;
    
    if(porcentagem <= 10){
        printf("Conservador (%.2f%)", porcentagem);
    }
    else if(porcentagem > 30){
        printf("Agressivo (%.2f%)", porcentagem);
    }
    else {
        printf("Arrojado (%.2f%)", porcentagem);
    }
    
	return 0;
}