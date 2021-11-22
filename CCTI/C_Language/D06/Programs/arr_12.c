#include<stdio.h>

//function declaration
void print_Array(int arr[]);

int main()
{
    int arr[2] = {1,2};

    print_Array(arr);

    return 0;

}

void print_Array(int arr[])
{
    int i;
    
    //sizeof(arr) -> 8 
    //sizeof(arr[0]) ->  4
    
    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    printf("%d\n", arr[i]);
}