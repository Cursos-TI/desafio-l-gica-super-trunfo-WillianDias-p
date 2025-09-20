#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
    char Estado1[50], Estado2[50], CodCarta1[5], CodCarta2[5], Cidade1[50], Cidade2[50];
    int  PontTuristico1, PontTuristico2, WinPopulacao, WinArea, WinPib, WinPontTuristicos, WinDensidade,WinSuperPoder, escolhacarta;
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

    printf("***Escolha um dos atributos para ser comparados***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolhacarta);

    switch (escolhacarta){
    case 1:
    printf("%s X %s\n", Cidade1, Cidade2);
    printf("O Atributo escolhido é o de População!\n");
    printf("Cidade 1: %lu X Cidade 2: %lu\n", Populacao1, Populacao2);

        if (Populacao1 > Populacao2){
            printf("%s Venceu!", Cidade1);
        }else if (Populacao1 < Populacao2){
            printf("%s Venceu!", Cidade2);
        }else{
            printf("### EMPATE ###");
        }
    break;
       case 2:
    printf("%s X %s\n", Cidade1, Cidade2);
    printf("O Atributo escolhido é o de Area!\n");
    printf("Cidade 1: %f X Cidade 2: %f\n", Area1, Area2);

        if (Area1 > Area2){
            printf("%s Venceu!", Cidade1);
        }else if (Area1 < Area2){
            printf("%s Venceu!", Cidade2);
        }else{
            printf("### EMPATE ###");
        }
    break;
       case 3:
    printf("%s X %s\n", Cidade1, Cidade2);
    printf("O Atributo escolhido é o de PIB!\n");
    printf("Cidade 1: %f X Cidade 2: %f\n", Pib1, Pib2);

        if (Pib1 > Pib2){
            printf("%s Venceu!", Cidade1);
        }else if (Pib1 < Pib2){
            printf("%s Venceu!", Cidade2);
        }else{
            printf("### EMPATE ###");
        }
    break;
       case 4:
    printf("%s X %s\n", Cidade1, Cidade2);
    printf("O Atributo escolhido é o de Ponto turístico!\n");
    printf("Cidade 1: %d X Cidade 2: %d\n", PontTuristico1, PontTuristico2);

        if (PontTuristico1 > PontTuristico2){
            printf("%s Venceu!", Cidade1);
        }else if (PontTuristico1 < PontTuristico2){
            printf("%s Venceu!", Cidade2);
        }else{
            printf("### EMPATE ###");
        }
    break;
       case 5:
    printf("%s X %s\n", Cidade1, Cidade2);
    printf("O Atributo escolhido é o de Densidade!\n");
    printf("Cidade 1: %f X Cidade 2: %f\n", Densidade1, Densidade2);

        if (Densidade1 < Densidade2){
            printf("%s Venceu!", Cidade1);
        }else if (Densidade1 > Densidade2){
            printf("%s Venceu!", Cidade2);
        }else{
            printf("### EMPATE ###");
        }
    break;
    }
   


    return 0;
}
