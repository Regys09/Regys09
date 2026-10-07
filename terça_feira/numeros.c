#include <stdio.h>

int main()
{
    int num, num2, num3;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    printf("Digite o terceiro numero:\n");
    scanf("%d", &num2);

    printf("Digite o segundo numero:\n");
    scanf("%d", &num3);


    if (num < num2 && num < num3)
    {
        printf("O primeiro numero e o menor %d", num);
    }
    else if (num2 < num && num2 < num3)
    {
            printf("O segundo numero é o menor %d", num2);
    }
    else if (num3 < num2 && num3 < num)
    {
        printf("O terceiro numero e o menor %d", num3);
    }
    else
    {
        printf("Os valores sao iguais");
    }
    return 0;
}
