#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
      // Cidade 1
    char estado1; 
    char codigo1[4];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    // Cidade 2
    char estado2; 
    char codigo2[4];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Super Trunfo!\n");

    // ---------- CIDADE 1 ----------
    printf("\n===== Carta 1 =====\n");
    printf("Digite uma letra de A a H representando um dos 8 estados: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da carta: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade1);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em Km²: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // ---------- CIDADE 2 ----------
    printf("\n===== Carta 2 =====\n");
    printf("Digite uma letra de A a H representando um dos 8 estados: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em Km²: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 // ---------- RESULTADOS ----------
    printf("\n**** CARTA 1 ******\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n**** CARTA 2 ******\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);


    return 0;
}
