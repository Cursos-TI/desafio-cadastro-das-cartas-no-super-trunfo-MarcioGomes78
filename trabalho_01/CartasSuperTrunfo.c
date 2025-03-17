#include <stdio.h>
  
int main(){
    
    char pais_01[50], pais_02[50];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float pib_01, pib_02;
    int num_pontos_turisticos_01, num_pontos_turisticos_02;

    // Novos atributos
    float densidadePopulacional_01, densidadePopulacional_02;
    float pib_perCapita_01, pib_perCapita_02;

    // Declarando carta de Super Poder
    float superPoder_01, superPoder_02;

    // Entrada de dados carta 01

    printf("##### ENTRADA DE DADOS DA PRIMEIRA CARTA #####\n");


    printf("Digite o país 01:\n");
    scanf("%s", pais_01);
    

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao_01);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area_01);

    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib_01);

    printf("Digite o numero de pontos turisticos:\n\n");
    scanf("%d", &num_pontos_turisticos_01);

    // Entrada de dados carta 02

    printf("##### ENTRADA DE DADOS DA SEGUNDA CARTA #####\n");

    printf("Digite o país 02:\n");
    scanf("%s", pais_02);

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao_02);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area_02);

    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib_02);

    printf("Digite o número de pontos turisticos:\n\n");
    scanf("%d", &num_pontos_turisticos_02);

    // Calculo dos novos atributos carta 01.
    densidadePopulacional_01 = populacao_01 / area_01;
    pib_perCapita_01 = pib_01 / populacao_01;

    // Calculo dos novos atributos carta 02.
    densidadePopulacional_02 = populacao_01 / area_02;
    pib_perCapita_02 = pib_02 / populacao_02;

    // Calculo do Super Poder.
    superPoder_01 = populacao_01 + 
                    area_01 + pib_01 + 
                    num_pontos_turisticos_01 + 
                    pib_perCapita_01 + 
                    densidadePopulacional_01;

    superPoder_02 = populacao_02 + 
                    area_02 + pib_02 + 
                    num_pontos_turisticos_02 + 
                    pib_perCapita_02 + 
                    densidadePopulacional_02;

    printf("##### SAIDA DE DADOS DA PRIMEIRA CARTA #####\n");
    printf("Carta 1:\n");
    printf("País: %s\n", pais_01);
    printf("Populacao:%d\n", populacao_01);
    printf("Area km²:%.2f\n", area_01);
    printf("PIB:%.2f\n", pib_01);
    printf("Numero de pontos turisticos:%d\n", num_pontos_turisticos_01);
    printf("Densidade Demográfica:%.2f\n", densidadePopulacional_01);
    printf("PIB per Capita:%.2f\n\n", pib_perCapita_01);

    printf("##### SAIDA DE DADOS DA SEGUNDA CARTA #####\n");
    printf("Carta 2:\n");
    printf("País:%s\n", pais_02);
    printf("Populacao:%d\n", populacao_02);
    printf("Area km²:%.2f\n", area_02);
    printf("PIB:%.2f\n", pib_02);
    printf("Numero de pontos turisticos:%d\n", num_pontos_turisticos_02);
    printf("Densidade Demográfica:%.2f\n", densidadePopulacional_02);
    printf("PIB per Capita:%.2f\n\n", pib_perCapita_02);

    // Menu Interativo
    printf("***** JOGO SUPER TRUNFO *****\n");
    printf("## Atributos para comparação.##\n");
    printf("Escolha uma opção.\n");
    printf("1. Pupolação.\n");
    printf("2. Área km².\n");
    printf("3. Pib\n");
    printf("4. Número Pontos Turísiticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("6. Pib Per Capita.\n");
    printf("7. Super Poder.\n\n");

    int opcao;
    printf("Qual a opção:\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("Carta 1 - País 01: %s\n", pais_01);
        printf("Carta 2 - País 02: %s\n\n", pais_02);
        printf("Atributo utilizado para comparação: População.\n\n");
        printf("Carta 1 - População: %d\n", populacao_01);
        printf("Carta 2 - População: %d\n\n", populacao_02);

        // Comparação de atributos.
        if (populacao_01 > populacao_02) {
            printf("População: Carta 1 venceu (1)\n");
        } else if (populacao_01 < populacao_02) {
            printf("População: Carta 2 venceu (0)\n");
        } else {
            printf("População: Empate!\n");
        }
        break;

    case 2:
        printf("Carta 1 - País: %s\n", pais_01);
        printf("Carta 2 - país: %s\n\n", pais_02);
        printf("Atributo utilizado para comparação: Área.\n\n");
        printf("Carta 1 - Área: %.2f\n", area_01);
        printf("Carta 2 - Área: %.2f\n", area_02);

        if (area_01 > area_02) {
            printf("Área: Carta 1 venceu (1)\n");
        } else if (area_01 < area_02) {
            printf("Área: Carta 2 venceu (0)\n");
        } else {
            printf("Área: Empate!\n");
        }
        break;

    case 3:
        printf("Carta 1 - País 01: %s\n", pais_01);
        printf("Carta 2 - País 02: %s\n\n", pais_02);
        printf("Atributo utilizado para comparação: Pib.\n\n");
        printf("Carta 1 - Pib: %.2f\n", pib_01);
        printf("Carta 2 - Pib: %.2f\n\n", pib_02);

        if (pib_01 > pib_02) {
            printf("População: Carta 1 venceu (1)\n");
        } else if (pib_01 < pib_02) {
            printf("População: Carta 2 venceu (0)\n");
        } else {
            printf("Pib: Empate!\n");
        }
        break;

    case 4:
        printf("Carta 1 - País 01: %s\n", pais_01);
        printf("Carta 2 - País 02: %s\n\n", pais_02);
        printf("Atributo utilizado para comparação: Número Pontos turísticos.\n\n");
        printf("Carta 1 - Número Pontos Turísticos: %d\n", num_pontos_turisticos_01);
        printf("Carta 2 - Número Pontos Turísticos: %d\n\n", num_pontos_turisticos_02);

        if (num_pontos_turisticos_01 > num_pontos_turisticos_02) {
            printf("Número de Pontos Turísticos: Carta 1 venceu (1)\n");
        } else if (num_pontos_turisticos_01 < num_pontos_turisticos_02) {
            printf("Número Pontos Turísticos: Carta 2 venceu (0)\n");
        } else {
            printf("Número Pontos Turísticos: Empate!\n");
        }
        break;
        
    case 5:
        printf("Carta 1 - País 01: %s\n", pais_01);
        printf("Carta 2 - País 02: %s\n\n", pais_02);
        printf("Atributo utilizado para comparação: Densidade Demografica.\n\n");
        printf("Carta 1 - Densidade Demografica.: %.2f\n", densidadePopulacional_01);
        printf("Carta 2 - Densidade Demografica.: %.2f\n\n", densidadePopulacional_02);

        if (densidadePopulacional_01 < densidadePopulacional_02) {
            printf("Densidade Demografica: Carta 1 venceu (1)\n");
        } else if (densidadePopulacional_01 > densidadePopulacional_02) {
            printf("Densidade Demografica: Carta 2 venceu (0)\n");
        } else {
            printf("Densidade Demografica: Empate!\n");
        }
        break;

        case 6:
        printf("Carta 1 - País 01: %s\n", pais_01);
        printf("Carta 2 - País 02: %s\n\n", pais_02);
        printf("Atributo utilizado para comparação: Pib Per Capita.\n\n");
        printf("Carta 1 - Pib Per Capita.: %.2f\n", pib_perCapita_01);
        printf("Carta 2 - Pib Per Capita: %.2f\n\n", pib_perCapita_02);

        if (pib_perCapita_01 > pib_perCapita_02) {
            printf("Pib Per Capita: Carta 1 venceu (1)\n");
        } else if (pib_perCapita_01 < pib_perCapita_02) {
            printf("Pib Per Capita: Carta 2 venceu (0)\n");
        } else {
            printf("Pib Per Capita: Empate!\n");
        }
        break;    
    
    case 7:
        printf("Carta 1 - País 01: %s\n", pais_01);
        printf("Carta 2 - País 02: %s\n\n", pais_02);
        printf("Atributo utilizado para comparação: Super Poder.\n\n");
        printf("Carta 1 - Super Poder.: %.2f\n", superPoder_01);
        printf("Carta 2 - Super Poder.: %.2f\n\n", superPoder_02);

        if (superPoder_01 > superPoder_02)
        {
            printf("Super Poder: Carta 1 venceu (1)");
        }
        else if (superPoder_01 < superPoder_02)
        {
            printf("Super Poder: Carta 2 venceu (0)");
        }
        else
        {
            printf("Super Poder: Empate!\n");
        }
        break;
    default:
        printf("Opção Inválida!. Tente novamente!\n");
        break;
    }
    return 0;

}