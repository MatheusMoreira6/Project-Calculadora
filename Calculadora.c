#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche

void main ()
{
    char C, V; //Vari�vel de caracteres alfanum�rico.
    float A, B, D; //Vari�vel de n�meros reais.
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    do{
        system("color 70"); //Colora��o (verde-claro).
        printf("Calculadora V4.0\n_________________________________________");
        printf("\n\nInsira o primeiro valor:");
            scanf("%f", &A);
        printf("\nSelecione o tipo de opera��o(+,-,*,/):");
            C=getche();
        if (C=='+' || C=='-' || C=='*' || C=='/')
        {
            printf("\n\nInsira o segundo valor:");
                scanf("%f", &B);
            switch(C)
            {
                case '+':
                {
                    D=A+B;
                    break;
                }
                case '-':
                {
                    D=A-B;
                    break;
                }
                case '*':
                {
                    D=A*B;
                    break;
                }
                case '/':
                {
                    D=A/B;
                    break;
                }
            }
            printf("_________________________________________\n\nResultado:%g\n_________________________________________\n", D);
            printf("\nDeseja realizar um novo c�lculo(S/N)?");
                V=getche();
            if (V=='S' || V=='s')
            {
                system("cls");
            }
        }
        else
        {
            system("color 0C");
            printf("\n\nErro: Operador Inv�lido!\n\n");
            system("pause");
            V='S';
            system("cls");
        }
    }while (V=='S' || V=='s');
}
