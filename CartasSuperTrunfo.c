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
    scanf("%d", nova_carta.populacao);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Digite a area da cidade:\n");
    scanf("%f", &nova_carta.area);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("qual PIB desta cidade:\n");
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
        
    


    // Cálculo das novas propriedades
     nova_carta.densidade_populacional = nova_carta.populacao / nova_carta.area;
     nova_carta.pib_per_capita = nova_carta.pib / nova_carta.populacao;

     //array

     cartas[num_cartas] = nova_carta;
     num_cartas++;
 
 
    }

    void jogar(){
        if (num_cartas < 2)
        {
         printf("numero minimo de cadastros de cartas tem que se dois");
         return;
        }
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
            printf("%s, %f vence!(área)\n",carta1.nome,carta1.area);
        }else if (carta1.area < carta2.area){
            printf("%s, %f vence!(área)\n",carta2.nome, carta2.area);
        }else{
            printf("Empate! (área)\n");
        }
        break;

        case 3:
        if (carta1.pib > carta2.pib){
            printf("%s, %f vence! (PIB)\n",carta1.nome, carta1.pib);
        }else if (carta1.pib < carta2.pib)
        {printf("%s, %f vence! (PIB)\n",carta2.nome, carta2.pib);
        }else
        {printf("Empate! (PIB)\n");
        }
        break;
        
        case 4:
        if (carta1.pib_per_capita > carta2.pib_per_capita)
        { printf("%s, %f vence! (PIB per capita)\n",carta1.nome, carta1.pib_per_capita);
        } else  if (carta1.pib_per_capita < carta2.pib_per_capita)
        { printf("%s, %f vence! (PIB per capita)\n",carta2.nome, carta2.pib_per_capita);
        }else{
            printf("Empate! (PIB per capita)\n");
        }
        break;
        case 5:
        if (carta1.densidade_populacional > carta2.densidade_populacional)
        {printf("%s, %f vence! (Densedade Populacional)\n",carta1.nome, carta1.densidade_populacional);
        }else if (carta1.densidade_populacional < carta2.densidade_populacional)
        {printf("%s, %f vence! (Densedade Populacional)\n",carta2.nome, carta2.densidade_populacional);
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
                printf("3. Sair\n");
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
                        printf("Saindo do jogo...\n");
                        break;
                    default:
                        printf("Opção inválida.\n");
                        break;
                }
            } while (opcao != 3);
        
            return 0;
        }
    
        
    
