//Created by: Matheus Moreira Mendes.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

void main ()
{
    char V, X, R;
    int M;
    float N1, N2, N3, N4, N5;
    setlocale(LC_ALL, "Portuguese");
    system("title Calculadora");
    do{
        M=0;
        R=0;
        V=0;
        X=0;
        N1=0;
        N2=0;
        N3=0;
        N4=0;
        N5=0;
        system("color F0");
        printf("|      Calculadora V6.0       |");
        printf("\n-------------------------------\n");
        printf("|      1 - Soma               |\n");
        printf("|      2 - Subtra��o          |\n");
        printf("|      3 - Multiplica��o      |\n");
        printf("|      4 - Divis�o            |\n");
        printf("|      5 - Raiz Quadrada      |\n");
        printf("|      6 - Potencia��o        |\n");
        printf("|      7 - Regra de tr�s      |\n");
        printf("-------------------------------\n");
        printf("|Selecione o tipo de opera��o:");
            M=getche();
        printf("\n-------------------------------\n");
        if (M=='1' || M=='2' || M=='3' || M=='4' || M=='5' || M=='6' || M=='7')
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
                    printf("|   2 - Subtra��o (N1 - N2)   |");
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
                    printf("| 3 - Multiplica��o (N1 x N2) |");
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
                    printf("|    4 - Divis�o (N1 / N2)    |");
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
                    while(N1<0)
                    {
                        printf("\n-------------------------------\n");
                        printf("\n| Insira novamente o radicando:");
                            scanf("%f", &N1);
                    }
                    N5=sqrt(N1);
                    break;
                }
                case '6':
                {
                    printf("|    6 - Potencia��o (X^x)    |");
                    printf("\n-------------------------------\n");
                    printf("\n| Insira a base(X):");
                        scanf("%f", &N1);
                    printf("\n-------------------------------\n");
                    printf("\n| Insira o expoente(x):");
                        scanf("%f", &N2);
                    N3=N1;
                    if(N1>=0)
                    {
                        if(N2>0)
                        {
                            for(N4=1; N4<N2; N4++)
                            {
                                N1=N1*N3;
                            }
                            N5=N1;
                        }
                        else
                        {
                            if((N1==0 && N2==0) || (N1==0 && N2<0))
                            {
                                R='I';
                            }
                            else
                            {
                                if(N2==0)
                                {
                                    N5=1;
                                }
                                else
                                {
                                    N2=N2*-1;
                                    for(N4=1; N4<N2; N4++)
                                    {
                                        N1=N1*N3;
                                    }
                                    N5=1/N1;
                                }
                            }
                        }
                    }
                    else
                    {
                        if(N2>0)
                        {
                            for(N4=1; N4<N2; N4++)
                            {
                                N1=N1*N3;
                            }
                            N5=N1*-1;
                        }
                        else
                        {
                            if(N2==0)
                            {
                                N5=-1;
                            }
                            else
                            {
                                N2=N2*-1;
                                for(N4=1; N4<N2; N4++)
                                {
                                    N1=N1*N3;
                                }
                                N5=(1/N1)*-1;
                            }
                        }
                        if(N5>0)
                        {
                            N5=N5*-1;
                        }
                    }
                    break;
                }
                case '7':
                {
                    printf("| 7 - Regra de tr�s - Simples |");
                    printf("\n-------------------------------\n");
                    printf("|         N1 ----- N2         |\n");
                    printf("|         N3 ----- N4         |");
                    printf("\n-------------------------------\n");
                    printf("\n| Informe qual � o X: N");
                        X=getche();
                    printf("\n\n-------------------------------\n");
                    while(X<'1' || X>'4')
                    {
                        printf("\n| Informe qual � o X: N");
                            X=getche();
                        printf("\n\n-------------------------------\n");
                    }
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
                    break;
                }
            }
            if(M=='7')
            {
                printf("\n-------------------------------\n");
                printf("\n| X = %g\n", N5);
                printf("\n-------------------------------\n");
                printf("\n| Deseja inverter N2 e N4 (S/N)?");
                    R=getche();
                printf("\n\n-------------------------------\n");
                if(R=='S' || R=='s')
                {
                    N5=0;
                    switch(X)
                    {
                        case '1':
                        {
                            N5=((N3*N4)/N2);
                        }
                        case '2':
                        {
                            N5=((N3*N4)/N1);
                        }
                        case '3':
                        {
                            N5=((N1*N2)/N4);
                        }
                        case '4':
                        {
                            N5=((N1*N2)/N3);
                        }
                    }
                    printf("\n| X = %g\n", N5);
                    printf("\n-------------------------------\n");
                }
            }
            else
            {
                if(R=='I')
                {
                    printf("\n-------------------------------\n");
                    printf("\n| Base ou Expoente Inv�lido!\n");
                    printf("\n-------------------------------\n");
                }
                else
                {
                    printf("\n-------------------------------\n");
                    printf("\n| Resultado:%g\n", N5);
                    printf("\n-------------------------------\n");
                }
            }
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
            printf("\n");
            printf("\n-------------------------------\n");
            printf("|  Erro: Op��o Inv�lida!      |");
            printf("\n-------------------------------\n");
            Sleep(3000);
            V='S';
            system("cls");
        }
    }while (V=='S' || V=='s');
}
