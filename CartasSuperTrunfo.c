#include <stdio.h>


int main() {
  
    //----------INÍCIO DO DESAFIO----------

    // Variáveis das Cartas 1 e 2
    char estado1, codigo1[4], cidade1[40], estado2, codigo2[4], cidade2[40];
    int populacao1, numeroPontosTuristicos1, populacao2, numeroPontosTuristicos2;
    float area1, pib1, densidadePopulacional1, pibPerCapta1, area2, pib2, densidadePopulacional2, pibPerCapta2;
    
    // Coletando os dados da Carta 1

    printf("Digite os dados da carta 1:\n");

    printf("Estado (A-H):");
    scanf(" %c", &estado1);

    printf("Código da Carta (A letra do estado seguida de um número de 01 a 04):");
    scanf("%s", codigo1);

    printf("Nome da cidade:");
    scanf("%s", cidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Números de pontos turísticos:");
    scanf("%d", &numeroPontosTuristicos1);

    // Coletando os dados da Carta 2

    printf("\nDigite os dados da carta 2:\n");

    printf("Estado (A-H):");
    scanf(" %c", &estado2);

    printf("Código da Carta (A letra do estado seguida de um número de 01 a 04):");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf("%s", cidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Números de pontos turísticos:");
    scanf("%d", &numeroPontosTuristicos2);
    
    // Calculando a densidade populacional (Número de Habitantes / Área)
    
    densidadePopulacional1 = populacao1/area1;
    
    densidadePopulacional2 = populacao2/area2;
    
    // Calculando a PIB per capta (PIB / Número de Habitantes)
    
    pibPerCapta1 = pib1*1000000000/populacao1; // Conversão do PIB para bilhão
    
    pibPerCapta2 = pib2*1000000000/populacao2;

    // Exibindo os dados coletados da Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capta: R$%.2f\n", pibPerCapta1);
    

    // Exibindo os dados coletados da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capta: R$%.2f\n", pibPerCapta2);

    return 0;
}
