// structure as input parameter

#include <stdio.h>

// first structure
struct data1
{
    int a;
    int b;
};

struct data1  callbyvalue();
void callbyref(struct data1 *var);

int main()
{
    struct data1 var1;

    printf(" call by value example\n");
    var1 = callbyvalue();
    printf("%d %d\n", var1.a, var1.b);

    printf(" call by value reference\n");
    callbyref(&var1);

    return 0;
}

struct data1 callbyvalue()
{
    struct data1 var;
    var.a = 10;
    var.b = 20;
    printf("%d %d\n", var.a, var.b);

    return var;
}

void callbyref(struct data1 *var)
{
    printf("%d %d", var->a, var->b);
}
