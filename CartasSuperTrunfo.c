#include <stdio.h>

int main(){

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades

    //-----Variaveis Carta 1----//
    
    char carta1;
    char estado1 = 'A';
    char codigo_da_carta1[5] = "A01";
    char nome_da_cidade1[20] = "Brasilia";
    int populacao1 = 2990000;
    float area1 = 5760.78;
    float pib1 = 129790.44;
    int numeros_de_pontos_turisticos1 = 20;

    //-----Variaveis Carta 2----//
   
    char carta2;
    char estado2 = 'B';
    char codigo_da_carta2[5] = "B02";
    char nome_da_cidade2[20] = "Campos_de_jordao";
    int populacao2 = 52000;
    float area2 = 289.241;
    float pib2 = 1946799000.00;
    int numeros_de_pontos_turisticos2 = 21;
    

 // Área para entrada de dados

              printf("Carta1:\n");
   
    printf("Estado:");
 scanf(" %c", &estado1);
    
    printf("Código da Carta:");
 scanf("%s", codigo_da_carta1);

    printf("Nome da Cidade:");
 scanf("%s", nome_da_cidade1);
 
    printf("População:");
 scanf("%d", &populacao1);

    printf("Area:");
 scanf("%f", &area1);
 
    printf("PIB:");
 scanf("%f", &pib1);
 
    printf("Pontos Turisticos:");
 scanf("%d", &numeros_de_pontos_turisticos1);   


 printf("\n\n\n");
  
    
             printf("Carta2:\n");

      printf("Estado:");
 scanf(" %c", &estado2);
    
    printf("Código da Carta:");
 scanf("%s", codigo_da_carta2);

    printf("Nome da Cidade:");
 scanf("%s", nome_da_cidade2);
 
    printf("População:");
 scanf("%d", &populacao2);

    printf("Area:");
 scanf("%f", &area2);
 
    printf("PIB:");
 scanf("%f", &pib2);
 
    printf("Pontos Turisticos:");
 scanf("%d", &numeros_de_pontos_turisticos2);
           

 printf("\n\n");
 printf("Vamos ler as cartas\n\n");

 
   //----Leitura Dados da Carta 1---//
 
    printf("Carta1:\n");

printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo_da_carta1);
printf("Cidade: %s\n", nome_da_cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos Turisticos: %d\n", numeros_de_pontos_turisticos1);

printf("\n\n\n");

//------Leitura Da Carta 2-----// 
  
     printf("Carta2:\n");

printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo_da_carta2);
printf("Cidade: %s\n", nome_da_cidade2);
printf("Populaçao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos Turisticos: %d\n", numeros_de_pontos_turisticos2);
    
  
    






return 0;
}