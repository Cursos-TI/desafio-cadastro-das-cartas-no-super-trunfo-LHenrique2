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
    
    printf("cadastro de cartas super trunfo lacalidades:\n");

    char carta1;
    char carta2; 
    char carta3;

    char estado[30];
    char cidade[30];
    long int populacao;
    float area;
    float PIB;

   carta1=


    printf("digite um estado:\n");
    scanf("%s" , &estado);
    printf("digite uma cidade\n");
    scanf("%S", &cidade);
    printf("qual a população:\n");
    scanf("%d", &populacao);
    printf("digite a área em km²\n");
    scanf("%f", &area);
    printf("digite seu PIB\n");
    scanf("%f", &PIB);

    printf("Estado: %S\n", &estado);
   
    printf("Cidade: %s\n", &cidade);
    
    printf("População: %ld\n", &populacao);
    
    printf("Área: %f\n", &area);
    
    printf("PIB: %f\n", &PIB);

    carta2=

    printf("São Paulo:\n");
  
    printf("área: 1.523 km²\n");
    printf("população: 11.450.000\n");
    printf("qual e seu PIB? 828.000.000.000\n");
    

    carta3=
    
    printf("Belo Horizonte:\n");
    printf("população: 2.316.000\n");
    printf("área: 331,354 km²\n");
    printf("seu PIB é de: 105.829.675.053\n");
    

    return 0;
}
