#include <stdio.h>
#include <stdlib.h>
#define SIZECOL 3
#define SIZELINE 2

int print2Dtab(int ** matrix, int sizeCol, int sizeLine);

int main(void)
{
    int * col1 = (int *)(malloc(SIZECOL*sizeof(int)));
    int * col2 = (int *)(malloc(SIZECOL*sizeof(int)));
    int ** line = (int **)(malloc(SIZELINE*sizeof(int *)));
    line[0]=col1;
    line[1]=col2;
    col1[0] = 1;col1[1]=5;col1[2]=6;
    col2[0] = 7;col2[1]=3;col2[2]=8;
    print2Dtab(line,SIZECOL,SIZELINE);
    return 0;
}

int print2Dtab(int ** matrix, int sizeCol, int sizeLine)
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