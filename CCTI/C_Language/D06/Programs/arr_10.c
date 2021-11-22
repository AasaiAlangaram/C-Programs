#include <stdio.h>

int main() {

    // array declaration
    // 2d array
    int marks[2][2] = {
        {10,20},
        {30,40}
        };
    int i,j;

    //marks[0][0] = 10; // row 0 col 0
    //marks[0][1] = 20; // row 0 col 1

    //marks[1][0] = 30; // row 1 col 0   
    //marks[1][1] = 40; // row 1 col 1

    for (i = 0 ;i < 2; i++)
    {
        for (j = 0 ;j < 2; j++)
        {
            printf("marks[%d][%d] :%d address : %p\n",i,j, marks[i][j], &marks[i][j]);
        }

    }

    return 0;

}