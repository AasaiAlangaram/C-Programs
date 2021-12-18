#include <stdio.h>

enum state{ON = 1, OFF = 2};

enum state currentstate = OFF;

enum state fun_findstate()
{
    enum state status = currentstate;
    return status;
}


int main()
{
    enum week{mon = 5, tue , wed, thr, fri , sat, sun};

    enum week day;
    int i;

    //day = mon;

    for(i = mon; i <= sun ; i++)
    printf("%d ", i);

    printf(" \nfunction return value %d", fun_findstate());

    return 0;
}