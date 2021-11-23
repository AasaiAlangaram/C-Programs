// Passing char array as a parameter

#include <stdio.h>

//function declaration 
void print_string(char arr[]);

int main()
{
    //declare a string and assign value 
    char ch_arr[5] = "names";

    // function call
    print_string(ch_arr);

    return 0;
}

// function definition 
void print_string(char arr[])
{
    printf("Input is: %c", arr[3]);
}