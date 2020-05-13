#include<stdio.h>

/*
(struct name*)0 gives you a struct pointer.

((struct name*)0)->member gives you the member of the struct where the pointer points to.

Adding & gives you the address of that member, and lastly
*/
struct name
{
    int name;
    char name1;
    short int name2;
};

int main()
{
    printf("Third member Offset: %d\n",&((struct name *)0)->name2);
    
    printf("Second member Offset: %d\n",&((struct name *)0)->name1);
    
    printf("First member Offset: %d\n",&((struct name *)0)->name);
    
    return 0;
}