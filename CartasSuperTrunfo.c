#include <stdio.h>

int main() {
  
    //----------INÍCIO DO DESAFIO TEMA 3 - NOVATO----------

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
    
    // Calculando e exibindo a densidade populacional (Número de Habitantes / Área)
    
    printf("\nExibindo os dados:\n");
    
    densidadePopulacional1 = (float) populacao1/area1;
    
    densidadePopulacional2 = (float) populacao2/area2;
    
    printf("Densidade populacional da carta 1: %.2f hab/km²\n", densidadePopulacional1);
    printf("Densidade populacional da carta 2: %.2f hab/km²\n", densidadePopulacional2);
    
    // Calculando e exibindo o PIB per capta (PIB / Número de Habitantes)
    
    pibPerCapta1 = pib1*1000000000/ (float) populacao1; // Conversão do PIB para bilhão
    
    pibPerCapta2 = pib2*1000000000/ (float) populacao2;
    
    printf("PIB per capta da carta 1: R$ %.2f\n", pibPerCapta1);
    printf("PIB per capta da carta 2: R$ %.2f\n", pibPerCapta2);

    // Comparando as cartas (Atributo escolhido: População)
    
    printf("\nComparação de Cartas (Atributo: população):\n");
    printf("População da Carta 1: %.d habitantes\n", populacao1);
    printf("População da Carta 2: %.d habitantes\n", populacao2);
    printf("Resultado:\n");
    
    if(populacao1 != populacao2) {
        if(populacao1 > populacao2) {
            printf("Carta 1 venceu");
        } else {
            printf("Carta 2 venceu");
        }
    } else {
        printf("Empate!");
    }
    
    return 0;
}
