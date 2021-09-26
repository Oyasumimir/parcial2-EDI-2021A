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
            printf("Ingresa el valor de [%d][%d]", i, j);
            scanf("%f", &A[i][j]);
            
        }
    }
    
    for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas; j++)
        {
            suma = suma + A[i][j];
            
        }
        promedio = suma / columnas;
        printf("Promedio columna %f", promedio);
        suma=0;
    }
    return 0;
}