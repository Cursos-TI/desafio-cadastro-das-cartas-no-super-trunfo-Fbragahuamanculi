#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        //Carta 1
        char letra,codigo[4],cidade[15];
        int populacao, pontos_turist;
        float area, pib;
        
        //carta 2
        char letra2,codigo2[4],cidade2[15];
        int populacao2, pontos_turist2;
        float area2, pib2;

        //Cadastro da 1º carta
        printf("CADASTRO DA CARTA 1:\n");
        printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
        scanf(" %c",&letra);
        printf("A letra do estado seguida de um número de 01 a 04: ");
        scanf("%4s",codigo);
        printf("O nome da cidade: ");
        scanf("%15s",cidade);
        printf("O número de habitantes da cidade: ");
        scanf("%d",&populacao);
        printf("A área da cidade em quilômetros quadrados: ");
        scanf("%f",&area);
        printf("O Produto Interno Bruto da cidade: ");
        scanf("%f",&pib);
        printf("A quantidade de pontos turísticos na cidade: ");
        scanf("%d",&pontos_turist);
        printf(" -----------------------------------------\n");

        //Cadastro da 2º carta
        printf("CADASTRO DA CARTA 2:\n");
        printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
        scanf(" %c",&letra2);
        printf("A letra do estado seguida de um número de 01 a 04: ");
        scanf("%4s",codigo2);
        printf("O nome da cidade: ");
        scanf("%15s",cidade2);
        printf("O número de habitantes da cidade: ");
        scanf("%d",&populacao2);
        printf("A área da cidade em quilômetros quadrados: ");
        scanf("%f",&area2);
        printf("O Produto Interno Bruto da cidade: ");
        scanf("%f",&pib2);
        printf("A quantidade de pontos turísticos na cidade: ");
        scanf("%d",&pontos_turist2);

        //Exibição das cartas
    printf("-----------------1° carta:----------------\n");
    printf(" Estado: %c\n",letra);
    printf(" Codigo: %s\n",codigo);
    printf(" Nome: %s\n", cidade);
    printf(" Habitantes: %d\n", populacao);
    printf(" Area: %.2f\n", area);
    printf(" PIB: %.2f\n", pib);
    printf(" Pontos turisticos: %d\n", pontos_turist);
    printf("-----------------2° carta:----------------\n");
    printf(" Estado: %c\n",letra2);
    printf(" Codigo: %s\n",codigo2);
    printf(" Nome: %s\n", cidade2);
    printf(" Habitantes: %d\n", populacao2);
    printf(" Area: %.2f\n", area2);
    printf(" PIB: %.2f\n", pib2);
    printf(" Pontos turisticos: %d\n", pontos_turist2);
    printf(" -----------------------------------------\n");

    return 0;
}
