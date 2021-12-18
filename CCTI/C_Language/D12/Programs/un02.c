#include <stdio.h>

union emp
{
    float sal;
    int empno;
};

int main()
{
    union emp var;

    var.sal = 2300.54;

    // var.sal will no longer hold 2300.54
    var.empno = 150;

    printf(" %f %d", var.sal, var.empno);
    return 0;
}