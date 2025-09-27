#include <stdio.h>

int main() {
  
    //----------INÍCIO DO DESAFIO TEMA 3 - MESTRE----------

    // Variáveis das Cartas 1 e 2
    
    char estado1, codigo1[4], cidade1[40], estado2, codigo2[4], cidade2[40];
    int populacao1, numeroPontosTuristicos1, populacao2, numeroPontosTuristicos2, atributoEscolhido1, atributoEscolhido2, valorAtributo1Carta1, valorAtributo1Carta2, valorAtributo2Carta1, valorAtributo2Carta2;
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
    
    densidadePopulacional1 = (float) populacao1/area1;
    
    densidadePopulacional2 = (float) populacao2/area2;
    
    // Calculando o PIB per capta (PIB / Número de Habitantes)
    
    pibPerCapta1 = pib1*1000000000/ (float) populacao1; // Conversão do PIB para bilhão
    
    pibPerCapta2 = pib2*1000000000/ (float) populacao2;
    
    // Menu interativo usando o Switch (Escolher o primeiro atributo para comparação)
    
    printf("\nEscolha o primeiro atributo das cartas que deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    printf("Escolha:");
    scanf("%d", &atributoEscolhido1);
    
    // Lógica para garantir que o valor escolhido esteja no intervalo [1,2,3,4,5]:
    
    if(atributoEscolhido1 < 1 || atributoEscolhido1 > 5) {
         printf("\nO número correspondente ao atributo da carta deve estar entre 1 e 5. Encerrando o jogo!\n"); 
        return 1; // Encerra o programa
    } 
    
    // Segundo Menu interativo usando o Switch (Escolher o segundo atributo para comparação)
    // Lógica para não exibir a opção selecionada no atributoEscolhido1:
    
    switch(atributoEscolhido1) { // Segundo Menu
        case 1:
            printf("\nEscolha o segundo atributo das cartas que deseja comparar:\n");
            
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n\n");
            printf("Escolha:");
            scanf("%d", &atributoEscolhido2);
            
            // Lógica para garantir que o valor escolhido esteja no intervalo [2,3,4,5]:
            
            if(atributoEscolhido2 < 2 || atributoEscolhido2 > 5) {
                printf("\nO atributo correspondente ao número escolhido não existe. Encerrando o jogo!\n"); 
                return 1; // Encerra o programa
            } 
            
        break;
        case 2:
            printf("\nEscolha o segundo atributo das cartas que deseja comparar:\n");
            printf("1. População\n");
            
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n\n");
            printf("Escolha:");
            scanf("%d", &atributoEscolhido2);
            
            // Lógica para garantir que o valor escolhido esteja no intervalo [1,3,4,5]:
            
            if(atributoEscolhido2 == 2 || atributoEscolhido2 < 1 || atributoEscolhido2 > 5) {
                printf("\nO atributo correspondente ao número escolhido não existe. Encerrando o jogo!\n"); 
                return 1; // Encerra o programa
            } 
        break;
        case 3:
            printf("\nEscolha o segundo atributo das cartas que deseja comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n\n");
            printf("Escolha:");
            scanf("%d", &atributoEscolhido2);
            
            // Lógica para garantir que o valor escolhido esteja no intervalo [1,2,4,5]:
            
            if(atributoEscolhido2 == 3 || atributoEscolhido2 < 1 || atributoEscolhido2 > 5) {
                printf("\nO atributo correspondente ao número escolhido não existe. Encerrando o jogo!\n"); 
                return 1; // Encerra o programa
            } 
        break;
        case 4:
            printf("\nEscolha o segundo atributo das cartas que deseja comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            
            printf("5. Densidade demográfica\n\n");
            printf("Escolha:");
            scanf("%d", &atributoEscolhido2);
            
            // Lógica para garantir que o valor escolhido esteja no intervalo [1,2,3,5]:
            
            if(atributoEscolhido2 == 4 || atributoEscolhido2 < 1 || atributoEscolhido2 > 5) {
                printf("\nO atributo correspondente ao número escolhido não existe. Encerrando o jogo!\n"); 
                return 1; // Encerra o programa
            } 
        break;
        case 5:
            printf("\nEscolha o segundo atributo das cartas que deseja comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            
            printf("Escolha:");
            scanf("%d", &atributoEscolhido2);
            
            // Lógica para garantir que o valor escolhido esteja no intervalo [1,2,3,4]:
            
            if(atributoEscolhido2 == 5 || atributoEscolhido2 < 1 || atributoEscolhido2 > 5) {
                printf("\nO atributo correspondente ao número escolhido não existe. Encerrando o jogo!\n"); 
                return 1; // Encerra o programa
            } 
        break;
        
        // Não precisamos do valor default neste caso, já tratamos os demais casos usando if()
    }

    printf("\nAtributos escolhidos, boa sorte!\n");

    printf("\nResultado das comparações:\n");
    
    printf("\nNome das cidades:");
    printf(" %s e ", cidade1);
    printf("%s\n", cidade2);
    
    printf("\nComparação do primeiro atributo escolhido: ");
   
    switch(atributoEscolhido1) {
        case 1:
            printf("População\n");
            printf("População da Carta 1: %d hab - ", populacao1);
            printf("População da Carta 2: %d hab\n", populacao2);
            
            // O valorAtributoCarta1 será usado para somar com o valorAtributoCarta2 e decidir a carta vencedora:
            
            if(populacao1 == populacao2) {
                printf("\nEmpate! A população das cartas são iguais.\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 1;
            } else if (populacao1 > populacao2) {
                printf("\nCarta 1 venceu no atributo população!\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo população!\n");
                valorAtributo1Carta1 = 0;
                valorAtributo1Carta2 = 1;
            }
        break;
        case 2:
            printf("Área\n");
            printf("Área da Carta 1: %.2f km²- ", area1);
            printf("Área da Carta 2: %.2f km²\n", area2);
            
            // O valorAtributoCarta1 será usado para somar com o valorAtributoCarta2 e decidir a carta vencedora:
            
            if(area1 == area2) {
                printf("\nEmpate! A área das cartas são iguais.\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 1;
            } else if (area1 > area2) {
                printf("\nCarta 1 venceu no atributo área!\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo área!\n");
                valorAtributo1Carta1 = 0;
                valorAtributo1Carta2 = 1;
            }
        break;
        case 3:
            printf("PIB\n");
            printf("PIB da Carta 1: %.2f bilhões de reais - ", pib1);
            printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);
            
            // O valorAtributoCarta1 será usado para somar com o valorAtributoCarta2 e decidir a carta vencedora:
            
            if(pib1 == pib2) {
                printf("\nEmpate! O PIB das cartas são iguais.\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 1;
            } else if (pib1 > pib2) {
                printf("\nCarta 1 venceu no atributo PIB!\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo PIB!\n");
                valorAtributo1Carta1 = 0;
                valorAtributo1Carta2 = 1;
            }
        break;
        case 4:
            printf("Número de pontos turísticos\n");
            printf("Número de pontos turísticos da Carta 1: %d - ", numeroPontosTuristicos1);
            printf("Número de pontos turísticos da Carta 2: %d\n", numeroPontosTuristicos2);
            
            // O valorAtributoCarta1 será usado para somar com o valorAtributoCarta2 e decidir a carta vencedora:
            
            if(numeroPontosTuristicos1 == numeroPontosTuristicos2) {
                printf("\nEmpate! O número de pontos turísticos das cartas são iguais.\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 1;
            } else if (numeroPontosTuristicos1 > numeroPontosTuristicos2) {
                printf("\nCarta 1 venceu no atributo número de pontos turísticos!\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo número de pontos turísticos!\n");
                valorAtributo1Carta1 = 0;
                valorAtributo1Carta2 = 1;
            }
        break;
        case 5:
            printf("Densidade populacional\n");
            printf("Densidade populacional da Carta 1: %.2f hab/km² - ", densidadePopulacional1);
            printf("Densidade populacional da Carta 2: %.2f hab/km²\n", densidadePopulacional2);
            
            // O valorAtributoCarta1 será usado para somar com o valorAtributoCarta2 e decidir a carta vencedora:
            
            if(densidadePopulacional1 == densidadePopulacional2) {
                printf("\nEmpate! A densidade populacional das cartas são iguais.\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 1;
            } else if (densidadePopulacional1 < densidadePopulacional2) { // Vence a carta com o menor densidade
                printf("\nCarta 1 venceu no atributo densidade populacional!\n");
                valorAtributo1Carta1 = 1;
                valorAtributo1Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo densidade populacional!\n");
                valorAtributo1Carta1 = 0;
                valorAtributo1Carta2 = 1;
            }
        break;
        
        // Não precisamos do valor default neste caso, pois os casos em que a variável assume valores fora do intervalo [1,2,3,4,5] já foram tratados anteriormente no código.
        
    };

    printf("\nComparação do segundo atributo escolhido: ");
    
    switch(atributoEscolhido2) {
        case 1:
            printf("População\n");
            printf("População da Carta 1: %d hab - ", populacao1);
            printf("População da Carta 2: %d hab\n", populacao2);
            
            // O valorAtributoCarta2 será usado para somar com o valorAtributoCarta1 e decidir a carta vencedora:
            
            if(populacao1 == populacao2) {
                printf("\nEmpate! A população das cartas são iguais.\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 1;
            } else if (populacao1 > populacao2) {
                printf("\nCarta 1 venceu no atributo população!\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo população!\n");
                valorAtributo2Carta1 = 0;
                valorAtributo2Carta2 = 1;
            }
        break;
        case 2:
            printf("Área\n");
            printf("Área da Carta 1: %.2f km²- ", area1);
            printf("Área da Carta 2: %.2f km²\n", area2);
            
            // O valorAtributoCarta2 será usado para somar com o valorAtributoCarta1 e decidir a carta vencedora:
            
            if(area1 == area2) {
                printf("\nEmpate! A área das cartas são iguais.\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 1;
            } else if (area1 > area2) {
                printf("\nCarta 1 venceu no atributo área!\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo área!\n");
                valorAtributo2Carta1 = 0;
                valorAtributo2Carta2 = 1;
            }
        break;
        case 3:
            printf("PIB\n");
            printf("PIB da Carta 1: %.2f bilhões de reais - ", pib1);
            printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);
            
            // O valorAtributoCarta2 será usado para somar com o valorAtributoCarta1 e decidir a carta vencedora:
            
            if(pib1 == pib2) {
                printf("\nEmpate! O PIB das cartas são iguais.\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 1;
            } else if (pib1 > pib2) {
                printf("\nCarta 1 venceu no atributo PIB!\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo PIB!\n");
                valorAtributo2Carta1 = 0;
                valorAtributo2Carta2 = 1;
            }
        break;
        case 4:
            printf("Número de pontos turísticos\n");
            printf("Número de pontos turísticos da Carta 1: %d - ", numeroPontosTuristicos1);
            printf("Número de pontos turísticos da Carta 2: %d\n", numeroPontosTuristicos2);
            
            // O valorAtributoCarta2 será usado para somar com o valorAtributoCarta1 e decidir a carta vencedora:
            
            if(numeroPontosTuristicos1 == numeroPontosTuristicos2) {
                printf("\nEmpate! O número de pontos turísticos das cartas são iguais.\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 1;
            } else if (numeroPontosTuristicos1 > numeroPontosTuristicos2) {
                printf("\nCarta 1 venceu no atributo número de pontos turísticos!\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo número de pontos turísticos!\n");
                valorAtributo2Carta1 = 0;
                valorAtributo2Carta2 = 1;
            }
        break;
        case 5:
            printf("Densidade populacional\n");
            printf("Densidade populacional da Carta 1: %.2f hab/km² - ", densidadePopulacional1);
            printf("Densidade populacional da Carta 2: %.2f hab/km²\n", densidadePopulacional2);
            
            // O valorAtributoCarta2 será usado para somar com o valorAtributoCarta1 e decidir a carta vencedora:
            
            if(densidadePopulacional1 == densidadePopulacional2) {
                printf("\nEmpate! A densidade populacional das cartas são iguais.\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 1;
            } else if (densidadePopulacional1 < densidadePopulacional2) { // Vence a carta com o menor densidade
                printf("\nCarta 1 venceu no atributo densidade populacional!\n");
                valorAtributo2Carta1 = 1;
                valorAtributo2Carta2 = 0;
            } else {
                printf("\nCarta 2 venceu no atributo densidade populacional!\n");
                valorAtributo2Carta1 = 0;
                valorAtributo2Carta2 = 1;
            }
        break;
        
        // Não precisamos do valor default neste caso, pois os casos em que a variável assume valores fora do intervalo [1,2,3,4,5] já foram tratados anteriormente no código.
        
    };
    
    printf("\nResultado final do jogo:\n\n");
    
    // Lógica para determinar a carta vencedora (Soma dos atributos):
    
    if(valorAtributo1Carta1 + valorAtributo2Carta1 == valorAtributo1Carta2 + valorAtributo2Carta2) {
        printf("O jogo empatou!");
    } else {
        valorAtributo1Carta1 + valorAtributo2Carta1 > valorAtributo1Carta2 + valorAtributo2Carta2 ? printf("Vencedor: Carta 1") : printf("Vencedor: Carta 2");
    }
    
    
    
    
    return 0;
}
