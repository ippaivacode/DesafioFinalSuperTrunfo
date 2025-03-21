#include <stdio.h>

int main() {
    // Declarando variáveis
                                
    char codigo1[4] = "A01";
    char codigo2[4]= "B02";  
    char nome1[50]= "Alpha";
    char nome2[50]= "Beta";  
    float area1 = 5200;
    float area2 = 1200;
    float pib1 = 120000;
    float pib2= 25000;                 
    double populacao1 = 3500000.75;
    double populacao2 = 850000.50;           
    int pontos_turisticos1 = 14;
    int pontos_turisticos2 = 38; 
    float pibpercapta1,pibpercapta2;
    float densidade1,densidade2;
    int atributo1,atributo2;
    int resultado1,resultado2,resultado;
  // Cálculos da primeira carta
  pibpercapta1 = (pib1/ populacao1) *1000; // Conversão explícita para float evita erro de divisão inteira
  densidade1 = populacao1/area1;

  // Cálculos da segunda carta
  pibpercapta2 = (pib2/ populacao2) *1000;  // Conversão explícita para float evita erro de divisão inteira
  densidade2 = populacao2/area2; 
  
  //**Exibição dos Dados da 1° Carta**
  printf("     --CARTA 1--\n");             
  printf("Código da carta :       %s\n", codigo1);
  printf("Nome do País:           %s\n", nome1);
  printf("População:              %.2lf \n", populacao1);
  printf("Área:                   %.2f km²\n", area1);
  printf("PIB:                    %.2f milhões de reais\n",pib1);
  printf("Pontos turísticos:      %d\n", pontos_turisticos1);
  printf("PIB per capta:          %.2lf milhões de Reais\n", pibpercapta1);
  printf("Densidade Populacional: %.2lf hab/km²\n\n", densidade1); 
  printf("------------------------------------------------------\n");

  //**Exibição dos Dados da 2° Carta**
  printf("     --CARTA 2--\n");             
  printf("Código da carta :       %s\n", codigo2);
  printf("Nome do País:           %s\n", nome2);
  printf("População:              %.2lf \n", populacao2);
  printf("Área:                   %.2f km²\n", area2);
  printf("PIB:                    %.2f milhões de reais\n",pib2);
  printf("Pontos turísticos:      %d\n", pontos_turisticos2);
  printf("PIB per capta:          %.2lf milhões de reais\n", pibpercapta2);
  printf("Densidade Populacional: %.2lf hab/km²\n\n", densidade2);
  printf("------------------------------------------------------\n\n");

  printf("---Bem-vindo ao jogo!---\n");
  printf("Escolha o primeiro atributo para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - PIB per Capita\n");
  printf("6 - Densidade Populacional\n");
  printf("Opção: ");
  scanf("%d", &atributo1);

  switch (atributo1) {
  case 1:
    printf("Você escolheu populacao\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
  case 2:
    printf("Você escolheu Área\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;
  case 3:
    printf("Você escolheu PIB\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;
  case 4:
    printf("Você escolheu Pontos turísticos\n");
    resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    break;
  case 5:
    printf("Você escolheu PIB per capta\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;
  case 6:
    printf("Você escolheu Densidade Populacional\n");
    resultado1 = densidade1 > densidade2 ? 1 : 0;
    break;
  default:
    printf("Opção de jogo inválida!!\n");
    return 0;
    }


  //escolhendo o segundo atributo
  printf("Escolha o segundo atributo:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - PIB per Capita\n");
  printf("6 - Densidade Populacional\n");
  printf("Opção: ");
  scanf("%d", &atributo2);

  if (atributo1 == atributo2){
    printf("Você deve escolher atributos diferentes!\n");
  } else {
  switch (atributo2)
  {
  case 1:
    printf("Você escolheu populacao\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
  case 2:
    printf("Você escolheu Área\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;
  case 3:
    printf("Você escolheu PIB\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;
  case 4:
    printf("Você escolheu Pontos turísticos\n");
    resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    break;
  case 5:
    printf("Você escolheu PIB per capta\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;
  case 6:
    printf("Você escolheu Densidade Populacional\n");
    resultado2 = densidade1 > densidade2 ? 1 : 0;
    break;
  default:
    printf("Opção de jogo inválida!!\n");
    break;
    return 0;
  }
}


 // Resultado da comparação
 printf("\nResultado da comparação:\n");
 if (resultado1 > resultado2) {
     printf("Carta 1 (%s) venceu em ambos os atributos!\n",nome1);
 } else if (resultado2 > resultado1) {
     printf("Carta 2 (%s) venceu em ambos os atributos!\n",nome2);
 } else {
     printf("Empate! As cartas empataram nos atributos selecionados.\n");
 }


return 0;
  }