#include <stdio.h>
#include <string.h>
int main() {
// Define tipos de dados para duas cartas do jogo Super Trunfo
    char estado1 ;
    char estado2 ;
    char codigo1[4] ;
    char codigo2[4] ;
    char cidade1[50] ;
    char cidade2[50] ;
    unsigned long int populacao1 ;
    unsigned long int populacao2 ;
    float area1 ;
    float area2 ;
    float pib1 ;
    float pib2 ;
    int pontosturisticos1 ;
    int pontosturisticos2 ;
    float pibpercapita1 ;
    float pibpercapita2 ;
    float densidade1 ;
    float densidade2 ;
    float superpoder1 ;
    float superpoder2 ;

// Inicializa variáveis
    estado1 = '\0';
    estado2 = '\0';
    strcpy(codigo1, "");
    strcpy(codigo2, "");
    strcpy(cidade1, "");
    strcpy(cidade2, "");
    populacao1 = 0;
    populacao2 = 0;
    area1 = 0.0f;
    area2 = 0.0f;
    pib1 = 0.0f;
    pib2 = 0.0f;
    pontosturisticos1 = 0;
    pontosturisticos2 = 0;
    pibpercapita1 = 0.0f;
    pibpercapita2 = 0.0f;
    densidade1 = 0.0f;
    densidade2 = 0.0f;
    superpoder1 = 0.0f;
    superpoder2 = 0.0f;

// Solicita dados da primeira carta
    printf("Digite a letra do estado da primeira carta:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (3 dígitos):\n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade da primeira carta:\n");
    getchar(); 
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("Digite a população da primeira carta:\n");
    scanf(" %lu", &populacao1);
    printf("Digite a área da primeira carta em km²:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira carta em bilhões de reais:\n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira carta:\n");
    scanf(" %d", &pontosturisticos1);

// Solicita dados da segunda carta
    printf("Digite a letra do estado da segunda carta:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (3 dígitos):\n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade da segunda carta:\n");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a população da segunda carta:\n");
    scanf(" %lu", &populacao2);
    printf("Digite a área da segunda carta em km²:\n");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda carta em bilhões de reais:\n");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda carta:\n");
    scanf(" %d", &pontosturisticos2);

// Calcula PIB per capita e densidade populacional
    pibpercapita1 =  (float) pib1 * 1000000000 / populacao1;
    pibpercapita2 =  (float) pib2 * 1000000000 / populacao2;
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

// Calculando "Super Poder" das cartas
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0f / densidade1)); 
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0f / densidade2));

