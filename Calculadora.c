#include <stdio.h> /*Biblioteca de tratamento de entrada/sa�da.*/
#include <stdlib.h> /*Biblioteca de implementa��o de Fun��es para diversas opera��es*/
#include <locale.h> /*Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.*/
void main ()
{
    char C; /*Vari�vel de caracteres alfanum�rico*/
    float A, B, D; /*Vari�vel de n�meros reais com precis�o simples*/
    setlocale(LC_ALL, "Portuguese"); /*LC_ALL Faz refer�ncia � todos os aspectos da localiza��o*/
    printf("\nCalculadora V1.0");
    printf("\n\nInsira o primeiro valor:");
        scanf("%f", &A);
    printf("\nInsira o segundo valor:");
        scanf("%f", &B);
    printf("\nSelecione o tipo de opera��o(+,-,*,/):");
        scanf("%s", &C);
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