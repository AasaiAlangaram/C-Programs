// Union 

#include <stdio.h>

union list
{
    char a;
    int b;
};

int main()
{
    union list var;
    var.b = 97;

    printf("%d %c\n", var.b, var.a);

    printf("size of union: %lu",sizeof(var));
    return 0;
}

/*

union union_name
{
    datatype mem_name;
    datatype mem_name2;
};

*/