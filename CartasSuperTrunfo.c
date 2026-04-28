#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;                                     //Váriavel de string de somente um caractere referente ao estado 
  char codigo1[20], cidade1[50];                    //Váriavel de string referente ao codigo e ao nome da cidade
  int populacao1;                                   //Váriavel referente ao numero da população com um número inteiro
  float area1, pib1;                                //Váriavel com um número flutuante referente a área da cidade e ao PIB 
  int ponto1;                                       //Váriavel de um número inteiro referente aos pontos turisticos da cidade


  char estado2;
  char codigo2[20], cidade2[50];
  int populacao2;
  float area2, pib2;
  int ponto2;

  // Área para entrada de dados
  printf("Jogo Super Trunfo\n");                      // Exibe a mensagem do tema principal

  printf("Carta 1:\n");                               // Referente a primeira carta
  printf("Digite o estado(A-H); \n");                 // Instrução digitação sigla do estado
  scanf(" %c", &estado1);                             // Entrada Sigla do estado

  printf("Digite o codigo da cidade (1-4) \n");       // Instrução entrada do codigo da cidade
  scanf("%s", codigo1);                               // Entrada código da cidade
  
  getchar();                                          // Limpa buffer

  printf("Digite o nome da cidade \n");               // Intrução entrada do nome da cidade
  fgets(cidade1, 50, stdin);                          // Entrada do nome da cidade
  cidade1[strcspn(cidade1, "\n")] = '\0';

  printf("Qual é a população da cidade \n");          // Instrução entrada do numero de habitantes da cidade
  scanf("%d", &populacao1);                           // Entrada do numero de habitantes da cidade 

  printf("Digite a área da cidade \n");               // Instrução da entrada do area da cidade
  scanf("%f", &area1);                                // Entrada da área da cidade 

  printf("Digite o PIB da cidade \n");                // Instrução da inserção do PIB da cidade
  scanf("%f", &pib1);                                 // Entrada da inserção do PIB da cidade 

  printf("Digite o número de pontos turisticos \n");  // Instrução dos números de pontos turisticos da cidade
  scanf("%d", &ponto1);                               // Entrada do número de pontos turisticos
  
  float densidadePopulacional1 = (float) populacao1 / area1;
  float pibCapita1 = (pib1 * 1000000000.0) / populacao1;


  printf("\n");                                       // Pular uma  linha para manter os codigos organizados
  printf("Carta 2: \n");                              // Printf referente a Segunda carta

  printf("Digite o estado(A-H); \n");                 // Instrução digitação sigla do estado
  scanf(" %c", &estado2);                             // Entrada Sigla do estado

  printf("Digite o codigo da cidade (1-4) \n");       // Instrução entrada do codigo da cidade
  scanf("%s", codigo2);                               // Entrada código da cidade

  getchar();                                          // Limpar Buffer

  printf("Digite o nome da segunda cidade \n");       // Intrução entrada do nome da cidade
  fgets(cidade2, 50, stdin);                          // Entrada do nome da cidade
  cidade2[strcspn(cidade2, "\n")] = '\0';

  printf("Qual é a população da cidade \n");          // Instrução entrada do numero de habitantes da cidade
  scanf("%d", &populacao2);                           // Entrada do numero de habitantes da cidade

  printf("Digite a área da cidade \n");               // Instrução da entrada do area da cidade
  scanf("%f", &area2);                                // Entrada da área da cidade

  printf("Digite o PIB da cidade \n");                // instrução da inserção do PIB da cidade
  scanf("%f", &pib2);                                 // Entrada da inserção do PIB da cidade

  printf("Digite o número de pontos turisticos \n");    // Instrução dos números de pontos turisticos da cidade
  scanf("%d", &ponto2);                                 // Entrada do número de pontos turisticos

  float densidadePopulacional2 = (float) populacao2 / area2;
  float pibCapita2 = (pib2 * 1000000000.0) / populacao2;
  
  // Área para exibição dos dados da cidade

  printf("\n");                                         // Pular linha
  printf("\nCarta 1:\n");                               // printf da exibição de informações da primeira carta

  printf("Estado: %c\n", estado1);                      // Saída Sigla do estado 
  printf("Codigo da cidade: %c%s\n", estado1,codigo1);  // Sáida codigo da cidade 1 
  printf("Cidade: %s\n", cidade1);                      // Saída nome da cidade 1
  printf("População: %d\n", populacao1);                // Saída da numero de habitantes
  printf("Área: %.2f km²\n", area1);                        // Saída da informações da área da cidade
  printf("PIB: %.2f bilhões de reais \n", pib1);                          // Saída informações do PIB da cidade
  printf("Número de pontos turisticos: %d\n", ponto1);  // Saída do número de potos turisticos
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais \n", pibCapita1 );

  
  printf("\n");                                         // Pular linha
  printf("\nCarta 2:\n");                               // printf da exibição da segunda carta

  printf("Estado: %c\n", estado2);                      // Saída Sigla do estado 
  printf("Codigo da cidade: %c%s\n", estado2,codigo2);  // Sáida codigo da cidade 2 
  printf("Cidade: %s\n", cidade2);                      // Saída nome da cidade 2
  printf("População: %d\n", populacao2);                // Saída da numero de habitantes
  printf("Área: %.2f km²\n", area2);                       // Saída da informações da área da cidade 2
  printf("PIB: %.2f bilhões de reais \n", pib2);                          // Saída informações do PIB da cidade 2
  printf("Número de pontos turisticos: %d\n", ponto2);  // Saída do número de potos turisticos
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais \n", pibCapita2);


  return 0;
} 
