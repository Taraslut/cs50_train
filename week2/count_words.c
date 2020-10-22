#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string str_1 = get_string("Enter some string>");
    printf("Your string =>> %s\n", str_1);

    int len = 0, i = 0;
    while(str_1[i] != '\0'){
        len++;
        i++;
    }
    printf("The lenth is %d\n", len);

}