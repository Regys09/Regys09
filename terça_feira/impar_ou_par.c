#include <stdio.h>

int main()
{
    //Declaração de variável
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (num %2 == 0 && num > 0)
    {
        printf("O numero e par e positivo!");
    }
    else if (num %2 == 0 && num < 0)
    {
        printf("O numero e par e negativo!");
    }
    else if (num == 0)
    {
        printf("O numero e zero!");
    }
    else
    {
        printf("O numero e impar");
    }
    return 0;
}
