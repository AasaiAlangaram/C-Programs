#include <stdio.h>

struct st_test
{
    int x;
    int y;
};

union un_test
{
    int x;
    int y;
};

int main()
{
    struct st_test t1 = {1,2};

    union un_test t2;

    t2.x = 255; //t.y also gets value 255
    printf("%d %d \n", t2.x, t2.y);

    t2.y = 100;
    printf("%d %d \n", t2.x, t2.y);

    printf("%d %d \n", t1.x, t1.y);

    return 0;

}