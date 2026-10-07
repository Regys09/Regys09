#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%d", &a);

    printf("Digite o segundo lado: ");
    scanf("%d", &b);

    printf("Digite o terceiro lado: ");
    scanf("%d", &c);


    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("\nOs valores formam um triangulo!\n");


        if (a == b && b == c)
        {
            printf("Tipo: Equilatero\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Tipo: Isosceles\n");
        }
        else
        {
            printf("Tipo: Escaleno\n");
        }


        int quadradoA = a * a;
        int quadradoB = b * b;
        int quadradoC = c * c;

        int maiorQuadrado;
        int somaDosOutros;


        if (a >= b && a >= c)
        {
            maiorQuadrado = quadradoA;
            somaDosOutros = quadradoB + quadradoC;
        }
        else if (b >= a && b >= c)
        {
            maiorQuadrado = quadradoB;
            somaDosOutros = quadradoA + quadradoC;
        }
        else
        {
            maiorQuadrado = quadradoC;
            somaDosOutros = quadradoA + quadradoB;
        }


        if (maiorQuadrado == somaDosOutros)
        {
            printf("Classificacao: Retangulo\n");
        }
        else if (maiorQuadrado > somaDosOutros)
        {
            printf("Classificacao: Obtusangulo\n");
        }
        else
        {
            printf("Classificacao: Acutangulo\n");
        }

    }
    else
    {
        printf("\nErro: Esses valores NAO podem formar um triangulo.\n");
    }

    return 0;
}
