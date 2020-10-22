#include <stdio.h>
#include <cs50.h>


int main(void){

    int age = get_int("Enter your age>>");
    //age = age + 10 ;
    age += 10;
    printf("Your age in 10 years will be %d\n", age);
    return 0 ;
}
