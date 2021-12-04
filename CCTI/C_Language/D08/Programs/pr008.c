#include <stdio.h>

// first structure
struct data1
{
    int a;
    int b;
};

// second structure
struct data
{
    int x;
    int y;
    // first structure variable decl
    struct data1 var1;
};

int main()
{
    struct data var;

    var.x = 10;
    var.y = 20;
    
    var.var1.a = 30;
    var.var1.b = 40;

    printf("%d %d %d %d\n", var.x , var.y, var.var1.a, var.var1.b);

    printf("%p %p %p %p", &var.x , &var.y, &var.var1.a, &var.var1.b);

    return 0;

}
