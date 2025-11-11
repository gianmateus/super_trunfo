#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    double area1;
    double pib1; 
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    double area2;
    double pib2; 
    int pontosTuristicos2;

    // Entrada de dados - Carta 1
    printf("Carta 1:\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da carta (ex: A01): ");
    scanf(" %9s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf(" %lf", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %lf", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados - Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da carta (ex: B02): ");
    scanf(" %9s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf(" %lf", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %lf", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos (sem estruturas de decisao ou repeticao)
    // Densidade = populacao / area
    // PIB per capita = PIB / populacao  (mantendo unidade de bilhoes/ habitante, como no exemplo)
    float densidade1 = (float)populacao1 / (float)area1;
    float pibPerCapita1 = (float)pib1 * 1000000000.0f / (float)populacao1; // converte bilhoes -> reais

    float densidade2 = (float)populacao2 / (float)area2;
    float pibPerCapita2 = (float)pib2 * 1000000000.0f / (float)populacao2; // converte bilhoes -> reais

    // Saida formatada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

