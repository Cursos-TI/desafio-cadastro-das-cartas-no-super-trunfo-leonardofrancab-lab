#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declaracao de variaveis
    char estado1, estado2;
    char codigo1[20], cidade1[20], codigo2[20], cidade2[20];
    int  pontostur1, pontostur2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidade1, pibcapita1, densidade2, pibcapita2, superpoder1, superpoder2; 

    //Apresentacao
    printf("Bem Vindos ao Jogo Super Trunfo\n\n");

    //Cadastro da primeira carta, recebendo dados do usuario.
    printf("Vamos começar cadastrando a sua primeira carta!\n\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Cidade: ");
    scanf(" %3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %30[^\n]", cidade1);

    printf("Digite a População da Cidade: ");
    scanf(" %lu", &populacao1);

    printf("Digite a Área da Cidade: ");
    scanf(" %f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf(" %d", &pontostur1);

    //Calculando densidade poplacionar e PIB per capita
    densidade1 = (float) populacao1/area1;
    pibcapita1 = (float) (pib1*1e9f)/populacao1;

    //Calculando superpoder primeira carta
    superpoder1 = (float) (populacao1 * area1 * pib1 * pontostur1) / densidade1;

    // Apresentando primeira carta
    printf("\n\nOtimo. Sua primeira carta é!\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontostur1);
    

    // Apresentando Densidade populacional e pib per capita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita:  %.2f reais\n\n", pibcapita1);

    // Apresentando o super poder
    printf("O Super poder da primeira carta é: %.2f\n\n", superpoder1);

    //Cadastro da segunda carta, recebendo dados do usuario.
    printf("\nAgora vamos cadastrar a segunda carta!\n\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Cidade: ");
    scanf(" %3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %30[^\n]", cidade2);

    printf("Digite a População da Cidade: ");
    scanf(" %lu", &populacao2);

    printf("Digite a Área da Cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf(" %d", &pontostur2);

     //Calculando densidade poplacionar e PIB per capita
    densidade2 = (float) populacao2/area2;
    pibcapita2 = (float) (pib2*1e9f)/populacao2;

    //Calculando superpoder segunda carta
    superpoder2 = (float) (populacao2 * area2 * pib2 * pontostur2) / densidade2;

    // Apresentando segunda carta
    printf("\n\nOtimo. Sua segunda carta é!\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontostur2);

    // Apresentando Densidade populacional e pib per capita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita:  %.2f reais\n\n", pibcapita2);

   

    // Apresentando o super poder
    printf("O Super poder da segunda carta é: %.2f\n\n", superpoder2);

    //Comparando as cartas
    printf("...Vamos ao Resultado...\n");
    printf("...Carta 1 (1), Carta 2 (0)\n\n");

    printf("População: Carta %d venceu\n", populacao1 > populacao2);
    printf("Área: Carta %d venceu\n", area1 > area2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta %d venceu\n", pontostur1 > pontostur2);
    printf("Desnsidade Populacional: Carta %d venceu\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu\n", pibcapita1 > pibcapita2);
    printf("Super poder: Carta %d venceu\n\n", superpoder1 > superpoder2);


    printf("\nObrigado por utilizar o Super Trunfo!\n");
   
    return 0;
}
