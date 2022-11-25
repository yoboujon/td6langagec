#include <stdio.h>
#include <stdlib.h>
#define SIZECOL 3
#define SIZELINE 2

int ** Init(int sizeCol,int sizeLine);
int Affiche2(int ** matrix, int sizeCol, int sizeLine);
int Saisie2(int ** matrix, int sizeCol, int sizeLine);
int Saisie2p(int ** matrix, int sizeCol, int sizeLine);

int main(void)
{
    int ** line=Init(SIZECOL,SIZELINE);
    Saisie2p(line,SIZECOL,SIZELINE);
    Affiche2(line,SIZECOL,SIZELINE);
    return 0;
}

int ** Init(int sizeCol,int sizeLine)
{
    int ** matrix;
    matrix = (int **)(malloc(sizeLine*sizeof(int *)));
    for(int i=0;i<sizeLine;i++)
    {
        *(matrix+i) = (int *)(malloc(sizeCol*sizeof(int)));
    }
    return matrix;
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
        for(int j=0; j<sizeCol ; j++)
        {
            printf("matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    return 0;
}

int Saisie2p(int ** matrix, int sizeCol, int sizeLine)
{
    for(int i=0; i<sizeLine ; i++)
    {
        for(int j=0; j<sizeCol ; j++)
        {
            printf("matrix[%d][%d] = ",i,j);
            scanf("%d",&(*((*(matrix+i))+j)));
        }
    }
    return 0;
}