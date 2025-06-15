#include <stdio.h>
/*Trabalho super trunfo nivel novato
Desenvolvido por: Luan de Paula Borges*/

// declaracao das variaveis carta 1
char estado_carta1;  // variavel do tipo char para o estado, A-H 
char codigo_carta1[5]; // variavel do tipo char para o codigo da carta, maximo 4 caracteres + \0
char cidade_carta1[50];  // variavel do tipo char para o nome da cidade, maximo 49 caracteres + \0
int populacao_carta1; // variavel do tipo int para a populacao
float area_carta1;  // variavel do tipo float para a area em km2
float pib_carta1; // variavel do tipo float para o PIB
int pontosTuristicos_carta1; // variavel do tipo int para a quantidade de pontos turisticos

// declaracao das variaveis carta 2
char estado_carta2;     // variavel do tipo char para o estado, A-H 
char codigo_carta2[5];  // variavel do tipo char para o codigo da carta, maximo 4 caracteres + \0
char cidade_carta2[50]; // variavel do tipo char para o nome da cidade, maximo 49 caracteres + \0
int populacao_carta2;   // variavel do tipo int para a populacao
float area_carta2;  // variavel do tipo float para a area em km2
float pib_carta2; // variavel do tipo float para o PIB
int pontosTuristicos_carta2;    // variavel do tipo int para a quantidade de pontos turisticos

int main()
{   // cadastro carta 1
    printf("# JOGO SUPER TRUNFO #\n\n");
    printf("--- Cadastro Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado_carta1);   // leitura do estado
    printf("Codigo da Carta (Ex: A01): ");
    scanf(" %s", codigo_carta1);    // leitura do codigo da carta
    printf("Cidade (sem espacos, ex: RioDeJaneiro): ");
    scanf(" %s", cidade_carta1);    // leitura do nome da cidade
    printf("Populacao: ");
    scanf(" %d", &populacao_carta1);    // leitura da populacao
    printf("Area (km2): ");
    scanf(" %f", &area_carta1);   // leitura da area em km2
    printf("PIB: ");
    scanf("%f", &pib_carta1);   // leitura do PIB
    printf("Quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos_carta1); // leitura da quantidade de pontos turisticos 
    printf("\n");

    // cadastro carta 2
    printf("--- Cadastro Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado_carta2); // leitura do estado
    printf("Codigo da Carta (Ex: A01): ");
    scanf(" %s", codigo_carta2); // leitura do codigo da carta
    printf("Cidade (sem espacos, ex: RioDeJaneiro): ");
    scanf(" %s", cidade_carta2);    // leitura do nome da cidade
    printf("Populacao: ");
    scanf(" %d", &populacao_carta2);   // leitura da populacao
    printf("Area (km^2): ");
    scanf(" %f", &area_carta2);     // leitura da area em km2
    printf("PIB: ");
    scanf("%f", &pib_carta2);  // leitura do PIB
    printf("Quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos_carta2);     // leitura da quantidade de pontos turisticos
    printf("\n");

    // exibindo informacoes da carta 1
    printf("Carta 1:\n");
    printf("    Estado: %c\n", estado_carta1); // exibindo o estado
    printf("    Codigo: %s\n", codigo_carta1); // exibindo o codigo da carta
    printf("    Nome da Cidade: %s\n", cidade_carta1);      // exibindo o nome da cidade
    printf("    Populacao: %d\n", populacao_carta1); // exibindo a populacao
    printf("    Area: %.3f\n", area_carta1); // exibindo a area em km2
    printf("    PIB: %.3f\n", pib_carta1); // exibindo o PIB
    printf("    Numero de Pontos Turisticos: %d", pontosTuristicos_carta1); // exibindo a quantidade de pontos turisticos
    printf("\n");
    // exibindo informacoes da carta 2
    printf("Carta 2:\n");
    printf("    Estado: %c\n", estado_carta2); // exibindo o estado
    printf("    Codigo: %s\n", codigo_carta2); // exibindo o codigo da carta
    printf("    Nome da Cidade: %s\n", cidade_carta2);     // exibindo o nome da cidade
    printf("    Populacao: %d\n", populacao_carta2); // exibindo a populacao
    printf("    Area: %.3f\n", area_carta2); // exibindo a area em km2
    printf("    PIB: %.3f\n", pib_carta2); // exibindo o PIB
    printf("    Numero de Pontos Turisticos: %d", pontosTuristicos_carta2); // exibindo a quantidade de pontos turisticos
    printf("\n");
    return 0;
}