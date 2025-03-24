#include <stdio.h>

int main() {
      // Declaração de variáveis para armazenar as informações das cartas
      char codigo1[4] = "A01";
      char codigo2[4] = "B02";  
      char nome1[50] = "Alpha";
      char nome2[50] = "Beta";  
      float area1 = 10000, area2 = 8000;
      float pib1 = 120000, pib2 = 25000;                 
      double populacao1 = 100000, populacao2 = 1000000;           
      int pontos_turisticos1 = 14, pontos_turisticos2 = 38; 
      float pibpercapta1, pibpercapta2, densidade1, densidade2;
      int atributo1, atributo2;

   // Cálculo do PIB per capita e densidade populacional para cada carta
   pibpercapta1 = (pib1 / populacao1) * 1000;
   densidade1 = populacao1 / area1;
   pibpercapta2 = (pib2 / populacao2) * 1000;
   densidade2 = populacao2 / area2; 
  
  // Exibição das cartas com os dados
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

  // Escolha dos atributos pelos jogadores
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

  printf("\nEscolha o segundo atributo:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - PIB per Capita\n");
  printf("6 - Densidade Populacional\n");
  printf("Opção: ");
  scanf("%d", &atributo2);
  printf("------------------------------------------------------\n");

  // Verifica se os atributos escolhidos são diferentes
  if (atributo1 == atributo2){
    printf("Você deve escolher atributos diferentes!\n");
    return 1; // Encerra o programa se os atributos forem iguais
  } 
  else 
  {
    // Comparação e cálculo da soma para o atributo 1
  switch (atributo1) 
  {
  case 1:
    printf("Atributo populacao\n");
    populacao1 > populacao2 ? printf("%s vence🏆 população:%.2lf \n%s          população:%.2lf\n\n",nome1,populacao1,nome2,populacao2) 
    : printf("%s vence🏆 população:%.2lf \n%s        população:%.2lf\n\n",nome2,populacao2,nome1,populacao1);
    break;
  case 2:
    printf("Atributo Área\n");
    area1 > area2 ? printf("%s vence🏆 Área:%.2lf \n%s          Área:%.2lf\n\n",nome1,area1,nome2,area2) 
    : printf("%s vence🏆 Área:%.2lf \n%s        Área:%.2lf \n\n",nome2,area2,nome1,area1);
    break;
  case 3:
    printf("Atributo PIB\n");
    pib1 > pib2 ? printf("%s vence🏆 PIB:%.2f \n%s          PIB:%.2f\n\n",nome1,pib1,nome2,pib2) 
    : printf("%s vence🏆 PIB:%.2f \n%s        PIB:%.2f \n\n",nome2,pib2,nome1,pib1);
    break;
  case 4:
    printf("Atributo Pontos turísticos\n");
    pontos_turisticos1 > pontos_turisticos2 ? printf("%s vence🏆 Pontos Turísticos:%d \n%s          Pontos Turísticos:%d \n\n",nome1,pontos_turisticos1,nome2,pontos_turisticos2) 
    : printf("%s vence🏆 Pontos Turísticos:%d \n%s        Pontos Turísticos:%d \n\n",nome2,pontos_turisticos2,nome1,pontos_turisticos1);
    break;
  case 5:
    printf("Atributo PIB per capta\n");
     pibpercapta1 > pibpercapta2 ? printf("%s vence🏆 PIB per capta:%.2lf \n%s          PIB per capta:%.2lf\n\n",nome1,pibpercapta1,nome2,pibpercapta2) 
    : printf("%s vence🏆 PIB per capta:%.2lf \n%s        PIB per capta:%.2lf \n\n",nome2,pibpercapta2,nome1,pibpercapta1);
    break;
  case 6:
    printf("Atributo Densidade Populacional\n");
    densidade1 < densidade2 ? printf("%s vence🏆 Densidade Populacional:%.2lf \n%s          Densidade Populacional:%.2lf\n\n",nome1,densidade1,nome2,densidade2) 
    : printf("%s vence🏆 Densidade Populacional:%.2lf \n%s        Densidade Populacional:%.2lf \n\n",nome2,densidade2,nome1,densidade1);
    break;
  default:
    printf("Opção de jogo inválida!!\n");
    break;
  }
  // Comparação e cálculo da soma para o atributo 2
  switch (atributo2)
  {
    case 1:
    printf("Atributo populacao\n");
    populacao1 > populacao2 ? printf("%s vence🏆 população:%.2lf \n%s          população:%.2lf\n\n",nome1,populacao1,nome2,populacao2) 
    : printf("%s vence🏆 população:%.2lf \n%s        população:%.2lf\n\n",nome2,populacao2,nome1,populacao1);
    break;
  case 2:
    printf("Atributo Área\n");
    area1 > area2 ? printf("%s vence🏆 Área:%.2lf \n%s          Área:%.2lf\n\n",nome1,area1,nome2,area2) 
    : printf("%s vence🏆 Área:%.2lf \n%s        Área:%.2lf \n\n",nome2,area2,nome1,area1);
    break;
  case 3:
    printf("Atributo PIB\n");
    pib1 > pib2 ? printf("%s vence🏆 PIB:%.2f \n%s          PIB:%.2f\n\n",nome1,pib1,nome2,pib2) 
    : printf("%s vence🏆 PIB:%.2f \n%s        PIB:%.2f \n\n",nome2,pib2,nome1,pib1);
    break;
  case 4:
    printf("Atributo Pontos turísticos\n");
    pontos_turisticos1 > pontos_turisticos2 ? printf("%s vence🏆 Pontos Turísticos:%d \n%s          Pontos Turísticos:%d \n\n",nome1,pontos_turisticos1,nome2,pontos_turisticos2) 
    : printf("%s vence🏆 Pontos Turísticos:%d \n%s        Pontos Turísticos:%d \n\n",nome2,pontos_turisticos2,nome1,pontos_turisticos1);
    break;
  case 5:
    printf("Atributo PIB per capta\n");
    pib1 > pib2 ? printf("%s vence🏆 PIB per capta:%.2lf \n%s          PIB per capta:%.2lf\n\n",nome1,pibpercapta1,nome2,pibpercapta2) 
    : printf("%s vence🏆 PIB per capta:%.2lf \n%s        PIB per capta:%.2lf \n\n",nome2,pibpercapta2,nome1,pibpercapta1);
    break;
  case 6:
    printf("Atributo Densidade Populacional\n");
    densidade1 < densidade2 ? printf("%s vence🏆 Densidade Populacional:%.2lf \n%s          Densidade Populacional:%.2lf\n\n",nome1,densidade1,nome2,densidade2) 
    : printf("%s vence🏆 Densidade Populacional:%.2lf \n%s        Densidade Populacional:%.2lf \n\n",nome2,densidade2,nome1,densidade1);
    break;
  default:
    printf("Opção de jogo inválida!!\n");
    break;

  }
}


  // Soma dos atributos para cada carta
float soma1 = 0, soma2 = 0;

switch (atributo1) {
    case 1: soma1 += populacao1; soma2 += populacao2; break;
    case 2: soma1 += area1; soma2 += area2; break;
    case 3: soma1 += pib1; soma2 += pib2; break;
    case 4: soma1 += pontos_turisticos1; soma2 += pontos_turisticos2; break;
    case 5: soma1 += pibpercapta1; soma2 += pibpercapta2; break;
    case 6: soma1 += densidade1; soma2 += densidade2; break;
}

switch (atributo2) {
    case 1: soma1 += populacao1; soma2 += populacao2; break;
    case 2: soma1 += area1; soma2 += area2; break;
    case 3: soma1 += pib1; soma2 += pib2; break;
    case 4: soma1 += pontos_turisticos1; soma2 += pontos_turisticos2; break;
    case 5: soma1 += pibpercapta1; soma2 += pibpercapta2; break;
    case 6: soma1 += densidade1; soma2 += densidade2; break;
}

// Determinação do vencedor com base na soma dos atributos
printf("Soma dos Atributos:\n");
printf("%s: %.2f\n", nome1, soma1);
printf("%s: %.2f\n\n", nome2, soma2);

if (soma1 > soma2) {
    printf("%s vence a rodada! 🏆\n\n", nome1);
} else if (soma2 > soma1) {
    printf("%s vence a rodada! 🏆\n\n", nome2);
} else {
    printf("Empate!\n");
}

 
   

return 0;
  }