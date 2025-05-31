#include <stdio.h>
/*Trabalho super trunfo nivel novato
Desenvolvido por: Luan de Paula Borges*/

// declaracao das variaveis carta 1
char estado_carta1;
char codigo_carta1[5];
char cidade_carta1[50];
int populacao_carta1;
float area_carta1;
float pib_carta1;
int pontosTuristicos_carta1;

// declaracao das variaveis carta 2
char estado_carta2;
char codigo_carta2[5];
char cidade_carta2[50];
int populacao_carta2;
float area_carta2;
float pib_carta2;
int pontosTuristicos_carta2;

int main()
{   // cadastro carta 1
    printf("# JOGO SUPER TRUNFO #\n\n");
    printf("--- Cadastro Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado_carta1);
    printf("Codigo da Carta (Ex: A01): ");
    scanf(" %s", codigo_carta1);
    printf("Cidade (sem espacos, ex: RioDeJaneiro): ");
    scanf(" %s", cidade_carta1);
    printf("Populacao: ");
    scanf(" %d", &populacao_carta1);
    printf("Area (km2): ");
    scanf(" %f", &area_carta1);
    printf("PIB: ");
    scanf("%f", &pib_carta1);
    printf("Quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos_carta1);
    printf("\n");

    // cadastro carta 2
    printf("--- Cadastro Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado_carta2);
    printf("Codigo da Carta (Ex: A01): ");
    scanf(" %s", codigo_carta2);
    printf("Cidade (sem espacos, ex: RioDeJaneiro): ");
    scanf(" %s", cidade_carta2);
    printf("Populacao: ");
    scanf(" %d", &populacao_carta2);
    printf("Area (km^2): ");
    scanf(" %f", &area_carta2);
    printf("PIB: ");
    scanf("%f", &pib_carta2);
    printf("Quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos_carta2);
    printf("\n");

    // exibindo informacoes da carta 1
    printf("Carta 1:\n");
    printf("    Estado: %c\n", estado_carta1);
    printf("    Codigo: %s\n", codigo_carta1);
    printf("    Nome da Cidade: %s\n", cidade_carta1);
    printf("    Populacao: %d\n", populacao_carta1);
    printf("    Area: %.3f\n", area_carta1);
    printf("    PIB: %.3f\n", pib_carta1);
    printf("    Numero de Pontos Turisticos: %d", pontosTuristicos_carta1);
    printf("\n");
    // exibindo informacoes da carta 2
    printf("Carta 2:\n");
    printf("    Estado: %c\n", estado_carta2);
    printf("    Codigo: %s\n", codigo_carta2);
    printf("    Nome da Cidade: %s\n", cidade_carta2);
    printf("    Populacao: %d\n", populacao_carta2);
    printf("    Area: %.3f\n", area_carta2);
    printf("    PIB: %.3f\n", pib_carta2);
    printf("    Numero de Pontos Turisticos: %d", pontosTuristicos_carta2);
    printf("\n");
    return 0;
}