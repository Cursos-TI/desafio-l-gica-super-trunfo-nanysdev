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
    printf("\n===================================================\n");
    printf("|                                                 |\n");
    printf("|       Bem-vindo ao jogo de Super Trunfo!        |\n");
    printf("|                                                 |\n");
    printf("===================================================\n");
    printf("\n\n-------------- CADASTRO DA CARTA 1 --------------\n");
    printf("Digite o Estado (Uma letra de A a H): \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da Carta 1 (Ex: A01): \n");
    scanf("%s", cod_carta1);
    printf("Digite o nome da Cidade:\n");
    scanf(" %[^\n]", cidade1);
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
    scanf(" %c", &estado2);
    printf("Digite o codigo da Carta 2 (Ex: A01): \n");
    scanf("%s", cod_carta2);
    printf("Digite o nome da Cidade:\n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao da Cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite a area (km2) da Cidade:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Digite quantidade de pontos turisticos da Cidade: \n");
    scanf("%d", &ponto_tur2);

    // Cálculo da densidade populacional e PIB per capita para carta 1 e 2
    densid_pop1 = (float)populacao1 / area1;
    densid_pop2 = (float)populacao2 / area2;
    pib_percapita1 = (pib1 * 1000000000.0) / populacao1;
    pib_percapita2 = (pib2 * 1000000000.0) / populacao2;
        
    // Impressão dos dados cadastrados 
    // DADOS CARTA 1
    printf("\n");
    printf("===================================================\n");
    printf("------------ DADOS CADASTRADOS CARTA 1 ------------\n");
    printf("  Estado: %c\n", estado1);
    printf("  Codigo Carta: %s\n", cod_carta1);
    printf("  Cidade: %s\n", cidade1);
    printf("  Populacao: %lu\n", populacao1);
    printf("  Area: %.2f km2\n", area1);
    printf("  PIB: R$ %.2f\n", pib1);
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

    // COMPARAÇÃO DE ATRIBUTOS ATRAVES DE IF + ELSE (se, senão)
    printf("\n");
    printf("===================================================\n");
    printf("------------- COMPARACAO ENTRE CARTAS -------------\n");

    int opcao;

    printf("Escolha o quesito para comparar as cartas:\n");
    printf("  (1) - Populacao\n");
    printf("  (2) - Area\n");
    printf("  (3) - PIB\n");
    printf("  (4) - Numero de Pontos Turisticos\n");
    printf("  (5) - Densidade Populacional\n"); // menor resultado ganha
    printf("  Digite sua escolha: ");
    scanf("%d", &opcao);
    printf("\n===================================================\n");
    printf("                     RESULTADO                     \n");
    printf("===================================================\n\n");
    switch (opcao) {
        case 1: 
            printf("  > Atributo escolhido:  *População*\n");
            printf("  > População Carta 1 (%s): %lu \n", cidade1, populacao1); // Usuário irá relembrar os valores
            printf("  > População Carta 2 (%s): %lu \n\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                    printf("\t   ### CARTA 1 (%s) VENCEDORA ###\n", cidade1);
                } else if (populacao1 == populacao2) {
                        printf("\t     ### EMPATE ###\n");
                        } else { printf("\t   ### CARTA 2 (%s) VENCEDORA ###", cidade2); }
            break;

        case 2: 
            printf("  > Atributo escolhido:  *Area*\n");
            printf("  > Area Carta 1 (%s): %.2f km2 \n", cidade1, area1); 
            printf("  > Area Carta 2 (%s): %.2f km2 \n\n", cidade2, area2);
            if (area1 > area2) {
                    printf("\t   ### CARTA 1 (%s) VENCEDORA ###\n", cidade1);
                } else if (area1 == area2) {
                        printf("\t     ### EMPATE ###\n");
                        } else { printf("\t   ### CARTA 2 (%s) VENCEDORA ###", cidade2); }
            break;

        case 3: 
            printf("  > Atributo escolhido:  *PIB*\n");
            printf("  > PIB Carta 1 (%s): R$ %.2f \n", cidade1, pib1); 
            printf("  > PIB Carta 2 (%s): R$ %.2f \n\n", cidade2, pib2);
            if (pib1 > pib2) {
                    printf("\t   ### CARTA 1 (%s) VENCEDORA ###\n", cidade1);
                } else if (pib1 == pib2) {
                        printf("\t     ### EMPATE ###\n");
                        } else { printf("\t   ### CARTA 2 (%s) VENCEDORA ###", cidade2); }
            break;

        case 4: 
            printf("  > Atributo escolhido:  *Pontos Turísticos*\n");
            printf("  > Pontos Turisticos Carta 1 (%s): %d \n", cidade1, ponto_tur1); 
            printf("  > Pontos Turisticos Carta 2 (%s): %d \n\n", cidade2, ponto_tur2);
            if (ponto_tur1 > ponto_tur2) {
                    printf("\t   ### CARTA 1 (%s) VENCEDORA ###\n", cidade1);
                } else if (ponto_tur1 == ponto_tur2) {
                        printf("\t     ### EMPATE ###\n");
                        } else { printf("\t   ### CARTA 2 (%s) VENCEDORA ###", cidade2); }
            break;

        case 5: 
            printf("  > Atributo escolhido:  *Densidade populacional*\n");
            printf("  > Densidade Populacional Carta 1 (%s): %.2f hab/km2 \n", cidade1, densid_pop1); 
            printf("  > Densidade Populacional Carta 2 (%s): %.2f hab/km2 \n\n", cidade2, densid_pop2);
            if (densid_pop1 < densid_pop2) {
                    printf("\t   ### CARTA 1 (%s) VENCEDORA ###\n", cidade1);
                } else if (densid_pop1 == densid_pop2) {
                        printf("\t     ### EMPATE ###\n");
                        } else { printf("\t   ### CARTA 2 (%s) VENCEDORA ###", cidade2); }
            break;
        
        default:
            printf("\n!! Opção Inválida. Tente novamente !!\n");
    }
    printf("\n\n======== Fim do Jogo! Obrigada por jogar! =========\n");
    printf("===================================================\n");

    return 0;
}