#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int navio = 3;
                
     printf("***Bem vindo ao Tabuleiro de batalha naval da babi****\n");     
     printf("   "); 
     


     //Cabeca tabuleiro
    
    for (int i = 0; i < 10; i++)
     { 
        for(int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0; 
        }
     }
          
     for(int i = 0; i < 10; i++) 
        {        
      printf("%c ", letras[i]);
        }

    //Navio 1
        tabuleiro[2][5] = navio;
        tabuleiro[2][6] = navio;
        tabuleiro[2][7] = navio;

    //Navio 2
        tabuleiro[6][4] = navio;
        tabuleiro[7][4] = navio;
        tabuleiro[8][4] = navio;

       printf("\n");


    //Tabuleiro corpo
                                    
      for (int i = 0; i < 10; i++)
     { 
        printf("%2d ", i + 1);         

        for(int j = 0; j < 10; j++)
        {       
            printf("%d ", tabuleiro[i][j]);

        }
        printf("\n");
     }
    
               
                

    return 0;
}
