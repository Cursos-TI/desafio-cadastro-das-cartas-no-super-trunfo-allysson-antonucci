#include <stdio.h>

int main() {
  
    //----------INÍCIO DO DESAFIO TEMA 3 - INTERMEDIÁRIO----------

    // Variáveis das Cartas 1 e 2
    
    char estado1, codigo1[4], cidade1[40], estado2, codigo2[4], cidade2[40];
    int populacao1, numeroPontosTuristicos1, populacao2, numeroPontosTuristicos2, atributoEscolhido;
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

    
    // Menu interativo usando o Switch (Escolher atributo para comparação)
    
    printf("\nEscolha o atributo das cartas que deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    printf("Escolha:");
    scanf("%d", &atributoEscolhido);
    
    printf("\nResultado:\n");
    
    printf("Nome das cidades:");
    printf(" %s e ", cidade1);
    printf("%s\n", cidade2);
    
    printf("Atributo usado na comparação: ");
   
    switch(atributoEscolhido) {
        case 1:
            printf("População\n");
            printf("População da Carta 1: %d - ", populacao1);
            printf("População da Carta 2: %d\n", populacao2);
            
            if(populacao1 == populacao2) {
                printf("\nEmpate! A população das cartas são iguais.");
            } else if (populacao1 > populacao2) {
                printf("\nCarta 1 venceu no atributo população!");
            } else {
                printf("\nCarta 2 venceu no atributo população!");
            }
        break;
        case 2:
            printf("Área\n");
            printf("Área da Carta 1: %.2f km²- ", area1);
            printf("Área da Carta 2: %.2f km²\n", area2);
            
            if(area1 == area2) {
                printf("\nEmpate! A área das cartas são iguais.");
            } else if (area1 > area2) {
                printf("\nCarta 1 venceu no atributo área!");
            } else {
                printf("\nCarta 2 venceu no atributo área!");
            }
        break;
        case 3:
            printf("PIB\n");
            printf("PIB da Carta 1: %.2f bilhões de reais - ", pib1);
            printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);
        
            if(pib1 == pib2) {
                printf("\nEmpate! O PIB das cartas são iguais.");
            } else if (pib1 > pib2) {
                printf("\nCarta 1 venceu no atributo PIB!");
            } else {
                printf("\nCarta 2 venceu no atributo PIB!");
            }
        break;
        case 4:
            printf("Número de pontos turísticos\n");
            printf("Número de pontos turísticos da Carta 1: %d - ", numeroPontosTuristicos1);
            printf("Número de pontos turísticos da Carta 2: %d\n", numeroPontosTuristicos2);
            
            if(numeroPontosTuristicos1 == numeroPontosTuristicos2) {
                printf("\nEmpate! O número de pontos turísticos das cartas são iguais.");
            } else if (numeroPontosTuristicos1 > numeroPontosTuristicos2) {
                printf("\nCarta 1 venceu no atributo número de pontos turísticos!");
            } else {
                printf("\nCarta 2 venceu no atributo número de pontos turísticos!");
            }
        break;
        case 5:
            printf("Densidade populacional\n");
            printf("Densidade populacional da Carta 1: %.2f hab/km² - ", densidadePopulacional1);
            printf("Densidade populacional da Carta 2: %.2f hab/km²\n", densidadePopulacional2);
            
            if(densidadePopulacional1 == densidadePopulacional2) {
                printf("\nEmpate! A densidade populacional das cartas são iguais.");
            } else if (densidadePopulacional1 < densidadePopulacional2) { // Vence a carta com o menor densidade
                printf("\nCarta 1 venceu no atributo densidade populacional!");
            } else {
                printf("\nCarta 2 venceu no atributo densidade populacional!");
            }
        break;
        default:
            printf("Atributo inválido!");
        break;
    };

    
    
    return 0;
}
