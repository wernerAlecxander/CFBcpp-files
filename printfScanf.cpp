#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    int ano;
    char nome[10];

    printf("Digite seu nome: ");
    scanf("%s",&nome);
    printf("\nInforme o ano do seu nascimento: ");
    scanf("%d",&ano);
    printf("\nNome: %s - Ano de nascimento: %d\n\n",nome,ano);

	int num=30;

    cout << "Valor de NUM:" << setw(10) << setfill('0') << num << "\n";

    
	return 0;

}

/*
d,i => int
x,X => Hexadecimal
u => int sem sinal
s => string, char*
f => double
p => ponteiros
*/