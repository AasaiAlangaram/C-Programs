#include <stdio.h>

struct{
    int a;
}st_Var = {11}, st_var2 = {22};

struct tagname{
    int a;
}st_obj1,st_obj2;

int main()
{
    st_obj1.a = 566;
    st_var2.a = 222;
    printf("%d %d",st_var2.a,st_obj1.a);

    return 0;
}
