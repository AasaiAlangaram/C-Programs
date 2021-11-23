#include <stdio.h>

int main()
{
    //declare a string
    char ch_arr[5] = "Names";

    //display string
    printf("%s\n",ch_arr);

    printf("address of first character: %p\n", &ch_arr[0]);
    printf("address of sec character: %p\n", &ch_arr[1]);
    printf("address of third character: %p\n", &ch_arr[2]);
    printf("address of fourth character: %p\n", &ch_arr[3]);
    printf("address of last character: %p\n", &ch_arr[4]);
    
    return 0;
}