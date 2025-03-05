#include <stdio.h>
  
int main(){
    
    // Declarando as variáveis
    char estado_01, estado_02;
    char codigo_da_carta_01[5], codigo_da_carta_02[5];
    char cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float pib_01, pib_02;
    int num_pontos_turisticos_01, num_pontos_turisticos_02;

    // Entrada de dados carta 01

    printf("##### ENTRADA DE DADOS DA PRIMEIRA CARTA #####\n");

    printf("Digite o nome do estado:\n", estado_01);
    scanf("%c", &estado_01);

    printf("Digite o codigo da primeira carta:\n", codigo_da_carta_01);
    scanf("%s", &codigo_da_carta_01);
    
    printf("Digite o nome da cidade:\n", cidade_01);
    scanf("%s", &cidade_01);

    printf("Digite a quantidade da população:\n", populacao_01);
    scanf("%d", &populacao_01);

    printf("Digite a area da cidade em km²:\n", area_01);
    scanf("%f", &area_01);

    printf("Digite o valor do PIB:\n", pib_01);
    scanf("%f", &pib_01);

    printf("Digite o numero de pontos turisticos:\n", num_pontos_turisticos_01);
    scanf("%d", &num_pontos_turisticos_01);

    // Entrada de dados carta 02

    printf("##### ENTRADA DE DADOS DA SEGUNDA CARTA #####\n");

    printf("Digite o nome do estado:\n", estado_02);
    scanf(" %c", &estado_02);

    printf("Digite o codigo da segunda carta:\n", codigo_da_carta_02);
    scanf("%s", &codigo_da_carta_02);

    printf("Digite o nome da cidade:\n", cidade_02);
    scanf("%s", &cidade_02);

    printf("Digite a quantidade da população:\n", populacao_02);
    scanf("%d", &populacao_02);

    printf("Digite a area da cidade em km²:\n", area_02);
    scanf("%f", &area_02);

    printf("Digite o valor do PIB:\n", pib_02);
    scanf("%f", &pib_02);

    printf("Digite o número de pontos turisticos:\n", num_pontos_turisticos_02);
    scanf("%d", &num_pontos_turisticos_02);

    printf("##### SAIDA DE DADOS DA PRIMEIRA CARTA #####\n");

    printf("Estado: %c\n", estado_01);
    printf("Codigo da carta: %s\n", codigo_da_carta_01);
    printf("Cidade:%s\n", cidade_01);
    printf("Populacao:%d\n", populacao_01);
    printf("Area:%.2f\n", area_01);
    printf("PIB:%.2f\n", pib_01);
    printf("Numero de pontos turisticos:%d\n", num_pontos_turisticos_01);

    printf("##### SAIDA DE DADOS DA SEGUNDA CARTA #####\n");

    printf("Estado: %c\n", estado_02);
    printf("Carta:%s\n", codigo_da_carta_02);
    printf("Cidade:%s\n", cidade_02);
    printf("Populacao:%d\n", populacao_02);
    printf("Area:%.2f\n", area_02);
    printf("PIB:%.2f\n", pib_02);
    printf("Numero de pontos turisticos:%d\n", num_pontos_turisticos_02);

    return 0;

}