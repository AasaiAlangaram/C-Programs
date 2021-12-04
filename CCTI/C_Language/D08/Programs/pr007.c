#include <stdio.h>

// structure decl
struct data
{
    int x;
    int y;
};

int main()
{
    struct data var[2];

    var[0].x = 10;
    var[0].y = 20;
    
    var[1].x = 30;
    var[1].y = 40;

    printf("%p %p %p %p\n", &var[0].x, &var[0].y, &var[1].x, &var[1].y);

    printf("%d %d \n", var[0].x, var[0].y);
    printf("%d %d \n", var[1].x, var[1].y);
    
    printf("%lu", sizeof(var));

    return 0;
}

