#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(){
    string str= get_string("Enter some word>>");
    int line_lenght = strlen(str);
    printf("The line \"%s\" has lenght %d\n", str, line_lenght);

    return 0;
}