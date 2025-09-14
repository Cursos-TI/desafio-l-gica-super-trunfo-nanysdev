#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variaveis carta 1 e 2
    char estado1, estado2;
    char cod_carta1[5], cod_carta2[5]; // Codigo da carta (Letra do Estado + 0 + nº da Cidade) -> Ex: A01, A02...
    char cidade1[50], cidade2[50]; // Nome da cidade
    unsigned long int populacao1, populacao2; // Habitantes da cidade
    float area1, area2; // Area da cidade em km²
    float pib1, pib2; // Produto Interno Bruto da cidade
    int ponto_tur1, ponto_tur2; // Quantidade de pontos turisticos
    float densid_pop1, densid_pop2; // Densidade populacional
    float pib_percapita1, pib_percapita2; // PIB per capita
    
    // Cadastro de informacoes CARTA 1
    printf("\n_________________________________________________\n");
    printf("_____________> JOGO  SUPER  TRUNFO <_____________\n");

    printf("\n\n-------------- CADASTRO DA CARTA 1 --------------\n");
    printf("Digite o Estado (Uma letra de A a H): \n");
    scanf("%c", &estado1);
    printf("Digite o codigo da Carta 1 (Ex: A01): \n");
    scanf("%s", &cod_carta1);
    printf("Digite o nome da Cidade:\n");
    getchar();
    fgets(cidade1, 50, stdin); // Lê o nome da cidade com espaços
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o caractere de nova linha, se presente
    printf("Digite a populacao da Cidade:\n"); //
    scanf("%lu", &populacao1);
    printf("Digite a area (km2) da Cidade:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);
    printf("Digite quantidade de pontos turisticos da Cidade: \n");
    scanf("%d", &ponto_tur1);


    // Cadastro de informacoes CARTA 2
    printf("\n--------------CADASTRO DA CARTA 2--------------\n");
    printf("Digite o Estado (Uma letra de A a H): \n");
    getchar();
    scanf("%c", &estado2);
    printf("Digite o codigo da Carta 2 (Ex: A01): \n");
    scanf("%s", &cod_carta2);
    printf("Digite o nome da Cidade:\n");
    getchar();
    fgets(cidade2, 50, stdin); // Lê o nome da cidade com espaços
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o caractere de nova linha, se presente
    printf("Digite a populacao da Cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite a area (km2) da Cidade:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Digite quantidade de pontos turisticos da Cidade: \n");
    scanf("%d", &ponto_tur2);

    // Cálculo da densidade populacional e PIB per capita para carta 1 e 2
    densid_pop1 = populacao1 / area1;
    densid_pop2 = populacao2 / area2;
    pib_percapita1 = pib1 / populacao1;
    pib_percapita2 = pib2 / populacao2;
        
    // Impressão dos dados cadastrados 
    // DADOS CARTA 1
    printf("\n");
    printf("===================================================\n");
    printf("------------ DADOS CADASTRADOS CARTA 2 ------------\n");
    printf("  Estado: %c\n", estado1);
    printf("  Codigo Carta: %s\n", cod_carta1);
    printf("  Cidade: %s\n", cidade1);
    printf("  Populacao: %lu\n", populacao1);
    printf("  Area: %.2f km2\n", area1);
    printf("  PIB: R$ %.2f\n", pib2);
    printf("  Numero de Pontos Turisticos: %d\n", ponto_tur1);
    printf("  Densidade Populacional: %.2f hab/km2\n", densid_pop1);
    printf("  PIB per Capita: R$ %.2f\n", pib_percapita1);
    printf("===================================================\n");

    // DADOS CARTA 2
    printf("\n");
    printf("===================================================\n");
    printf("------------ DADOS CADASTRADOS CARTA 2 ------------\n");
    printf("  Estado: %c\n", estado2);
    printf("  Codigo Carta: %s\n", cod_carta2);
    printf("  Cidade: %s\n", cidade2);
    printf("  Populacao: %lu\n", populacao2);
    printf("  Area: %.2f km2\n", area2);
    printf("  PIB: R$ %.2f\n", pib2);
    printf("  Numero de Pontos Turisticos: %d\n", ponto_tur2);
    printf("  Densidade Populacional: %.2f hab/km2\n", densid_pop2);
    printf("  PIB per Capita: R$ %.2f\n", pib_percapita2);
    printf("===================================================\n");

    // COMPARAÇÃO DE ATRIBUTOS ATRAVES DE IF + ELSE -> se, senão
    printf("\n");
    printf("===================================================\n");
    printf("------------- COMPARACAO ENTRE CARTAS -------------\n");
    printf("> Quesito escolhido: *PIB per Capita*\n");
    printf("  PIB per capita Carta 1 (%s): R$ %.2f \n", cidade1, pib_percapita1); // Usuário irá relembrar os valores
    printf("  PIB per capita Carta 2 (%s): R$ %.2f \n", cidade2, pib_percapita2);
    if (pib_percapita1 > pib_percapita2) { // Apresentação da carta vencedora mediante a comparação e decisão
        printf("  RESULTADO: Carta 1 (%s) e a vencedora!\n", cidade1);
    } else {
        printf("  RESULTADO: Carta 2 (%s) e a vencedora!\n", cidade2);
    }
    printf("===================================================\n");

    return 0;
}