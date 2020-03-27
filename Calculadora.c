#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche

void main ()
{
    char C, V; //Variável de caracteres alfanumérico.
    float A, B, D; //Variável de números reais.
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz referência à todos os aspectos de localização.
    do{
        system("color 70"); //Coloração (verde-claro).
        printf("Calculadora V4.0\n_________________________________________");
        printf("\n\nInsira o primeiro valor:");
            scanf("%f", &A);
        printf("\nSelecione o tipo de operação(+,-,*,/):");
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
            printf("\nDeseja realizar um novo cálculo(S/N)?");
                V=getche();
            if (V=='S' || V=='s')
            {
                system("cls");
            }
        }
        else
        {
            system("color 0C");
            printf("\n\nErro: Operador Inválido!\n\n");
            system("pause");
            V='S';
            system("cls");
        }
    }while (V=='S' || V=='s');
}
