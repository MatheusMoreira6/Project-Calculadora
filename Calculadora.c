#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
void main ()
{
    char C; //Variável de caracteres alfanumérico.
    float A, B, D; //Variável de números reais com precisão simples.
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz referência à todos os aspectos da localização.
    printf("\nCalculadora V1.0");
    printf("\n\nInsira o primeiro valor:");
        scanf("%f", &A);
    printf("\nSelecione o tipo de operação(+,-,*,/):");
        scanf("%s", &C);
    printf("\nInsira o segundo valor:");
        scanf("%f", &B);
    if (C=='+') /* "==" Igual a*/
    {
        D=A+B;
        printf("\n\nResultado:%g\n\n\n", D);
    }
    else if (C=='-')
    {
        D=A-B;
        printf("\n\nResultado:%g\n\n\n", D);
    }
    else if (C=='*')
    {
        D=A*B;
        printf("\n\nResultado:%g\n\n\n", D);
    }
    else if (C=='/')
    {
        D=A/B;
        printf("\n\nResultado:%g\n\n\n", D);
    }
    system ("pause");
}
