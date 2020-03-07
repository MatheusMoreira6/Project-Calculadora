#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h>
int main ()
{
    char C; //Variável de caracteres alfanumérico.
    float A, B, D; //Variável de números reais com precisão dupla.
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz referência à todos os aspectos de localização.
    printf("Calculadora V3.0");
    printf("\n\nInsira o primeiro valor:");
        scanf("%f", &A);
    printf("\nSelecione o tipo de operação(+,-,*,/):");
        C=getche();
    if (C=='+' || C=='-' || C=='*' || C=='/')
    {
        printf("\n\nInsira o segundo valor:");
            scanf("%f", &B);
        if (C=='+')
        {
            D=A+B;
        }
        else if (C=='-')
        {
            D=A-B;
        }
        else if (C=='*')
        {
            D=A*B;
        }
        else if (C=='/')
        {
            D=A/B;
        }
        printf("\n\nResultado:%g\n\n\n", D);
    }
    else
    {
        printf("\n\nOperador Inválido!\n\n\n");
    }
    system ("pause");
}
