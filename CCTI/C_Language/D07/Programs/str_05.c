// program to compare the given strings

#include <stdio.h>
#include <string.h>

int main()
{
    //declare a string
    char ch_arr1[20] = "sweet";
    char ch_arr2[20] = "sweat";

    //display string
    printf("%s %s\n",ch_arr1, ch_arr2);

    if(0 == strcmp(ch_arr1, ch_arr2))
    {
        printf("Both are equal");
    }
    else if(1 == strcmp(ch_arr1, ch_arr2))
    {
        printf(" Not equal: %d string1 has less characters than string2", strcmp(ch_arr1, ch_arr2));
    }
    else
    {
        printf(" Not equal: %d string1 has greater characters than string2",  strcmp(ch_arr1, ch_arr2));
    }
    
    return 0;
}