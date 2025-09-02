#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    printf("Bem ao jogo de cartas Super Trunfo! Tema: Países\n");    
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //variáveis da carta 01:
    char estado1, codigo1[10], cidade1[10];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    //variáveis da carta 02:
    char estado2, codigo2[10], cidade2[10];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    //CADASTRO DA CARTA 01
    printf("CADASTRO DA CARTA 01: \n");

    printf("Digite o Estado (A á H): \n");
    scanf("%c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    //CADASTRO DA CARTA 02
    printf("CADASTRO DA CARTA 02: \n");



  
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
   // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
