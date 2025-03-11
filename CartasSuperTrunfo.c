#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){

    int opcao;
    int c; // Limpeza de Buffer

    //Super Trunfo
    printf("******SUPER TRUNFO CIDADES DO BRASIL****\n");

    printf("digite o numero corespondente para começar:\n");
    printf("1.iniciar\n");
    printf("2.regras\n");
    printf("3.sair\n");
    scanf("%d",&opcao);
    while ((c = getchar()) != '\n' && c != EOF);
    srand(time(0));

    switch (opcao)
    {
    case 1:{
        


  char cidade1[20], cidade2[20], cidade3[20], cidade4[20], cidade5[20], cidade6[20], cidade7[20], cidade8[20], cidade9[20], cidade10[20], cidade11[20], cidade12[20], cidade13[20], cidade14[20], cidade15[20], cidade16[20];

    long int populacao1, populacao2, populacao3, populacao4, populacao5, populacao6, populacao7, populacao8, populacao9, populacao10, populacao11, populacao12, populacao13, populacao14, populacao15, populacao16;

    float area1, area2, area3, area4, area5, area6, area7, area8, area9, area10, area11, area12, area13, area14, area15, area16;

    float PIB1, PIB2, PIB3, PIB4, PIB5, PIB6, PIB7, PIB8, PIB9, PIB10, PIB11, PIB12, PIB13, PIB14, PIB15, PIB16;

    int pontosturisticos;

       int c; // Limpeza de Buffer

    printf("codigo da cidade: A1:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade1, 20, stdin);

        cidade1[strcspn(cidade1, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao1);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area1);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB1);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    float pibpercapta1 = PIB1/populacao1;

    float dpop1 = populacao1/area1;

char carta1[300];
snprintf(carta1, sizeof(carta1), "codigo da cidade: A1\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade1,populacao1,area1,PIB1,pontosturisticos,pibpercapta1,dpop1);
   
    printf("%s", carta1);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: A2:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade2, 20, stdin);

        cidade2[strcspn(cidade2, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao2);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area2);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB2);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    float pibpercapta2 = PIB2/populacao2;

    float dpop2 = populacao2/area2;

char carta2[300];
snprintf(carta2, sizeof(carta2), "codigo da cidade: A2\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade2,populacao2,area2,PIB2,pontosturisticos,pibpercapta2,dpop2);
   
    printf("%s", carta2);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: A3:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade3, 20, stdin);

        cidade3[strcspn(cidade3, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao3);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area3);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB3);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta3 = PIB3/populacao3;

     float dpop3 = populacao3/area3;

char carta3[300];
snprintf(carta3, sizeof(carta3), "codigo da cidade: A3\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade3,populacao3,area3,PIB3,pontosturisticos,pibpercapta3,dpop3);
   
    printf("%s", carta3);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: A4:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade4, 20, stdin);

        cidade4[strcspn(cidade4, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao4);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area4);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB4);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta4 = PIB4/populacao4;

     float dpop4 = populacao4/area4;

char carta4[300];
snprintf(carta4, sizeof(carta4), "codigo da cidade: A4\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade4,populacao4,area4,PIB4,pontosturisticos,pibpercapta4,dpop4);
   
    printf("%s", carta4);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B1:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade5, 20, stdin);

        cidade5[strcspn(cidade5, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao5);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area5);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB5);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta5 = PIB5/populacao5;

     float dpop5 = populacao5/area5;

char carta5[300];
snprintf(carta5, sizeof(carta5), "codigo da cidade: B1\n estado: São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade5,populacao5,area5,PIB5,pontosturisticos,pibpercapta5,dpop5);
   
    printf("%s", carta5);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B2:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade6, 20, stdin);

        cidade6[strcspn(cidade6, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao6);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area6);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB6);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta6 = PIB6/populacao6;

     float dpop6 = populacao6/area6;

char carta6[300];
snprintf(carta6, sizeof(carta6), "codigo da cidade: A2\n Estado São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade6,populacao6,area6,PIB6,pontosturisticos,pibpercapta6,dpop6);
   
    printf("%s", carta6);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B3:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade7, 20, stdin);

        cidade7[strcspn(cidade7, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao7);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area7);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB7);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta7 = PIB7/populacao7;

     float dpop7 = populacao7/area7;

