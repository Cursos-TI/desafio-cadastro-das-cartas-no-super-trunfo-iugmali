#include <stdio.h>

void lerDadosCarta(char *estado, char codigo[], char nomeCidade[], int *populacao, float *area, float *pib, int *pontosTuristicos, float *densidadePopulacional, float *pibPerCapita);
void exibirDadosCarta(char estado, char codigo[], char nomeCidade[], int populacao, float area, float pib, int pontosTuristicos, float densidadePopulacional, float pibPerCapita);

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    lerDadosCarta(&estado1, codigo1, nomeCidade1, &populacao1, &area1, &pib1, &pontosTuristicos1, &densidadePopulacional1, &pibPerCapita1);

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    lerDadosCarta(&estado2, codigo2, nomeCidade2, &populacao2, &area2, &pib2, &pontosTuristicos2, &densidadePopulacional2, &pibPerCapita2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    exibirDadosCarta(estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    exibirDadosCarta(estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    return 0;
}

void lerDadosCarta(char *estado, char codigo[], char nomeCidade[], int *populacao, float *area, float *pib, int *pontosTuristicos, float *densidadePopulacional, float *pibPerCapita) {
    // Função para ler os dados de uma carta
    printf("Estado (A-H): ");
    scanf(" %c", estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade);
    printf("População: ");
    scanf("%d", populacao);
    printf("Área (em km²): ");
    scanf("%f", area);
    printf("PIB (em bilhões): ");
    scanf("%f", pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", pontosTuristicos);
    // Cálculo da densidade populacional e PIB per capita
    *densidadePopulacional = (float)(*populacao) / (*area);
    *pibPerCapita = (*pib) * 1000000000.00 / (float)(*populacao);
}

void exibirDadosCarta(char estado, char codigo[], char nomeCidade[], int populacao, float area, float pib, int pontosTuristicos, float densidadePopulacional, float pibPerCapita) {
    // Função para exibir os dados de uma carta
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
}