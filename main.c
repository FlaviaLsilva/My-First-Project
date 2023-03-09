#include <stdio.h>


int main()
{
    float agua, luz, telefone, supermercado, combustivel, lazer, educacao, outros, total;

        //%f é para para informar a variável float e para ler a variável tem que colocar o & 

    printf("Quanto você gasta com Água?");
    scanf("%f",&agua);

    printf("Quanto você gasta com Energia Elétrica?");
    scanf("%f", &luz);
    
    printf("Quanto você gasta com Telefone?");
    scanf("%f", &telefone);

    printf(Qual é o valor que é usado no Supermercado ? );
    printf("%f", &supermercado);

    printf("Quanto você gasta com Combustivel?");
    scanf("%f", &combustivel);

    printf("Quanto você gasta com Lazer?");
    scanf("%f", &lazer);

    printf("Quanto você gasta com Educação?");
    scanf("%f", &educacao);

    printf("Quanto você gasta com outros?");
    scanf("%f", &outros);

    total = (agua + luz + telefone + supermercado + combustivel + lazer + educacao + outros);

    if (true)
    {

    }



    return 0; //Se retornar 0 significa que o código não tem erro.
}
