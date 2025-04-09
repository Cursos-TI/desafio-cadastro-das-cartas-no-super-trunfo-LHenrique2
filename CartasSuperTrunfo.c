#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_Cartas 16 
int c; // Limpeza de Buffer

typedef struct{
    char codigo[4]; 
    char nome[50];
    int populacao;
    float area; 
    float pib; 
    int pontos_turisticos; 
    float densidade_populacional; 
    float pib_per_capita;
    float super_poder;
}Carta;
Carta cartas[MAX_Cartas];
int num_cartas = 0;

void cadastrar_carta(){
        if (num_cartas >= MAX_Cartas)
        {printf("\ntotal de cartas cadastradas esta cheio\n");
            return;
        }
        
    

    Carta nova_carta;

    printf("cadastrar cartas\n");
    printf("insira um codigo para cidade: ex A1,B2...\n");
    scanf("%s", &nova_carta.codigo);
    while ((c = getchar()) != '\n' && c != EOF);//limpar buffer
    printf("Digite um nome para a cidade:\n");
    fgets(nova_carta.nome, 50, stdin);
    nova_carta.nome[strcspn(nova_carta.nome, "\n")] = 0; // remover o \n
    printf("digite a população dessa cidade:\n");
    scanf("%d", &nova_carta.populacao);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &nova_carta.area);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("qual PIB desta cidade em Bilhões:\n");
    scanf("%f", &nova_carta.pib);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("quantos pontos turisticos existem nessa cidade:\n");
    scanf("%d", &nova_carta.pontos_turisticos);
    while ((c = getchar()) != '\n' && c != EOF);

    if (nova_carta.area == 0) {
        printf("Erro: Área não pode ser zero.\n");
        return;}

        if (nova_carta.populacao == 0) {
            printf("Erro: populacão não pode ser zero.\n");
            return;}

            if(nova_carta.pib == 0){
                printf("erro: pib não pode ser zero.\n");
                return;
            }
        
    


    // Cálculo das novas propriedades
     nova_carta.densidade_populacional = nova_carta.populacao / nova_carta.area;
     nova_carta.pib_per_capita = nova_carta.pib / nova_carta.populacao;
     nova_carta.super_poder = (nova_carta.populacao + nova_carta.area + nova_carta.pib + nova_carta.pib) + nova_carta.pib_per_capita + nova_carta.densidade_populacional;

     //array

     cartas[num_cartas] = nova_carta;
     num_cartas++;
 
 
    }
    void exibir_carta(Carta carta) {
        printf("Codigo da Cidade: %s\n", carta.codigo);
        printf("Cidade: %s\n", carta.nome);
        printf("Populacao: %d\n", carta.populacao);
        printf("Area: %.2f km²\n", carta.area);
        printf("PIB: %.2f milhoes\n", carta.pib);
        printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
        printf("PIB per capita: %.2f\n", carta.pib_per_capita);
        printf("Super Poder: %.2f", carta.super_poder);
    }
    void listar_cartas(){
        if (num_cartas == 0)
        {
            printf("sem cartas cadastradas...\n");
        }
        for (int i = 0; i < num_cartas; i++)
        {
          printf("[%d] %s\n", i, cartas[i].nome);
        }
        
        
    }

    void jogar(){
        if (num_cartas < 2)
        {
         printf("numero minimo de cadastros de cartas tem que se dois");
         return;
        }
        printf("\ncartas disponiveis\n");
        listar_cartas();



        int carta1_idx, carta2_idx;

        printf("Índice da primeira carta (0 a %d): ", num_cartas - 1);
        scanf("%d", &carta1_idx);
    
        printf("Índice da segunda carta (0 a %d): ", num_cartas - 1);
        scanf("%d", &carta2_idx);

        if (carta1_idx == carta2_idx) {
            printf("Erro: Você escolheu a mesma carta duas vezes.\n");
            return;
        }
        

        if(carta1_idx < 0 || carta1_idx >= num_cartas || carta2_idx < 0 || carta2_idx >= num_cartas){
            printf("indice de carta invalido!\n");
            return;
        }



        Carta carta1 = cartas[carta1_idx];
        Carta carta2 = cartas[carta2_idx];

        printf("\nEscolha o atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. PIB per capita\n");
        printf("5. Densidade populacional\n");
        printf("6. Pontos turisticos\n");
        printf("7. Super Poder\n");
        int escolha;
        scanf("%d",&escolha);
        while ((c = getchar()) != '\n' && c != EOF);

        switch (escolha)
        {
        case 1:
        if (carta1.populacao > carta2.populacao) {
            printf("%s, %d vence! (População)\n",carta1.nome, carta1.populacao);
        } else if (carta1.populacao < carta2.populacao) {
            printf("%s, %d vence! (População)\n", carta2.nome, carta2.populacao);
        } else {
            printf("Empate! (População)\n");
        }
        break;
        case 2:
        if(carta1.area > carta2.area){
            printf("%s, %.2f vence!(área)\n",carta1.nome,carta1.area);
        }else if (carta1.area < carta2.area){
            printf("%s, %.2f vence!(área)\n",carta2.nome, carta2.area);
        }else{
            printf("Empate! (área)\n");
        }
        break;

        case 3:
        if (carta1.pib > carta2.pib){
            printf("%s, %.2f vence! (PIB)\n",carta1.nome, carta1.pib);
        }else if (carta1.pib < carta2.pib)
        {printf("%s, %.2f vence! (PIB)\n",carta2.nome, carta2.pib);
        }else
        {printf("Empate! (PIB)\n");
        }
        break;
        
        case 4:
        if (carta1.pib_per_capita > carta2.pib_per_capita)
        { printf("%s, %.2f vence! (PIB per capita)\n",carta1.nome, carta1.pib_per_capita);
        } else  if (carta1.pib_per_capita < carta2.pib_per_capita)
        { printf("%s, %.2f vence! (PIB per capita)\n",carta2.nome, carta2.pib_per_capita);
        }else{
            printf("Empate! (PIB per capita)\n");
        }
        break;
        case 5:
        if (carta1.densidade_populacional > carta2.densidade_populacional)
        {printf("%s, %.2f vence! (Densedade Populacional)\n",carta1.nome, carta1.densidade_populacional);
        }else if (carta1.densidade_populacional < carta2.densidade_populacional)
        {printf("%s, %.2f vence! (Densedade Populacional)\n",carta2.nome, carta2.densidade_populacional);
        }else{
            printf("Empate! (Densedade Populacional)\n");
        }
        break;
        case 6:
        if (carta1.pontos_turisticos > carta2.pontos_turisticos)
        {printf("%s, %d vence! (Pontos Turisticos)\n",carta1.nome, carta1.pontos_turisticos);
        }else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
        {printf("%s, %d vence! (Pontos Turisticos)\n",carta2.nome, carta2.pontos_turisticos);
        }else{
            printf("Empate! (Pontos Turisticos)\n");
        }
        break;
        case 7:
        if(carta1.super_poder > carta2.super_poder)
        {printf("%s, %.2f vence! (Super Poder)\n",carta1.nome, carta1.super_poder);
        }else if(carta1.super_poder < carta2.super_poder)
        {printf("%s, %.2f vence! (Super Poder)\n", carta2.nome, carta2.super_poder);}
        else{ printf("Empate! (Super Poder\n)");}
        break;

        
        default: printf("opção invalida!\n");
            break;
        }
    }
        int main() {
            int opcao;
        
            do {
                printf("\nSuper Trunfo de Cidades do Brasil\n");
                printf("1. Cadastrar carta\n");
                printf("2. Jogar\n");
                printf("3.Listar Cartas\n");
                printf("4. Sair\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcao);
                while (( c = getchar() ) != '\n' && c != EOF);
        
                switch (opcao) {
                    case 1:
                        cadastrar_carta();
                        break;
                    case 2:
                        jogar();
                        break;
                    case 3:
                        listar_cartas();

                        break;
                        case 4:
                        printf("Saindo do jogo...\n");
                        break;
                    default:
                        printf("Opção inválida.\n");
                        break;
                }
            } while (opcao != 3);
        
            return 0;
        }
    
        
    
    




        
    
