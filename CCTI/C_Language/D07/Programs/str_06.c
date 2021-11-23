// program to concatenate the given strings

#include <stdio.h>
#include <string.h>

int main()
{
    //declare a string
    char ch_arr1[20] = "Programming ";
    char ch_arr2[20] = "in c language";

    printf("%s\n  %s \n", ch_arr1, ch_arr2);
    strcat(ch_arr1, ch_arr2);

    printf("%s %s ", ch_arr1, ch_arr2);

    return 0;

}
