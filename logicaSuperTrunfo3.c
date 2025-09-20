#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char Estado1[50], Estado2[50], CodCarta1[5], CodCarta2[5], Cidade1[50], Cidade2[50];
    int  PontTuristico1, PontTuristico2, escolhacarta, escolhacarta2;
    float Area1, Area2, Pib1, Pib2, Densidade1, Densidade2, PibPercapita1, PibPercapita2;
    unsigned long int Populacao1, Populacao2;
    
    
    char *atributos[] = {
        "População",
        "Área",
        "PIB",
        "Número de pontos turísticos",
        "Densidade demográfica"
    };

    
    printf("Digite uma letra de A até H: \n");
    scanf("%s", Estado1);

    printf("Digite um número de 01 até 04: \n");
    scanf("%s", CodCarta1);

    printf("Digite o nome de uma Cidade: \n");
    scanf(" %[^\n]", Cidade1); 

    printf("Digite a quantidade de habitantes: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a area em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontTuristico1);

    Densidade1 = (float)Populacao1 / Area1;
    PibPercapita1 = (float)Pib1 / Populacao1;

    
    printf("Agora vamos inserir os dados para a Carta 2:\n");

    printf("Digite uma letra de A até H: \n");
    scanf("%s", Estado2);

    printf("Digite um número de 01 até 04: \n");
    scanf("%s", CodCarta2);

    printf("Digite o nome de uma Cidade: \n");
    scanf(" %[^\n]", Cidade2); 

    printf("Digite a quantidade de habitantes: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontTuristico2);

    Densidade2 = (float)Populacao2 / Area2;
    PibPercapita2 = (float)Pib2 / Populacao2;

    
    printf("***Escolha um dos atributos para ser comparados***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolhacarta);

    printf("Agora selecione o segundo atributo a ser comparado: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolhacarta2);

    
    float valor1_cidade1 = 0, valor2_cidade1 = 0;
    float valor1_cidade2 = 0, valor2_cidade2 = 0;

    
    switch (escolhacarta) {
        case 1: valor1_cidade1 = Populacao1; valor1_cidade2 = Populacao2; break;
        case 2: valor1_cidade1 = Area1;      valor1_cidade2 = Area2; break;
        case 3: valor1_cidade1 = Pib1;       valor1_cidade2 = Pib2; break;
        case 4: valor1_cidade1 = PontTuristico1; valor1_cidade2 = PontTuristico2; break;
        case 5: valor1_cidade1 = Densidade1; valor1_cidade2 = Densidade2; break;
    }

    
    switch (escolhacarta2) {
        case 1: valor2_cidade1 = Populacao1; valor2_cidade2 = Populacao2; break;
        case 2: valor2_cidade1 = Area1;      valor2_cidade2 = Area2; break;
        case 3: valor2_cidade1 = Pib1;       valor2_cidade2 = Pib2; break;
        case 4: valor2_cidade1 = PontTuristico1; valor2_cidade2 = PontTuristico2; break;
        case 5: valor2_cidade1 = Densidade1; valor2_cidade2 = Densidade2; break;
    }

    
    float soma1 = valor1_cidade1 + valor2_cidade1;
    float soma2 = valor1_cidade2 + valor2_cidade2;

    
    printf("\n===== RESULTADOS =====\n");

    
    printf("\nPrimeiro atributo escolhido: %s\n", atributos[escolhacarta - 1]);
    printf("Cidade1 = %.2f | Cidade2 = %.2f\n", valor1_cidade1, valor1_cidade2);
    if (valor1_cidade1 > valor1_cidade2)
        printf("Cidade1 venceu no atributo %s!\n", atributos[escolhacarta - 1]);
    else if (valor1_cidade2 > valor1_cidade1)
        printf("Cidade2 venceu no atributo %s!\n", atributos[escolhacarta - 1]);
    else
        printf("Empate no atributo %s!\n", atributos[escolhacarta - 1]);

    
    printf("\nSegundo atributo escolhido: %s\n", atributos[escolhacarta2 - 1]);
    printf("Cidade1 = %.2f | Cidade2 = %.2f\n", valor2_cidade1, valor2_cidade2);
    if (valor2_cidade1 > valor2_cidade2)
        printf("Cidade1 venceu no atributo %s!\n", atributos[escolhacarta2 - 1]);
    else if (valor2_cidade2 > valor2_cidade1)
        printf("Cidade2 venceu no atributo %s!\n", atributos[escolhacarta2 - 1]);
    else
        printf("Empate no atributo %s!\n", atributos[escolhacarta2 - 1]);

    
    printf("\nSoma dos atributos (%s + %s):\n", atributos[escolhacarta - 1], atributos[escolhacarta2 - 1]);
    printf("Cidade1 = %.2f | Cidade2 = %.2f\n", soma1, soma2);
    if (soma1 > soma2)
        printf("Cidade1 venceu na soma dos atributos!\n");
    else if (soma2 > soma1)
        printf("Cidade2 venceu na soma dos atributos!\n");
    else
        printf("Empate na soma dos atributos!\n");

    return 0;
}
