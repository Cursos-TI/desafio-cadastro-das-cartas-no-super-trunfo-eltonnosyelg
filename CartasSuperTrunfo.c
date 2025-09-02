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

    //variáveis da carta 01 E 02:
    char estado1, codigo1[10], cidade1[10], estado2, codigo2[10], cidade2[10];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;



    //CADASTRO DA CARTA 01
    printf("CADASTRO DA CARTA 01: \n");

    printf("Digite o Estado da carta 01 (A á H): \n");
    scanf("%c", &estado2);
    printf("Digite o código da carta 01 : \n");
    scanf("%s", &codigo1);
    printf("Digite a cidade da carta 01 : \n");
    scanf("%s", &cidade1);
    printf("Digite o número da população da carta 01 : \n");
    scanf("%d", &populacao1);
    printf("Digite o número de pontos turísticos da carta 01 : \n");
    scanf("%d", &pontos_turisticos1);
    printf("Digite a área da carta 01 : \n");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 01 : \n");
    scanf("%f", &pib1);

    //CADASTRO DA CARTA 02
    printf("CADASTRO DA CARTA 02: \n");

    printf("Digite o Estado da carta 02 (A á H): \n");
    scanf("%s", &estado2);
    printf("Digite o código da carta 02 : \n");
    scanf("%s", &codigo2);
    printf("Digite a cidade da carta 02 : \n");
    scanf("%s", &cidade2);
    printf("Digite o número da população da carta 02 : \n");
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turísticos da carta 02 : \n");
    scanf("%d", &pontos_turisticos2);
    printf("Digite a área da carta 02 : \n");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 02 : \n");
    scanf("%f", &pib2);

    //SAÍDA DOS DADOS DA CARTA 01 E 02
    printf("DADOS DA CARTA 01: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib2);
   

    printf("DADOS DA CARTA 02: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
      


  
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
   // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
