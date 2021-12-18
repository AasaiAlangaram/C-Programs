#include <stdio.h>

union list
{
    char a;
    int b;
};

int main()
{
    union list var;

    union list *ptr;
    var.b = 97;

    ptr = &var; //var is union variable

    printf(" using dot operator: %c %d\n", var.a, var.b);

    printf(" using pointer access operator: %c %d", ptr->a, ptr->b);
    return 0;
}