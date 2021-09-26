#include <stdio.h>
#define m 100
#define n 100
int main()
{
    int A[m][n];
    int i,j,filas,columnas;
    printf("Escribe el numero de filas");
    scanf("%d", &filas);
    printf("Escribe el numero de columnas");
    scanf("%d", &columnas);
    
    for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas; j++)
        {
            printf("Ingresa el valor de [%d][%d]", i, j);
            scanf("%d", &A[i][j]);
            
        }
    }
    
    for(i=0;i<columnas;i++)
    {
        for(j=0;j<filas; j++)
        {
          printf("%d", A[j][i]); 
        }
        printf("\n");
    }
    
    
    
    return 0;
}
