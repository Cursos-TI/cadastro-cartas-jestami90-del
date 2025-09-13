#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[1];
  int codigo;
  char cidade[20];
  int populacao;
  float area;
  float pib;
  int pontos;
  

  // Área para entrada de dados
 printf("Carta 01\n");

 printf("Digite uma letra de A a H, representando um dos oito estados: \n");
 scanf("%s", &estado);

 printf("Digite um número de 01 a 04: \n");
 scanf("%d", &codigo);

 printf("Digite o nome da cidade: \n");
 scanf("%s", &cidade);

 printf("Digite o numero de habitantes da cidade: \n");
 scanf("%d", &populacao);

 printf("Digite a área da cidade em quilômetros quadrados: \n");
 scanf("%f", &area);

 printf("Digite o Produto Interno Bruto da cidade: \n");
 scanf("%f", &pib);

 printf("Digite a quantidade de pontos turísticos na cidade: \n");
 scanf("%d", &pontos);

  // Área para exibição dos dados da cidade
 printf("Carta 01\n");
 printf("Estado: %s\n", estado);
 printf("Código: %s%d\n", estado, codigo);
 printf("Nome da cidade: %s\n", cidade);
 printf("População: %d\n", populacao);
 printf("Área: %.2f km²\n", area);
 printf("PIB: %.2f bilhões de reais\n", pib);
 printf("Número de pontos turísticos: %d\n", pontos);


 printf("Carta 02\n");

 printf("Digite uma letra de A a H, representando um dos oito estados: \n");
 scanf("%s", &estado); /*String para caracteres*/

 printf("Digite um número de 01 a 04: \n");
 scanf("%d", &codigo); /* decimal para inteiros*/

 printf("Digite o nome da cidade: \n");
 scanf("%s", &cidade); /*String para caracteres*/

 printf("Digite o numero de habitantes da cidade: \n");
 scanf("%d", &populacao); /* decimal para inteiros*/

 printf("Digite a área da cidade em quilômetros quadrados: \n");
 scanf("%f", &area); /*Float para ponto flutuante*/

 printf("Digite o Produto Interno Bruto da cidade: \n");
 scanf("%f", &pib); /*Float para ponto flutuante*/

 printf("Digite a quantidade de pontos turísticos na cidade: \n");
 scanf("%d", &pontos); /* decimal para inteiros*/

 printf("Carta 02\n");
  
 printf("Estado: %s\n", estado);
 printf("Código: %s%d\n", estado, codigo); /*Especificador de formato e variavel na respectiva ordem*/
 printf("Nome da cidade: %s\n", cidade);
 printf("População: %d\n", populacao);
 printf("Área: %.2f km²\n", area); /*para duas casas decimais informar o .2 após a %*/
 printf("PIB: %.2f bilhões de reais\n", pib);
 printf("Número de pontos turísticos: %d", pontos);


 return 0;
} 
