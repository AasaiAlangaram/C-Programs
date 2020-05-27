#include <stdio.h>

typedef struct
{
    int (*onedptr)[5];
    int (*ptr)[2][5];
}structname;

structname structvar;

int main()
{
    int onedarr[5] = {11,22,3,44,55};
    int arr[2][5] = {{1,3,4,5,6},{1,3,4,5,6}};
    structvar.ptr = &arr;
    structvar.onedptr = &onedarr;
    
    (*structvar.ptr)[0][0] = 9;
    *(*(*(structvar.ptr+0)+0)) = 10;
    *(*(structvar.onedptr+0)) = 12;
    
    printf("Accessing First row first column : %d\n",(*structvar.ptr)[0][0]);
    printf("Accessing First row first column : %d\n",*(*(*(structvar.ptr+0)+0)));
    
    printf("Accessing First row value in one dim arr : %d",*(*(structvar.onedptr+0)));

    return 0;
}
