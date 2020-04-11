//Created by: Matheus Moreira Mendes.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

void main ()
{
    char V, X;
    int M;
    float N1, N2, N3, N4, N5;
    setlocale(LC_ALL, "Portuguese");
    system("title Calculadora");
    do{
        M=0;
        V=0;
        X=0;
        N1=0;
        N2=0;
        N3=0;
        N4=0;
        N5=0;
        system("color F0");
        printf("|      Calculadora V5.0       |");
        printf("\n-------------------------------\n");
        printf("|      1 - Soma               |\n");
        printf("|      2 - Subtração          |\n");
        printf("|      3 - Multiplicação      |\n");
        printf("|      4 - Divisão            |\n");
        printf("|      5 - Raiz Quadrada      |\n");
        printf("|      6 - Regra de três      |\n");
        printf("-------------------------------\n");
        printf("|Selecione o tipo de operação:");
            M=getche();
        printf("\n-------------------------------\n");
        if (M=='1' || M=='2' || M=='3' || M=='4' || M=='5' || M=='6')
        {
            system("cls");
            switch(M)
            {
                case '1':
                {
                    printf("|     1 - Soma (N1 + N2)      |");
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o primeiro valor(N1):");
                        scanf("%f", &N1);
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o segundo valor(N2):");
                        scanf("%f", &N2);
                    N5=N1+N2;
                    break;
                }
                case '2':
                {
                    printf("|   2 - Subtração (N1 - N2)   |");
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o primeiro valor(N1):");
                        scanf("%f", &N1);
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o segundo valor(N2):");
                        scanf("%f", &N2);
                    N5=N1-N2;
                    break;
                }
                case '3':
                {
                    printf("| 3 - Multiplicação (N1 x N2) |");
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o primeiro valor (N1):");
                        scanf("%f", &N1);
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o segundo valor (N2):");
                        scanf("%f", &N2);
                    N5=N1*N2;
                    break;
                }
                case '4':
                {
                    printf("|    4 - Divisão (N1 / N2)    |");
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o dividendo(N1):");
                        scanf("%f", &N1);
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o divisor(N2):");
                        scanf("%f", &N2);
                    N5=N1/N2;
                    break;
                }
                case '5':
                {
                    printf("|      5 - Raiz Quadrada      |");
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o radicando:");
                        scanf("%f", &N1);
                    N5=sqrt(N1);
                    break;
                }
                case '6':
                {
                    printf("| 6 - Regra de três - Simples |");
                    printf("\n-------------------------------\n");
                    printf("|         N1 ----- N2         |\n");
                    printf("|         N3 ----- N4         |");
                    printf("\n-------------------------------\n");
                    printf("\n| Informe qual é o X: N");
                        X=getche();
                    printf("\n\n-------------------------------\n");
                    switch (X)
                    {
                        case '1':
                        {
                            printf("\n| Insira N2:");
                                scanf("%f", &N2);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N3:");
                                scanf("%f", &N3);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N4:");
                                scanf("%f", &N4);
                            N5=((N2*N3)/N4);
                            break;
                        }
                        case '2':
                        {
                            printf("\n| Insira N1:");
                                scanf("%f", &N1);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N3:");
                                scanf("%f", &N3);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N4:");
                                scanf("%f", &N4);
                            N5=((N1*N4)/N3);
                            break;
                        }
                        case '3':
                        {
                            printf("\n| Insira N1:");
                                scanf("%f", &N1);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N2:");
                                scanf("%f", &N2);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N4:");
                                scanf("%f", &N4);
                            N5=((N1*N4)/N2);
                            break;
                        }
                        case '4':
                        {
                            printf("\n| Insira N1:");
                                scanf("%f", &N1);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N2:");
                                scanf("%f", &N2);
                            printf("\n-------------------------------\n");
                            printf("\n| Insira N3:");
                                scanf("%f", &N3);
                            N5=((N2*N3)/N1);
                            break;
                        }
                    }
                }
            }
            if(M=='6')
            {
                printf("\n-------------------------------\n");
                printf("\n| X=%g\n", N5);
                printf("\n-------------------------------\n");
            }
            else
            {
                printf("\n-------------------------------\n");
                printf("\n| Resultado:%g\n", N5);
                printf("\n-------------------------------\n");
            }
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
            printf("\n");
            printf("\n-------------------------------\n");
            printf("|  Erro: Operador Inválido!   |");
            printf("\n-------------------------------\n");
            Sleep(3000);
            V='S';
            system("cls");
        }
    }while (V=='S' || V=='s');
}
