#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado[30];
    char nome_cidade[30];
    int populacao;
    int area;
    int PIB;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    // Primeira carta
    printf("Digite o Estado: \n");
    scanf("%s", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%d", &area);

    printf("Digite o PIB: \n");
    scanf("%d", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
    
    printf("--- Agora digite os dados da segunda carta que será comparada ---\n\n");

    char estado2[30];
    char nome_cidade2[30];
    int populacao2;
    int area2;
    int PIB2;
    int pontos_turisticos2;

    // Primeira carta
    printf("Digite o Estado 2: \n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área 2: \n");
    scanf("%d", &area2);

    printf("Digite o PIB 2: \n");
    scanf("%d", &PIB2);

    printf("Digite a quantidade de pontos turísticos 2: \n");
    scanf("%d", &pontos_turisticos2);
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("--- Comparação das cartas ---\n\n");

    char cidade_vencedora[30];
    printf("--- População ---\n");
    if (populacao > populacao2) {
        printf("A cidade %s tem uma população maior do que a cidade %s!.\n\n", nome_cidade, nome_cidade2);
        strcpy(cidade_vencedora, nome_cidade);
    } else {
        printf("A cidade %s tem uma população maior do que a cidade %s!.\n\n", nome_cidade2, nome_cidade);
        strcpy(cidade_vencedora, nome_cidade2);
    }

    printf("--- Área ---\n");
    if (area > area2) {
        printf("A cidade %s tem uma área maior que a cidade %s!.\n\n", nome_cidade, nome_cidade2);
        strcpy(cidade_vencedora, nome_cidade);
    } else {
        printf("A cidade %s tem uma área maior que a cidade %s!.\n\n", nome_cidade2, nome_cidade);
        strcpy(cidade_vencedora, nome_cidade2);
    }

    printf("--- PIB ---\n");
    if (PIB > PIB2) {
        printf("A cidade %s tem o PIB maior que a cidade %s!.\n\n", nome_cidade, nome_cidade2);
        strcpy(cidade_vencedora, nome_cidade);
    } else {
        printf("A cidade %s tem o PIB maior que a cidade %s!.\n\n", nome_cidade2, nome_cidade);
        strcpy(cidade_vencedora, nome_cidade2);
    }

    printf("--- Número de pontos turísticos---\n");
    if (pontos_turisticos > pontos_turisticos2) {
        printf("A cidade %s tem mais pontos turísticos que a cidade %s!.\n\n", nome_cidade, nome_cidade2);
        strcpy(cidade_vencedora, nome_cidade);
    } else {
        printf("A cidade %s tem mais pontos turísticos que a cidade %s!.\n\n", nome_cidade2, nome_cidade);
        strcpy(cidade_vencedora, nome_cidade2);
    }
    
    // Exibição de resultado
    if (strcmp(cidade_vencedora, nome_cidade) == 0) {
        printf("A cidade 1 foi a vencedora: %s!.\n", nome_cidade);
    } else {
        printf("A cidade 2 foi a vencedora: %s!.\n", nome_cidade2);
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
