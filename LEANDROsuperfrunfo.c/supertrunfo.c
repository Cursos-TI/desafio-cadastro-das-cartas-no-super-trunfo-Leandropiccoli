#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações de uma carta
typedef struct {
    char estado;        // Letra de 'A' a 'H'
    char codigo[5];     // Código da carta, como "A01", "B03"
    char cidade[50];    // Nome da cidade
    int populacao;      // População da cidade
    float area;         // Área da cidade em km²
    float pib;          // PIB da cidade
    int pontos_turisticos; // Número de pontos turísticos
} Carta;

void imprimirCarta(Carta c) {
    printf("\nInformações da Carta:\n");
    printf("Estado: %c\n", c.estado);
    printf("Código da Carta: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.cidade);
    printf("População: %d habitantes\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontos_turisticos);
}

int main() {
    // Declarar duas cartas
    Carta carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("Digite as informações para a primeira carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);  // Para ler o nome da cidade com espaços
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Exibe as informações da primeira carta
    imprimirCarta(carta1);

    // Entrada de dados para a segunda carta
    printf("\nDigite as informações para a segunda carta:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);  // Para ler o nome da cidade com espaços
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibe as informações da segunda carta
    imprimirCarta(carta2);

    return 0;
}