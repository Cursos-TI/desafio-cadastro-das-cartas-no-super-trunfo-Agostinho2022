#include <stdio.h>

int main() { //Aqui se inicia o programa
    //Criação de todas as variaveis
    char estado[20];
    char cidade[10];
    char codigo[5];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    //Inicio da entrada de dados pelo scanf!
    printf("Digite o nome do estado: \n");
    scanf(" %s", &estado);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    //Inicio da saída de todos os dados de entrada!
    printf("Nome do estado: %s\n", estado);
    printf("Nome da cidade: %s\n", cidade);//Aqui estava dando um erro, não mostrava o nome da cidade, troquei o valor char nas linhas 6,7,8 e resolveu!
    printf("Codigo da carta: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);//Aqui formatei a saída com duas casas decimais
    printf("PIB da cidade: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    
    return 0;//Fim do programa!
}
