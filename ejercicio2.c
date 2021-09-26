#include <stdio.h>
#define m 100
#define n 100
int main()
{
    float A[m][n];
    int i,j,filas,columnas;
    float suma=0;
    float promedio;
    printf("Escribe el numero de filas");
    scanf("%d", &filas);
    printf("Escribe el numero de columnas");
    scanf("%d", &columnas);
    
    for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas; j++)
        {
            if(i==j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
    
        
            
        }
        printf("\n");
    }
    return 0;
}
