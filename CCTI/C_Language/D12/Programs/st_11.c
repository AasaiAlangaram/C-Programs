//bit field

#include <stdio.h>

// sensor output range : 0 - 1023

struct st_test
{
    unsigned int a:10;
}var;

int main()
{
    var.a = 1023;

    printf("size of structure %ld value %d", sizeof(var), var.a);

    return 0;
}