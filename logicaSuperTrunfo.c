#include <stdio.h>
#include <string.h>

int main() {
    char Estado1[50], Estado2[50], CodCarta1[5], CodCarta2[5], Cidade1[50], Cidade2[50];
    int  PontTuristico1, PontTuristico2, WinPopulacao, WinArea, WinPib, WinPontTuristicos, WinDensidade,WinSuperPoder;
    float Area1, Area2, Pib1, Pib2, Densidade1, Densidade2, PibPercapita1, PibPercapita2, SuperPoderA, SuperPoderB;
    unsigned long int Populacao1, Populacao2;
    

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

    Densidade1 = (float)(Populacao1 / Area1);
    PibPercapita1 = (float)(Pib1 / Populacao1);


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

    Densidade2 = (float)(Populacao2 / Area2);
    PibPercapita2 = (float)(Pib2 / Populacao2);

    printf("O atributo escolhido é o da População!\n");

    printf("População da carta 1 é: %lu e População da carta 2 é: %lu\n", Populacao1, Populacao2);
 

   if (Populacao1 > Populacao2){
        printf("População da carta 1 é maior que a População da carta 2!\n");
   }else{
        printf("População da Carta 2 é maior que a População da carta 1\n");
   }
   


    return 0;
}