// Exibe os dados da primeira carta
    printf("\nDados da Primeira Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de R$\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("PIB per capita: %.2f R$\n", pibpercapita1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("Super Poder: %.2f\n", superpoder1);
    
// Exibe os dados da segunda carta
    printf("\nDados da Segunda Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("PIB per capita: %.2f R$\n", pibpercapita2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("Super Poder: %.2f\n", superpoder2);

/*
    // variáveis para comparação
    int respopulacao = (populacao1 > populacao2) ;
    int resarea = (area1 > area2) ;
    int respib = (pib1 > pib2) ;
    int respontosturisticos = (pontosturisticos1 > pontosturisticos2) ;
    int respibpercapita = (pibpercapita1 > pibpercapita2) ;
    int resdensidade = (densidade1 < densidade2) ;
    int ressuperpoder = (superpoder1 > superpoder2) ;

// Compara as cartas e exibe resultados
    printf("\nComparação das cartas\n");
    printf("1= Primeira carta vence\n");
    printf("0= Segunda carta vence\n");
    printf("População: %d\n", respopulacao) ;
    printf("Área: %d\n", resarea) ;
    printf("PIB: %d\n", respib) ;
    printf("Pontos turísticos: %d\n", respontosturisticos) ;
    printf("PIB per capita: %d\n", respibpercapita) ;
    printf("Densidade populacional: %d\n", resdensidade) ;
    printf("Super Poder: %d\n", ressuperpoder) ;

//Comparação usando if-else
    printf("\nComparação de pib (if-else):\n");
    if (pib1 > pib2) {
        printf("A primeira carta venceu com PIB maior.\n");
        } else {
            printf("A segunda carta venceu com PIB maior.\n");
        }
 */

 // Menu para seleção do 1º atributo a ser comparado
    char escolha1;
    char escolha2;
    int resultado1; 
    int resultado2;
    printf("\nEscolha o 1º atributo para comparar as cartas:\n");
    printf("H - Habitantes\n");
    printf("A - Área\n");
    printf("P - PIB\n");
    printf("T - Pontos turísticos\n");
    printf("D - Densidade populacional\n");
    scanf(" %c", &escolha1);

// Estrutura switch para comparar atributos
    switch (escolha1) {
    case 'H':
    case 'h':
        resultado1 = (populacao1 > populacao2) ? 1 : 0;
        printf("Atributo escolhido: Habitantes\n");
        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);

    break;
    
    case 'A':
    case 'a':
        resultado1 = (area1 > area2) ? 1 : 0; // 1 = carta 1 vence, 0 = carta 2 vence
        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);
        
    break ;

    case 'P':
    case 'p':
        resultado1 = (pib1 > pib2) ? 1 : 0; 
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f bilhões de R$\n", cidade1, pib1);
        printf("%s: %.2f bilhões de R$\n", cidade2, pib2);

    break;

    case 'T':
    case 't':
        resultado1 = (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
        printf("Atributo escolhido: Pontos turísticos\n");
        printf("%s: %d pontos turísticos\n", cidade1, pontosturisticos1);
        printf("%s: %d pontos turísticos\n", cidade2, pontosturisticos2);
       
        break;

    case 'D':
    case 'd':
        resultado1 = (densidade1 < densidade2) ? 1 : 0; // menor densidade vence
        printf("Atributo escolhido: Densidade populacional\n");
        printf("%s: %.2f habitantes/km²\n", cidade1, densidade1);
        printf("%s: %.2f habitantes/km²\n", cidade2, densidade2);
        
        break;

    default:
        printf("Opção inválida\n");
    }

    // Menu para seleção do 2º atributo a ser comparado
    printf("\nEscolha um atributo diferente para a 2ª comparação das cartas:\n");
    printf("H - Habitantes\n");
    printf("A - Área\n");
    printf("P - PIB\n");
    printf("T - Pontos turísticos\n");
    printf("D - Densidade populacional\n");
    scanf(" %c", &escolha2);

    // Evita escolher o mesmo atributo
    if (escolha2 == escolha1) {
        printf("Você escolheu o mesmo atributo, tente novamente.\n");
    } 
    //Compara o segundo atributo
    else {
        switch (escolha2) {
        case 'H':
        case 'h':
            resultado2 = (populacao1 > populacao2) ? 1 : 0;
            printf("Atributo escolhido: Habitantes\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            break;

        case 'A':
        case 'a':
            resultado2 = (area1 > area2) ? 1 : 0;
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            break;
        case 'P':
        case 'p':
            resultado2 = (pib1 > pib2) ? 1 : 0;
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões de R$\n", cidade1, pib1);
            printf("%s: %.2f bilhões de R$\n", cidade2, pib2);
            break;
        case 'T':
        case 't':
            resultado2 = (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", cidade1, pontosturisticos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontosturisticos2);
            break;
        case 'D': 
        case 'd':
            resultado2 = (densidade1 < densidade2) ? 1 : 0;
            printf("Atributo escolhido: Densidade populacional\n");
            printf("%s: %.2f habitantes/km²\n", cidade1, densidade1);
            printf("%s: %.2f habitantes/km²\n", cidade2, densidade2);
            break;

    }
    }
// Exibe resultados das comparações
    printf("\nResultado:\n");
if (resultado1 + resultado2 == 2) {
    printf("%s venceu !\n", cidade1);
} else if (resultado1 + resultado2 == 0) {
    printf("%s venceu !\n", cidade2);
} else {
    printf("As duas cartas empataram!\n");
}
    return 0;
}
