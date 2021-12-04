#include<stdio.h>

struct point1
{
    int x1;
    int y1;
};

struct Point
{
    int x, y;
    struct point1 arr1; 
};

int main()
{
    // Create an array of structures
    struct Point arr;

    // Access array members
    arr.x = 10;
    arr.y = 20;

    printf("%d %d", arr.x, arr.y);
    return 0;
}