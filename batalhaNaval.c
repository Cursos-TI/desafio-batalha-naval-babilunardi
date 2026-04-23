#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
       
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

        //diagonal 1


        for (int i = 6; i < 10; i++)
      {
        for (int j = 7; j < 10; j++)
        {
            if (i == j) {tabuleiro[i][j] = 3;}

        }
    }
        //diagonal 2

        for (int i = 0; i < 10; i++)
      {
        for (int j = 7; j < 10; j++)
        {
            if (i + j == 9) {tabuleiro[i][j] = 3;}

        }
    }
      

    //Navio 1
        tabuleiro[4][5] = navio;
        tabuleiro[4][6] = navio;
        tabuleiro[4][7] = navio;

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
    
               
                
