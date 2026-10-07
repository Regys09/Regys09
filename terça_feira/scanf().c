#include <stdio.h>

int main ()
{
    // Declaração das variável
    float nota;
    int quant_faltas;


    printf("Digite sua nota:\n");
    scanf("%f", &nota);
    printf("Digite quantas vezes voce faltou:\n");
    scanf("%d", &quant_faltas);


    if (nota >= 7 && quant_faltas < 10)
    {
        printf("Parabens, voce foi aprovado!");
    }
    else if (nota >= 4 && nota < 7 && quant_faltas < 10)
    {
        printf("Voce esta em recuperacao!");
    }
    else
    {
        printf("Você esta reprovado!");
    }
    return 0;
}
