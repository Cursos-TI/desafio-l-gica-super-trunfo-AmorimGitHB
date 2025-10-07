#include <stdio.h>

int main() {
    char estado1[3], estado2[3];            
    char codigo1[4], codigo2[4];            
    char nomecidade1[50], nomecidade2[50];      // DECLARANDO AS VARIAVEIS
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numeropontosturisticos1, numeropontosturisticos2;

    // IMPRIMINDO OS DADOS DA CARTA 1
    printf("\n---- Carta 1 ----\n");
    printf("Estado: ");
    scanf("%2s", estado1);

    printf("Codigo da carta: ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", nomecidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeropontosturisticos1);

    // IMPRIMINDO OS DADOS DA CARTA 2
    printf("\n---- Carta 2 ----\n");
    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Codigo da carta: ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf("%49s", nomecidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeropontosturisticos2);

    // cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1;
    float pibpercapita2 = pib2 / populacao2;

    printf("\n");
    printf("Densidade populacional(CARTA 1) = %.2f hab/km²\n",densidade1); 
    printf("Densidade populacional(CARTA 2) = %.2f hab/km²\n", densidade2);
    printf("PIB per capita(CARTA 1) = %.2f\n",pibpercapita1);
    printf("PIB per capita(CARTA 2) = %.2f\n",pibpercapita2);

    // comparação
    printf("\nComparação de cartas (atributo: população):\n");
    printf("Carta 1 - %s: %d\n", nomecidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomecidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 - %s venceu!\n", nomecidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 - %s venceu!\n", nomecidade2);
    } 
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}