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

    long int populacao;

    float area;

    float PIB;

    int pontosturisticos;

       int c; // Limpeza de Buffer

    printf("codigo da cidade: A1:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade1, 20, stdin);

        cidade1[strcspn(cidade1, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    float pibpercapta = PIB/populacao;

    float dpop = populacao/area;

char carta1[300];
snprintf(carta1, sizeof(carta1), "codigo da cidade: A1\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade1,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta1);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: A2:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade2, 20, stdin);

        cidade2[strcspn(cidade2, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta2[300];
snprintf(carta2, sizeof(carta2), "codigo da cidade: A2\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade2,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta2);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: A3:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade3, 20, stdin);

        cidade3[strcspn(cidade3, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta3[300];
snprintf(carta3, sizeof(carta3), "codigo da cidade: A3\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade3,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta3);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: A4:\n");

    printf("Estado Rio de Janeiro:\n");

    printf("digite uma cidade:\n");

    fgets(cidade4, 20, stdin);

        cidade4[strcspn(cidade4, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta4[300];
snprintf(carta4, sizeof(carta4), "codigo da cidade: A4\n Estado Rio de Janeiro\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade4,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta4);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B1:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade5, 20, stdin);

        cidade5[strcspn(cidade5, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta5[300];
snprintf(carta5, sizeof(carta5), "codigo da cidade: B1\n estado: São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade5,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta5);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B2:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade6, 20, stdin);

        cidade6[strcspn(cidade6, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta6[300];
snprintf(carta6, sizeof(carta6), "codigo da cidade: A2\n Estado São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade6,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta6);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B3:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade7, 20, stdin);

        cidade7[strcspn(cidade7, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta7[300];
snprintf(carta7, sizeof(carta7), "codigo da cidade: B3\n Estado São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade7,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta7);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: B4:\n");

    printf("Estado São Paulo:\n");

    printf("digite uma cidade:\n");

    fgets(cidade8, 20, stdin);

        cidade8[strcspn(cidade8, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta8[300];
snprintf(carta8, sizeof(carta8), "codigo da cidade: B4\n Estado São Paulo\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade8,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta8);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: C1:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade9, 20, stdin);

        cidade9[strcspn(cidade9, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta9[300];
snprintf(carta9, sizeof(carta9), "codigo da cidade: C1\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade9,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta9);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: C2:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade10, 20, stdin);

        cidade10[strcspn(cidade10, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta10[300];
snprintf(carta10, sizeof(carta10), "codigo da cidade: C2\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade10,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta10);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("codigo da cidade: C3:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade11, 20, stdin);

        cidade11[strcspn(cidade11, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta11[300];
snprintf(carta11, sizeof(carta11), "codigo da cidade: C3\n estado: Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade11,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta11);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: C4:\n");

    printf("Estado Minas Gerais:\n");

    printf("digite uma cidade:\n");

    fgets(cidade12, 20, stdin);

        cidade12[strcspn(cidade12, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta12[300];
snprintf(carta12, sizeof(carta12), "codigo da cidade: C4\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade12,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta12);
    printf("-----------------------------------------------------------------------------------------------------\n");
   
    printf("codigo da cidade: D1:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade13, 20, stdin);

        cidade13[strcspn(cidade13, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta13[300];
snprintf(carta13, sizeof(carta13), "codigo da cidade: D1\n Estado Bahia\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade13,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta13);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: D2:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade14, 20, stdin);

        cidade14[strcspn(cidade14, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta14[300];
snprintf(carta14, sizeof(carta14), "codigo da cidade: C2\n Estado Minas Gerais\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade14,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta14);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("codigo da cidade: D3:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade15, 20, stdin);

        cidade15[strcspn(cidade15, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta15[300];
snprintf(carta15, sizeof(carta15), "codigo da cidade: D3\n estado: Bahia\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade15,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta15);
    printf("-----------------------------------------------------------------------------------------------------\n");

    printf("codigo da cidade: D4:\n");

    printf("Estado Bahia:\n");

    printf("digite uma cidade:\n");

    fgets(cidade16, 20, stdin);

        cidade16[strcspn(cidade16, "\n")] = 0; // remover o \n

    printf("qual a população:\n");

    scanf("%ld", &populacao);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite a área em km²\n");

    scanf("%f", &area);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("digite seu PIB\n");

    scanf("%f", &PIB);
     while ((c = getchar()) != '\n' && c != EOF);

    printf("Quantos pontos turisticos tem nessa cidade:\n");

    scanf("%d", &pontosturisticos);
     while ((c = getchar()) != '\n' && c != EOF);

    pibpercapta = PIB/populacao;

    dpop = populacao/area;

char carta16[300];
snprintf(carta16, sizeof(carta16), "codigo da cidade: D4\n Estado Bahia\n Cidade: %s\n População: %ld\n Área: %.2f\n PIB: %.2f\n pontos turisticos: %d\n PIB per capta : %.2f\n dencidade populaconal: %.2f\n", cidade16,populacao,area,PIB,pontosturisticos,pibpercapta,dpop);
   
    printf("%s", carta16);
printf("-----------------------------------------------------------------------------------------------------\n");

  int  jogador = rand() % 16 + 1;
  int maquina = rand() % 16 + 1;

switch (jogador)
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

switch (maquina)
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
