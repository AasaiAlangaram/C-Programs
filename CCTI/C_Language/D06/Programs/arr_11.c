#include <stdio.h>

int main() {

    // array declaration
    // 3d array
    int marks[3][2][2];
    int i,j,k;

    marks[0][0][0] = 10;
    marks[0][0][1] = 20;
    marks[0][1][0] = 30;
    marks[0][1][1] = 40;

    marks[1][0][0] = 10;
    marks[1][0][1] = 20;
    marks[1][1][0] = 30;
    marks[1][1][1] = 40;

    marks[2][0][0] = 10;
    marks[2][0][1] = 20;
    marks[2][1][0] = 30;
    marks[2][1][1] = 40;

    for(i = 0; i<3;i++)
    {
        printf("|");
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                //printf("marks[%d][%d][%d] : %d  address : %p\n", i,j,k, marks[i][j][k], &marks[i][j][k]);
                printf(" %d  ", marks[i][j][k], &marks[i][j][k]);
            }
            
        }printf("|");
        printf("\n");
    }
    return 0;

}

