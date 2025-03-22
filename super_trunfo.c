#include <stdio.h>

int main()
{

    char estado;
    char codigo[10];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos;

    char estado2;
    char codigo2[10];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("\nCarta 1\n");
    printf("Digite a letra do Estado:\n");
    scanf("%c", &estado);

    printf("Digite o código da carta, contendo uma letra e um número:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Digite a população da cidade:\n");
    scanf("%i", &populacao);

    printf("Digite a área em km²:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%i", &pontos);
    
    printf("\nCarta 2\n");
    printf("Digite a letra do Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, contendo uma letra e um número:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%i", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos essa cidade possui?\n");
    scanf("%i", &pontos2);

    printf("\nCarta 1:\n");
    printf("Estado:%c\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da Cidade:%s\n", nome_cidade);
    printf("População:%i\n", populacao);
    printf("Área:%f km²\n", area);
    printf("PIB:%f milhões de reais\n", pib);
    printf("Número de pontos turísticos:%i\n", pontos);

    printf("\nCarta 2:\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da Cidade:%s\n", nome_cidade2);
    printf("População:%i\n", populacao2);
    printf("Área:%f km²\n", area2);
    printf("PIB:%f milhões de reais\n", pib2);
    printf("Número de pontos turísticos:%i\n", pontos2);


}
