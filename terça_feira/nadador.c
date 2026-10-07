int main()
{
    int idade;


    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Idade do competidor: %d anos, categoria Infantil A", idade);
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Idade do competidor: %d anos, categoria Infantil B", idade);
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Idade do competidor: %d anos, categoria Juvenil A", idade);
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Idade do competidor: %d anos, categoria Juvenil B", idade);
    }
    else
    {
        printf("Idade do competidor: %d anos, categoria Senior", idade);
    }
}