char carta7[300];
snprintf(carta7, sizeof(carta7), "codigo da cidade: B3\n Estado São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade7,populacao7,area7,PIB7,pontosturisticos,pibpercapta7,dpop7);
   
    printf("%s", carta7);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B4:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade8, 20, stdin);

        cidade8[strcspn(cidade8, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao8);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area8);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB8);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta8 = PIB8/populacao8;

     float dpop8 = populacao8/area8;

char carta8[300];
snprintf(carta8, sizeof(carta8), "codigo da cidade: B4\n Estado São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade8,populacao8,area8,PIB8,pontosturisticos,pibpercapta8,dpop8);
   
    printf("%s", carta8);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: C1:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade9, 20, stdin);

        cidade9[strcspn(cidade9, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao9);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area9);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB9);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta9 = PIB9/populacao9;

     float dpop9 = populacao9/area9;

char carta9[300];
snprintf(carta9, sizeof(carta9), "codigo da cidade: C1\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade9,populacao9,area9,PIB9,pontosturisticos,pibpercapta9,dpop9);
   
    printf("%s", carta9);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: C2:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade10, 20, stdin);

        cidade10[strcspn(cidade10, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao10);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area10);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB10);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta10 = PIB10/populacao10;

     float dpop10 = populacao10/area10;

char carta10[300];
snprintf(carta10, sizeof(carta10), "codigo da cidade: C2\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade10,populacao10,area10,PIB10,pontosturisticos,pibpercapta10,dpop10);
   
    printf("%s", carta10);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("codigo da cidade: C3:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade11, 20, stdin);

        cidade11[strcspn(cidade11, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao11);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area11);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB11);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta11 = PIB11/populacao11;

     float dpop11 = populacao11/area11;

char carta11[300];
snprintf(carta11, sizeof(carta11), "codigo da cidade: C3\n estado: Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade11,populacao11,area11,PIB11,pontosturisticos,pibpercapta11,dpop11);
   
    printf("%s", carta11);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: C4:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade12, 20, stdin);

        cidade12[strcspn(cidade12, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao12);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area12);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB12);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta12 = PIB12/populacao12;

     float dpop12 = populacao12/area12;

char carta12[300];
snprintf(carta12, sizeof(carta12), "codigo da cidade: C4\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade12,populacao12,area12,PIB12,pontosturisticos,pibpercapta12,dpop12);
   
    printf("%s", carta12);
    printf("-----------------------------------------------------------------------------------------------------\n");
   
    printf("codigo da cidade: D1:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade13, 20, stdin);

        cidade13[strcspn(cidade13, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao13);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area13);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB13);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta13 = PIB13/populacao13;

     float dpop13 = populacao13/area13;

char carta13[300];
snprintf(carta13, sizeof(carta13), "codigo da cidade: D1\n Estado Bahia\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade13,populacao13,area13,PIB13,pontosturisticos,pibpercapta13,dpop13);
   
    printf("%s", carta13);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: D2:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade14, 20, stdin);

        cidade14[strcspn(cidade14, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao14);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area14);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB14);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta14 = PIB14/populacao14;

     float dpop14 = populacao14/area14;

char carta14[300];
snprintf(carta14, sizeof(carta14), "codigo da cidade: C2\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade14,populacao14,area14,PIB14,pontosturisticos,pibpercapta14,dpop14);
   
    printf("%s", carta14);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("codigo da cidade: D3:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade15, 20, stdin);

        cidade15[strcspn(cidade15, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao15);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area15);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB15);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta15 = PIB15/populacao15;

     float dpop15 = populacao15/area15;

char carta15[300];
snprintf(carta15, sizeof(carta15), "codigo da cidade: D3\n estado: Bahia\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade15,populacao15,area15,PIB15,pontosturisticos,pibpercapta15,dpop15);
   
    printf("%s", carta15);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: D4:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade16, 20, stdin);

        cidade16[strcspn(cidade16, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao16);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area16);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB16);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

     float pibpercapta16 = PIB16/populacao16;

     float dpop16 = populacao16/area16;

