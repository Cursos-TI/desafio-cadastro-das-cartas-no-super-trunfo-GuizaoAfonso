#include <stdio.h>

int main(){
   int populacao, numeropt, carta;
   float area, pib;
   char codigo[10], nome[20], estado[5];

   int populacao1, numeropt1, carta1;
   float area1, pib1;
   char codigo1[10], nome1[20], estado1 [5];

  //Usuário fará o cadastro da carta 1
   printf("Digite a letra A para representar o Estado: \n");
   scanf("%s", &estado);

   printf("Agora, utilize A01 para criar o código da cidade: \n");
   scanf("%s", &codigo);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome);
   
   printf("Utilizando apenas números, digite quantos habitantes ela tem: \n");
   scanf("%d", &populacao);

   printf("Digite a area total em km²: \n");
   scanf("%f", &area);

   printf("Digite o PIB da cidade: \n");
   scanf("%f", &pib);

   printf("Digite o número de Pontos turísticos: \n");
   scanf("%d", &numeropt);

    

   // usuário faz o cadastro da carta 2
   printf("Ok, a primeira carta foi cadastrada com sucesso, agora vamos cadastrar a segunda carta com os mesmos procedimentos. Digite a letra B para representar o estado: \n");
   scanf("%s", &estado1);

   printf("Agora utilize B01 para criar o código da cidade: \n");
   scanf("%s", &codigo1);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome1);
   
   printf("Utilizando apenas números, digite quantos habitantes ela tem: \n");
   scanf("%d", &populacao1);

   printf("Digite a area total em km²: \n");
   scanf("%f", &area1);

   printf("Digite o PIB da cidade: \n");
   scanf("%f", &pib1);

   printf("Digite o número de Pontos turísticos: \n");
   scanf("%d", &numeropt1);

  

//representação de tudo que foi cadastrado, carta 1 e carta 2 junto.
   printf("Parabéns, suas cartas foram criadas com sucesso!\n");
   printf("Carta 1\n");
   printf("Estado: %s \n", estado);
   printf("Código: %s \n", codigo);
   printf("Nome da Cidade: %s \n", nome);
   printf("População: %d \n", populacao);
   printf("Área: %.2f km² \n", area);
   printf("PIB: %.2f bilhoes de reais \n", pib);
   printf("Número de pontos turísticos: %d \n \n", numeropt);
  
   printf("Carta 2\n");
   printf("Estado: %s \n", estado1);
   printf("Código: %s \n", codigo1);
   printf("Nome da Cidade: %s \n", nome1);
   printf("População: %d \n", populacao1);
   printf("Área: %.2f km² \n", area1);
   printf("PIB: %.2f bilhoes de reais \n", pib1);
   printf("Número de pontos turísticos: %d \n", numeropt1);
   

   return 0;

}