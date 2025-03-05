#include <stdio.h>
  
int main(){
    
    char estado;
    char codigo_da_carta[5];
    char cidade[50];
    int populacao;
    float area_km²;
    float pib;
    int num_pontos_turisticos;

    printf("Digite o nome do estado: %c\n", estado);
    scanf("%c", &estado);

    printf("Digite o codigo da primeira carta: %s\n", codigo_da_carta);
    scanf("%s", &codigo_da_carta);
    
    printf("Digite o nome da cidade: %s\n", cidade);
    scanf("%s", &cidade);

    printf("Digite a quantidade da população: %d\n", populacao);
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km²: %f\n", area_km²);
    scanf("%f", &area_km²);

    printf("Digite o valor do PIB: %f\n", pib);
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: %d\n", num_pontos_turisticos);
    scanf("%d", &num_pontos_turisticos);

    printf("##### SAIDA DE DADOS DA PRIMEIRA CARTA #####\n");

    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area_km²);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos; %d\n", num_pontos_turisticos);

    printf("Digite o nome do estado: %c\n", estado);
    scanf("%c", &estado);

    printf("Digite o codigo da segunda carta: %s\n", codigo_da_carta);
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: %s\n", cidade);
    scanf("%s", &cidade);

    printf("Digite a quantidade da população: %d\n", populacao);
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km²: %f\n", area_km²);
    scanf("%f", &area_km²);

    printf("Digite o valor do PIB: %f\n", pib);
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: %d\n", num_pontos_turisticos);
    scanf("%d", &num_pontos_turisticos);

    printf("##### SAIDA DE DADOS DA SEGUNDA CARTA #####\n");

    printf("Estado: %c\n", estado);
    printf("Carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area_km²);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos; %d\n", num_pontos_turisticos);

    return 0;

}