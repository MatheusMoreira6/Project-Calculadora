#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h>
int main ()
{
    char C; //Vari�vel de caracteres alfanum�rico.
    float A, B, D; //Vari�vel de n�meros reais com precis�o dupla.
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    printf("Calculadora V3.0");
    printf("\n\nInsira o primeiro valor:");
        scanf("%f", &A);
    printf("\nSelecione o tipo de opera��o(+,-,*,/):");
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
        printf("\n\nOperador Inv�lido!\n\n\n");
    }
    system ("pause");
}
