#include <stdio.h>

int main() {

    // array declaration
    int marks[4] = {10,20,30,40}; //0-3
    int i;


    for (i = 0; i<4; i++)
    {
        printf("marks[%d] :%d address : %p\n",i, marks[i], &marks[i]);
    }

    return 0;
}
