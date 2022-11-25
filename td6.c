#include <stdio.h>
#include <stdlib.h>
#define SIZECOL 3
#define SIZELINE 2

int Affiche2(int ** matrix, int sizeCol, int sizeLine);
int Saisie2(int ** matrix, int sizeCol, int sizeLine);
int Saisie2p(int ** matrix, int sizeCol, int sizeLine);

int main(void)
{
    int ** line = (int **)(malloc(SIZELINE*sizeof(int *)));
    Saisie2p(line,SIZECOL,SIZELINE);
    Affiche2(line,SIZECOL,SIZELINE);
    return 0;
}

int Affiche2(int ** matrix, int sizeCol, int sizeLine)
{
    for(int i=0;i<sizeLine;i++)
    {
        for(int j=0;j<sizeCol;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int Saisie2(int ** matrix, int sizeCol, int sizeLine)
{
    for(int i=0; i<sizeLine ; i++)
    {
        int * col = (int *)(malloc(SIZECOL*sizeof(int)));
        for(int j=0; j<sizeCol ; j++)
        {
            printf("matrix[%d][%d] = ",i,j);
            scanf("%d",&col[j]);
        }
        matrix[i] = col;
    }
    return 0;
}

int Saisie2p(int ** matrix, int sizeCol, int sizeLine)
{
    for(int i=0; i<sizeLine ; i++)
    {
        int * col = (int *)(malloc(SIZECOL*sizeof(int)));
        for(int j=0; j<sizeCol ; j++)
        {
            printf("matrix[%d][%d] = ",i,j);
            scanf("%d",&(*(col +j)));
        }
        *(matrix + i) = col;
    }
    return 0;
}