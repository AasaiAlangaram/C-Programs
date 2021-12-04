// structure as input parameter

#include <stdio.h>

// first structure
struct data1
{
    int a;
    int b;
};

void callbyvalue(struct data1 var);
void callbyref(struct data1 *var);

int main()
{
    struct data1 var1 = {10,20};
    printf(" call by value example\n");
    callbyvalue(var1);
    printf(" call by value reference\n");
    callbyref(&var1);

    return 0;
}

void callbyvalue(struct data1 var)
{
    printf("%d %d\n", var.a, var.b);
}

void callbyref(struct data1 *var)
{
    printf("%d %d", var->a, var->b);
}
