#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //Declaração de variáveis carta 1
    char estado1; 
    char codigo1[5]; 
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;
   
    //Declaração de variáveis carta 2
    char estado2;
    char codigo2[5];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    int resultado;//Variável para armazenar o resultado das comparações

    int escolhaDoJogador;//Variável para armazenar a escolha do jogador 
      
    
    //Lendo os valores da carta 1
    printf("\n");
    printf("*** JOGO SUPER TRUNFO ***\n");
    printf("\n");//Pula uma linha
    printf("Digite os valores da carta 1:\n");
    printf("\n");
    
    printf("Carta 1 \n");

    printf("Estado1: \n", estado1);
    scanf(" %c", &estado1);//Lê o caractere com espaço

    printf("Código1: \n", codigo1);
    scanf("%s", codigo1);

    printf("Nome da Cidade1: \n", cidade1);
    scanf(" %[^\n]", cidade1);//Lê a string com espaços

    printf("População1: \n", populacao1);
    scanf("%d", &populacao1);

    printf("Área1: \n", area1);
    scanf("%f", &area1);

    printf("PIB1: \n", pib1);
    scanf("%f", &pib1); 

    printf("Número de Pontos Turísticos1: \n", pontos1);
    scanf("%d", &pontos1);
    printf("\n");//Pula uma linha

    densidadePopulacional1 = populacao1 / area1; //Calculando a Densidade Populacional
    
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;//Convertendo o PIB de bilhões para reais

    //Calculando o Super Poder da carta 1
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidadePopulacional1);  
 
    
    //Lendo os valores da carta 2
    printf("Digite os valores da carta 2:\n");
    printf("\n");//Pula uma linha

    printf("Carta 2 \n");

    printf("Estado2: \n", estado2);
    scanf(" %c", &estado2);

    printf("Código2: \n", codigo2);
    scanf("%s", codigo2);

    printf("Nome da Cidade2: \n", cidade2);
    scanf(" %[^\n]", cidade2);//Lê a string com espaços

    printf("População2: \n", populacao2);
    scanf("%d", &populacao2);

    printf("Área2: \n", area2);
    scanf("%f", &area2);

    printf("PIB2: \n", pib2);
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos2: \n", pontos2);
    scanf("%d", &pontos2);

    densidadePopulacional2 = populacao2 / area2;
    
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    //Calculando o Super Poder da carta 2
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidadePopulacional2);
    

    //Imprimindo os valores da carta 1
    printf("\n");//Pula uma linha
    printf("Carta 1 \n");
    printf("Estado1: %c\n", estado1);
    printf("Código1: %s\n", codigo1);
    printf("Nome da Cidade1: %s\n", cidade1);
    printf("População1: %d\n", populacao1);
    printf("Área1: %.2f km²\n", area1);
    printf("PIB1: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos1: %d\n", pontos1);
    printf("Densidade Populacional1: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita1: %.2f reais/habitante\n", pibPerCapita1);
    printf("Super Poder1: %.2f\n", superPoder1);
    
    //Imprimindo os valores da carta 2
    printf("\n");//Pula uma linha
    printf("Carta 2 \n");
    printf("Estado2: %c\n", estado2);
    printf("Código2: %s\n", codigo2);
    printf("Nome da Cidade2: %s\n", cidade2);
    printf("População2: %d\n", populacao2);
    printf("Área2: %.2f km²\n", area2);
    printf("PIB2: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos2: %d\n", pontos2);
    printf("Densidade Populacional2: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita2: %.2f reais/habitante\n", pibPerCapita2);
    printf("Super Poder2: %.2f\n", superPoder2);
    printf("\n");//Pula uma linha


    //***Comparando as cartas***//

    //Comparando o Estado
    resultado = estado1 == estado2;
    printf("O estado da carta 1 é igual ao estado da carta 2? %d\n", resultado);

    //Comparando o Código        
    resultado = codigo1 == codigo2;
    printf("O código da carta 1 é igual ao código da carta 2? %d\n", resultado);

    //Comparando o Nome da Cidade       
    resultado = cidade1 == cidade2;
    printf("O nome da cidade da carta 1 é igual ao nome da cidade da carta 2? %d\n", resultado);

    //Comparando a População
    resultado = populacao1 > populacao2;
    printf("A população da carta 1 é maior que a população da carta 2? %d\n", resultado);

    //Comparando a Área
    resultado = area1 > area2;
    printf("A área da carta 1 é maior que a área da carta 2? %d\n", resultado);

    //Comparando o PIB
    resultado = pib1 > pib2;
    printf("O PIB da carta 1 é maior que o PIB da carta 2? %d\n", resultado);

    //Comparando o Número de Pontos Turísticos
    resultado = pontos1 > pontos2;
    printf("O número de pontos turísticos da carta 1 é maior que o número de pontos turísticos da carta 2? %d\n", resultado);

    //Comparando a Densidade Populacional
    resultado = densidadePopulacional1 < densidadePopulacional2;
    printf("A densidade populacional da carta 1 é menor que a densidade populacional da carta 2? %d\n", resultado);

    //Comparando o PIB Per Capita
    resultado = pibPerCapita1 > pibPerCapita2;
    printf("O PIB per capita da carta 1 é maior que o PIB per capita da carta 2? %d\n", resultado);

    //Comparando o Super Poder
    resultado = superPoder1 > superPoder2;
    printf("O super poder da carta 1 é maior que o super poder da carta 2? %d\n", resultado);
    printf("\n");//Pula uma linha


    //Escolha do atributo para a comparação
    printf("Escolha o atributo para a comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");   
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Super Poder\n");
    printf("\n");
    printf("Escolha: ");
    scanf("%d", &escolhaDoJogador);
    
    printf("Cartas: %s X %s \n", cidade1, cidade2);
    printf("\n");//Pula uma linha

    //Comparando os atributos escolhidos
    switch(escolhaDoJogador){
    
        case 1:
            printf("Comparação de cartas (Atributo: População):\n");
            printf("Carta 1: %d\n", populacao1);
            printf("Carta 2: %d\n", populacao2);

            if(populacao1 == populacao2){
                printf("### Jogo Empatou! ###\n");
            }else if(populacao1 > populacao2){
                printf("### Carta 1 Venceu! ###\n");
            }else{
                printf("### Carta 2 Venceu! ###\n");
            }
            break;
        case 2:
            printf("Comparação de cartas (Atributo: Área):\n");
            printf("Carta 1: %.2f km²\n", area1);
            printf("Carta 2: %.2f km²\n", area2);

            if(area1 == area2){
                printf("### Jogo Empatou! ###\n");
            }else if(area1 > area2){
                printf("### Carta 1 Venceu! ###\n");
            }else{
                printf("### Carta 2 Venceu! ###\n");
            }
            break;
        case 3:
            printf("Comparação de cartas (Atributo: PIB):\n");
            printf("Carta 1: %.2f bilhões de reais\n", pib1);
            printf("Carta 2: %.2f bilhões de reais\n", pib2);

            if(pib1 == pib2){
                printf("### Jogo Empatou! ###\n");
            }else if(pib1 > pib2){
                printf("### Carta 1 Venceu! ###\n");
            }else{
                printf("### Carta 2 Venceu! ###\n");
            }
            break;
        case 4:
            printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n");
            printf("Carta 1: %d\n", pontos1);
            printf("Carta 2: %d\n", pontos2);

            if(pontos1 == pontos2){
                printf("### Jogo Empatou! ###\n");
            }else if(pontos1 > pontos2){
                printf("### Carta 1 Venceu! ###\n");
            }else{
                printf("### Carta 2 Venceu! ###\n");
            }
            break;
        case 5:
            printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1: %.2f hab/km²\n", densidadePopulacional1);
            printf("Carta 2: %.2f hab/km²\n", densidadePopulacional2);

            if(densidadePopulacional1 == densidadePopulacional2){
                printf("### Jogo Empatou! ###\n");
            }else if(densidadePopulacional1 < densidadePopulacional2){
                printf("### Carta 1 Venceu! ###\n");
            }else{
                printf("### Carta 2 Venceu! ###\
                n");
            }
            break;
        case 6:
            printf("Comparação de cartas (Atributo: PIB Per Capita):\n");
            printf("Carta 1: %.2f reais/habitante\n", pibPerCapita1);
            printf("Carta 2: %.2f reais/habitante\n", pibPerCapita2);

            if(pibPerCapita1 == pibPerCapita2){
                printf("### Jogo Empatou! ###\n");
            }else if(pibPerCapita1 > pibPerCapita2){
                printf("### Carta 1 Venceu! ###\n");
            }else{
                printf("### Carta 2 Venceu! ###\n");
            }
            break;
        case 7:
            printf("Comparação de cartas (Atributo: Super Poder):\n");
            printf("Carta 1: %.2f\n", superPoder1);
            printf("Carta 2: %.2f\n", superPoder2);

            if(superPoder1 == superPoder2){
                printf("### Jogo Empatou! ###\n");
            }else if(superPoder1 > superPoder2){
                printf("### Carta 1 Venceu! ###\n");
            }else{
                printf("### Carta 2 Venceu! ###\n");
            }
            break;
        default:
            printf("### Opção Inválida ###\n");
            break;
    }   
   
    return 0; //Retorno da função main
}