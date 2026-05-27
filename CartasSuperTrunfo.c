#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;                                     //Váriavel de string de somente um caractere referente ao estado 
  char codigo1[20], cidade1[50];                    //Váriavel de string referente ao codigo e ao nome da cidade
  unsigned long int populacao1;                                   //Váriavel referente ao numero da população com um número inteiro
  float area1, pib1;                                //Váriavel com um número flutuante referente a área da cidade e ao PIB 
  int ponto1;                                       //Váriavel de um número inteiro referente aos pontos turisticos da cidade


  char estado2;
  char codigo2[20], cidade2[50];
  unsigned long int populacao2;
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
  scanf("%lu", &populacao1);                           // Entrada do numero de habitantes da cidade 

  printf("Digite a área da cidade \n");               // Instrução da entrada do area da cidade
  scanf("%f", &area1);                                // Entrada da área da cidade 

  printf("Digite o PIB da cidade \n");                // Instrução da inserção do PIB da cidade
  scanf("%f", &pib1);                                 // Entrada da inserção do PIB da cidade 

  printf("Digite o número de pontos turisticos \n");  // Instrução dos números de pontos turisticos da cidade
  scanf("%d", &ponto1);                               // Entrada do número de pontos turisticos
  
  float densidadePopulacional1 = (float) populacao1 / area1;  //Calculo da densidade populacional cidade1
  float pibCapita1 = (pib1 * 1000000000.0) / populacao1;      // Calculo do pib per capita cidade1

  float superPoder1; //calculo de Super Poder, Somando todos os atributos númericos cidade1
  superPoder1 = (float) populacao1 +
  area1 +
  pib1 +
  (float) ponto1 +
  pibCapita1 + 
  (1.0 / densidadePopulacional1);

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
  scanf("%lu", &populacao2);                           // Entrada do numero de habitantes da cidade

  printf("Digite a área da cidade \n");               // Instrução da entrada do area da cidade
  scanf("%f", &area2);                                // Entrada da área da cidade

  printf("Digite o PIB da cidade \n");                // instrução da inserção do PIB da cidade
  scanf("%f", &pib2);                                 // Entrada da inserção do PIB da cidade

  printf("Digite o número de pontos turisticos \n");    // Instrução dos números de pontos turisticos da cidade
  scanf("%d", &ponto2);                                 // Entrada do número de pontos turisticos

  float densidadePopulacional2 = (float) populacao2 / area2; //Calculo da densidade populacional cidade2
  float pibCapita2 = (pib2 * 1000000000.0) / populacao2;     // Calculo do pib per capita cidade2 
  
  float superPoder2; //calculo de Super Poder, Somando todos os atributos númericos cidade2
  superPoder2 = 
  (float) populacao2 +
   area2 +
   pib2 +
  (float) ponto2 +
  pibCapita2 +
   (1.0 / densidadePopulacional2);
  

  // Área para exibição dos dados da cidade

  printf("\n");                                         // Pular linha
  printf("\nCarta 1:\n");                               // printf da exibição de informações da primeira carta

  printf("Estado: %c\n", estado1);                      // Saída Sigla do estado 
  printf("Codigo da cidade: %c%s\n", estado1,codigo1);  // Sáida codigo da cidade 1 
  printf("Cidade: %s\n", cidade1);                      // Saída nome da cidade 1
  printf("População: %lu\n", populacao1);                // Saída da numero de habitantes
  printf("Área: %.2f km²\n", area1);                        // Saída da informações da área da cidade
  printf("PIB: %.2f bilhões de reais \n", pib1);                            // Saída informações do PIB da cidade
  printf("Número de pontos turisticos: %d\n", ponto1);                      // Saída do número de potos turisticos
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); //Saída da informação de densidade populacional
  printf("PIB per Capita: %.2f reais \n", pibCapita1 );                     // saida da informação do pib per capita
  printf("Super poder: %.2f\n", superPoder1);
  
  printf("\n");                                         // Pular linha
  printf("\nCarta 2:\n");                               // printf da exibição da segunda carta

  printf("Estado: %c\n", estado2);                      // Saída Sigla do estado 
  printf("Codigo da cidade: %c%s\n", estado2,codigo2);  // Sáida codigo da cidade 2 
  printf("Cidade: %s\n", cidade2);                      // Saída nome da cidade 2
  printf("População: %lu\n", populacao2);                // Saída da numero de habitantes
  printf("Área: %.2f km²\n", area2);                       // Saída da informações da área da cidade 2
  printf("PIB: %.2f bilhões de reais \n", pib2);                          // Saída informações do PIB da cidade 2
  printf("Número de pontos turisticos: %d\n", ponto2);  // Saída do número de pontos turisticos
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); //Saída da informação de densidade populacional cidade2
  printf("PIB per Capita: %.2f reais \n", pibCapita2);                      // saida da informação do pib per capita cidade2
  printf("Super poder: %.2f\n", superPoder2);

  printf("\n");

  //calculo de Super Poder, Somando todos os atributos númericos 

  // Comparação das cartas
  // O operador ternário (? :) verifica qual carta possui o maior valor em cada atributo.
  // Se a condição for verdadeira, "Carta 1" vence.
  // Caso contrário, "Carta 2" vence.

  // Comparação da população
  printf("Comparação de Cartas");  //calculo de comparação 
  printf("População: %s venceu (%d)\n",
  (populacao1 > populacao2) ? "Carta 1" : "Carta 2",
  (populacao1 > populacao2));


  // Comparação da área
  printf("Área: %s venceu (%d)\n",
  (area1 > area2) ? "Carta 1" : "Carta 2",
  (area1 > area2));
  
  
  // Comparação do PIB
  printf("PIB: %s venceu (%d)\n",
  (pib1 > pib2) ? "Carta 1" : "Carta 2",
  (pib1 > pib2));

  // Comparação dos pontos turísticos
  printf("Pontos Turísticos: %s venceu (%d)\n",
  (ponto1 > ponto2) ? "Carta 1" : "Carta 2",
  (ponto1 > ponto2));

  // Comparação da densidade populacional
  // Nesse caso, a menor densidade vence.
  printf("Densidade Populacional: %s venceu (%d)\n",
  (densidadePopulacional1 < densidadePopulacional2) ? "Carta 1" : "Carta 2",
  (densidadePopulacional1 < densidadePopulacional2));

  // Comparação do PIB per capita
  printf("PIB per Capita: %s venceu (%d)\n",
  (pibCapita1 > pibCapita2) ? "Carta 1" : "Carta 2",
  (pibCapita1 > pibCapita2));

  // Comparação do Super Poder
  printf("Super Poder: %s venceu (%d)\n",
  (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2",
  (superPoder1 > superPoder2));


  return 0;
} 