char carta16[300];
snprintf(carta16, sizeof(carta16), "codigo da cidade: D4\n Estado Bahia\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade16,populacao16,area16,PIB16,pontosturisticos,pibpercapta16,dpop16);
   
    printf("%s", carta16);
printf("-----------------------------------------------------------------------------------------------------\n");

  int  jogador = rand() % 16 + 1;
  int maquina = rand() % 16 + 1;
  int escolha;

    
printf("escolha um atributo para comparação:\n");
printf("1.população\n");
printf("2.Área\n");
printf("3.PIB\n");
printf("4.PIB PERCAPTA\n");
printf("5.DENCIDADE POPULACIONAL\n");
scanf("%d", &escolha);

switch (escolha)
{
case 1:
    if ()
    {
        /* code */
    }
    
    break;

default:
    break;
}

switch (jogador) // mostrar carta do jogador escolhida
{
case 1:{
    printf("A carta do jogador é:\n");
    printf("%s", carta1);
    printf("-----------------------------------------------------------------------------------------------------\n");
}
    

    break;

    case 2:{
        printf("A carta do jogador é:\n");
        printf("%s", carta2);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 3:{
        printf("A carta do jogador é:\n");
        printf("%s", carta3);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 4:{
        printf("A carta do jogador é:\n");
        printf("%s", carta4);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 5:{
        printf("A carta do jogador é:\n");
        printf("%s", carta5);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;
    
    case 6:{
        printf("A carta do jogador é:\n");
        printf("%s", carta6);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 7:{
        printf("A carta do jogador é:\n");
        printf("%s", carta7);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 8:{
        printf("A carta do jogador é:\n");
        printf("%s", carta8);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 9:{
        printf("A carta do jogador é:\n");
        printf("%s", carta9);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 10:{
        printf("A carta do jogador é:\n");
        printf("%s", carta10);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 11:{
        printf("A carta do jogador é:\n");
        printf("%s", carta11);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 12:{
        printf("A carta do jogador é:\n");
        printf("%s", carta12);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 13:{
        printf("A carta do jogador é:\n");
        printf("%s", carta13);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;
    
    case 14:{
        printf("A carta do jogador é:\n");
        printf("%s", carta14);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 15:{
        printf("A carta do jogador é:\n");
        printf("%s", carta15);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

    case 16:{
        printf("A carta do jogador é:\n");
        printf("%s", carta16);
        printf("-----------------------------------------------------------------------------------------------------\n");
    }
    
    break;

}

switch (maquina)  //mostrar carta do computador
{
case 1:{
    printf("A carta do computador é:\n");
    printf("%s", carta1);}
    
    break;

    case 2:{
        printf("A carta do computador é:\n");
        printf("%s", carta2);}
    
    break;

    case 3:{
        printf("A carta do computador é:\n");
        printf("%s", carta3);}
    
    break;

    case 4:{
        printf("A carta do computador é:\n");
        printf("%s", carta4);}
    
    break;

    case 5:{
        printf("A carta do computador é:\n");
        printf("%s", carta5);}
    
    break;
    
    case 6:{
        printf("A carta do computador é:\n");
        printf("%s", carta6);}
    
    break;

    case 7:{
        printf("A carta do computador é:\n");
        printf("%s", carta7);}
    
    break;

    case 8:{
        printf("A carta do computador é:\n");
        printf("%s", carta8);}
    
    break;

    case 9:{
        printf("A carta do computador é:\n");
        printf("%s", carta9);}
    
    break;

    case 10:{
        printf("A carta do computador é:\n");
        printf("%s", carta10);}
    
    break;

    case 11:{
        printf("A carta do computador é:\n");
        printf("%s", carta11);}
    
    break;

    case 12:{
        printf("A carta do computador é:\n");
        printf("%s", carta12);}
    
    break;

    case 13:{
        printf("A carta do computador é:\n");
        printf("%s", carta13);}
    
    break;
    
    case 14:{
        printf("A carta do computador é:\n");
        printf("%s", carta14);}
    
    break;

    case 15:{
        printf("A carta do computador é:\n");
        printf("%s", carta15);}
    
    break;

    case 16:{
        printf("A carta do computador é:\n");
        printf("%s", carta16);}
    
    break;

}

    break;

    case 2: {
        printf("coloque suas cidades preferidas compare e se divirta...\n");
    }
    break;
  
  case 3:{
    printf("saindo......\n");
  }
  break;

  default:{
    printf("opção invalida!\n");
  }
  return 0;
    }
}
}
