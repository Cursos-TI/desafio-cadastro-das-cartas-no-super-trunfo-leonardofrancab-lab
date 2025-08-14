#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declaracao de variaveis
    char estado1, estado2;
    char codigo1[20], cidade1[20], codigo2[20], cidade2[20];
    int populacao1, pontostur1, populacao2, pontostur2;
    float area1, pib1, area2, pib2;

    //Apresentacao
    printf("Bem Vindo ao Jogo Super Trunfo\n\n");

    //Cadastro da primeira carta, recebendo dados do usuario.
    printf("Vamos começar cadastrando a sua primeira carta!\n\n");

    printf("Digite o Estado (A a H): ");
    scanf("%c", &estado1);

    printf("Digite o Codigo da Cidade: ");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &pontostur1);
    

    // Apresentando primeira carta
    printf("\n\nOtimo. Sua primeira carta é!\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Polpulação: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontostur1);

    //Cadastro da segunda carta, recebendo dados do usuario.
    printf("Agora vamos cadastrar a segunda carta!\n\n");

    printf("Digite o Estado (A a H): ");
    scanf("%c", &estado2);

    printf("Digite o Codigo da Cidade: ");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &pontostur2);
    

    // Apresentando segunda carta
    printf("\n\nOtimo. Sua segunda carta é!\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Polpulação: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n\n", pontostur2);

    printf("\n\nObrigado por utilizar o super Trunfo!\n");
   
    return 0;
}
