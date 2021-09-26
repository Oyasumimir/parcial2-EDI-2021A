
#include <stdio.h>
#define m 100
#define n 100
int main()
{
    int A[m][n];
    int i,j,filas,columnas,g;
    g=0;
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
    
    if(filas==columnas)
    {
            for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas; j++)
        {
            if(A[i][j]==A[j][i])
            g=1;
        }
    }
    }
    
    if(g == 1)
    {
        printf("La matriz es simetrica");
    }
    else
    {
        printf("La matriz no es simetrica"); 
    }
    
    return 0;
}