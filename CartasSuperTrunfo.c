#include <stdio.h>

int main(){
   int populacao, numeropt, carta;
   float area, pib;
   char codigo[10], nome[20], estado[5];

   int populacao1, numeropt1, carta1;
   float area1, pib1;
   char codigo1[10], nome1[20], estado1 [5];


   printf("Digite a letra A para representar o Estado: \n");
   scanf("%s", &estado);

   printf("Agora, utilize A01 para criar o código da cidade: \n");
   scanf("%s", &codigo);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome);
   
   printf("Utilizando apenas números, digite quantos habitantes ela tem: \n");
   scanf("%d", &populacao);

   printf("Utilizando apenas números, digite a area total em km²: \n");
   scanf("%f", &area);

   printf("Utilizando apenas números, digite o PIB da cidade: \n");
   scanf("%f", &pib);

   printf("Digite o número de Pontos turísticos: \n");
   scanf("%d", &numeropt);
   
   printf("Ok, a primeira carta foi cadastrada com sucesso, agora vamos cadastrar a segunda carta com os mesmos procedimentos. Digite a letra B para representar o estado: \n");
   scanf("%s", &estado1);

   printf("Agora utilize B01 para criar o código da cidade: \n");
   scanf("%s", &codigo1);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome1);
   
   printf("Utilizando apenas números, digite quantos habitantes ela tem: \n");
   scanf("%d", &populacao1);

   printf("Utilizando apenas números, digite a area total em km² \n");
   scanf("%f", &area1);

   printf("Utilizando apenas números, digite o PIB da cidade: \n");
   scanf("%f", &pib1);

   printf("Digite o número de Pontos turísticos: \n");
   scanf("%d", &numeropt1);


   printf("Parabéns, suas cartas foram criadas com sucesso!\n");
   printf("Carta 1\n");
   printf("Estado: %s \n", estado);
   printf("Código: %s \n", codigo);
   printf("Nome da Cidade: %s \n", nome);
   printf("População: %d \n", populacao);
   printf("Área: %.f km² \n", area);
   printf("PIB: %.f bilhoes de reais \n", pib);
   printf("Número de pontos turísticos: %d \n \n", numeropt);
   printf("Carta 2\n");
   printf("Estado: %s \n", estado1);
   printf("Código: %s \n", codigo1);
   printf("Nome da Cidade: %s \n", nome1);
   printf("População: %d \n", populacao1);
   printf("Área: %.f km² \n", area1);
   printf("PIB: %.f bilhoes de reais \n", pib1);
   printf("Número de pontos turísticos: %d \n", numeropt1);

   return 0;

}
