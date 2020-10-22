#include <stdio.h>
#include <cs50.h>

int main(void){
    int age = get_int("Enter your age>>");

    if (age >= 40 ){
        printf("Good evening\n");
    }
    else 
        if (age >= 15){
            printf("Good day\n");
        }
    
        else{
            printf("Hi\n");
        }

}