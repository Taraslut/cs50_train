#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){
 string my_str = get_string("Enter a string>>");

 for(int i=0; i < strlen(my_str); i++)
    printf("%c", my_str[i]);
printf("\n");
}