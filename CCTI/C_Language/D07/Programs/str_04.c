// program to print the length of given string

#include <stdio.h>
#include <string.h>

int main()
{
    //declare a string
    char ch_arr[20] = "Programming";

    //display string
    printf("%s\n",ch_arr);

    printf("Length of string ch_arr: %d", strlen(ch_arr));
    
    return 0;
}