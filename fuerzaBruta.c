#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirTablero();
void inicializarTablero();
void buscarsolucion();
void agregarSolucion();

char tablero[8][8];
int posiciones[2][8];
void main(void)
{
    srand(time(NULL));
    inicializarTablero();
    imprimirTablero();
    
    buscarsolucion();
    


}

void inicializarTablero()
{
    for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                tablero[i][j] = 'x';
            }
        }

}

void imprimirTablero()
{
    
    for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                printf("%c  ", tablero[i][j]);
            }
            printf("\n");
        }
}

void buscarsolucion()
{
    for (int i = 0; i < 8; i++)
    {
        if(i == 6)
        {
            for (int k = 0; k < 8; k++)
            {
                printf("%i\t",posiciones[0][k]);
                printf("%i\t",posiciones[1][k]);
                printf("\n");
            }
            printf("\n\n");
            
        }
        
        posiciones[0][i] = rand() % 8;
        posiciones[1][i] = rand() % 8;
        for (int j = 0; j < i; j++)
        {

            if(posiciones[0][i] == posiciones[0][j] || posiciones[0][i] == posiciones[1][j])
            {
                i = 1;
            }
            else if(posiciones[1][i] == posiciones[0][j] || posiciones[1][i] == posiciones[1][j])
            {
                i = 1;
            }
        }
    }
}

