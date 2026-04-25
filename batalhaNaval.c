#include <stdio.h>

#define LINHAS 10
#define COLUNA 10
#define LINHAS2 3
#define COLUNA2 5
#define COLUNA3 3



int main (){ 

char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int tabuleiro[LINHAS][COLUNA];
int navio = 3;
int cruz[LINHAS2][COLUNA2];
int cone[LINHAS2][COLUNA2];
int octa[LINHAS2][COLUNA3];
int origemcruz = 2, origemcruz2 = 2;
int origemcone = 4, origemcone2 = 5;
int origemocta = 4, origemocta2 = 0;

        printf("***Tabuleiro de Batalha Naval da Babi***\n");
        printf("   ");


        //cabeca tabuleiro


        for (int i = 0; i < LINHAS; i++)
        { 
        for(int j = 0; j < COLUNA; j++)
        {
            tabuleiro[i][j] = 0; 
        }
        }
          
        for(int i = 0; i < LINHAS; i++) 
        {        
        printf("%c ", letras[i]);
        }

        printf("\n");


        // Cruz  

        for (int i = 0; i < LINHAS2; i++)
        {
        for (int j = 0; j < COLUNA2; j++)
        {   cruz[i][j] = 0;
            if (j == 2) {cruz[i][j] = 5;}
            if (i == 1) {cruz[i][j] = 5;}
        }
        }      
        
        for (int i = 0; i < LINHAS2; i++)
        {
        for (int j = 0; j < COLUNA2; j++)
        {
        tabuleiro[i + origemcruz][j + origemcruz2] = cruz[i][j];
        cruz[i][j] = 0;
        }
        }   


        //Cone

        for (int i = 0; i < LINHAS2; i++)
        {
        for (int j = 0; j < COLUNA2; j++)
        {   cone[i][j] = 0;

            if (i == 0 && j == 2) {cone[i][j] = 5;}
            if (i == 1 && (j == 1 || j == 2 || j == 3)) {cone[i][j] = 5;}
            if (i == 2) {cone[i][j] = 5;}
        }
        }   

        for (int i = 0; i < LINHAS2; i++)
        {
        for (int j = 0; j < COLUNA2; j++)
        {
        tabuleiro[i + origemcone][j + origemcone2] = cone[i][j];
        cone[i][j] = 0;
        }
        } 


        //Octaedro

        for (int i = 0; i < LINHAS2; i++)
        {
        for (int j = 0; j < COLUNA3; j++)
        {   octa[i][j] = 0;

            if (j == 1) {octa[i][j] = 5;}
            if (i == 1) {octa[i][j] = 5;}
        }
        }      

        for (int i = 0; i < LINHAS2; i++)
        {
        for (int j = 0; j < COLUNA3; j++)        
        {
            tabuleiro[i + origemocta][j + origemocta2] = octa[i][j];
            octa[i][j] = 0;
        }
        } 

        //Navio 1
        tabuleiro[0][5] = navio;
        tabuleiro[0][6] = navio;
        tabuleiro[0][7] = navio;

        //Navio 2
        tabuleiro[6][4] = navio;
        tabuleiro[7][4] = navio;
        tabuleiro[8][4] = navio;


        // Navio 3 - Diagonal 1


        for (int i = 1; i < LINHAS; i++)
        {
        for (int j = 7; j < COLUNA; j++)
        {
            if (i == j) {tabuleiro[i][j] = 3;}

        }
        }

        // Navio 4 em Diagonal 2


        for (int i = 7; i < 10; i++)
        {
        for (int j = 0; j < 10; j++)
        {
            if (i + j == 9) {tabuleiro[i][j] = 3;}

        }
        }

        for (int i = 0; i < LINHAS; i++)
        { 
        printf("%2d ", i + 1);
        
        for(int j = 0; j < COLUNA; j++)
        {       
            printf("%d ", tabuleiro[i][j]);

        }
        printf("\n");
        }    

        return 0;

    }

    }
    
               
                
