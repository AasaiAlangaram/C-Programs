#include <stdio.h>

typedef struct
{
    int (*ptr)[2][5];
}structname;

structname structvar;

int main()
{
    int arr[2][5] = {{1,3,4,5,6},{1,3,4,5,6}};
    structvar.ptr = &arr;
    
    (*structvar.ptr)[0][0] = 9;
    printf("Hello World : %d",(*structvar.ptr)[0][0]);

    return 0;
}
