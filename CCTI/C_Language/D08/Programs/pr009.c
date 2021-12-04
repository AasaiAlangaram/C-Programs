#include <stdio.h>

struct address
{
    char city[50];
    int pin;
    char phone[14];
};

struct emp
{
    char name[20];
    struct address add;
};

int main()
{
    struct emp var;

    //printf(" enter the employee info: \n");
    //scanf("%s %s %d %s", &var.name, &var.add.city, &var.add.pin, &var.add.phone );

    //printf("Following information provided by employee\n");
    //printf(" %s %s %d %s\n", var.name, var.add.city, var.add.pin, var.add.phone);

    printf("size of : %llu ", sizeof(var));

    return 0;
}
