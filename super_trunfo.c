#include <stdio.h>

int main() {
    char estado1;
    char codigo_carta1[5];
    char nome_cidade1[50];
    int populacao1;
    float area_km2_1;
    float pib_bilhoes1;
    int pontos_turisticos1;

    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area_km2_2;
    float pib_bilhoes2;
    int pontos_turisticos2;

    printf(" Carta 1:\n");
    printf("Estado(A-H): ");
    scanf("%c", &estado1);
    printf("Código da carta(Ex:A01): ");
    scanf("%s", &codigo_carta1);
    printf("Nome da Cidade: ");
    scanf("%s", &nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área(em km2): ");
    scanf("%f", &area_km2_1);
    printf("PIB(em bilhoes): ");
    scanf("%f", &pib_bilhoes1);
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n Carta 2:\n");
    printf("Estado(A-H): ");
    scanf("%c", &estado2);
    printf("Código da carta(Ex:A01): ");
    scanf("%s", &codigo_carta2);
    printf("Nome da Cidade: ");
    scanf("%s", &nome_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área(em km2): ");
    scanf("%f", &area_km2_2);
    printf("PIB:(em bilhoes): ");
    scanf("%f", &pib_bilhoes2);
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n--- Informações das Cartas: ---\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km2\n", area_km2_1);
    printf("PIB: %.2f bilhões de reais\n", pib_bilhoes1);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos1);
    
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area_km2_2);
    printf("PIB: %.2f bilhões de reais\n", pib_bilhoes2);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos2);
        
              

    return 0;
}
