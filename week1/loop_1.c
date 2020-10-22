#include <stdio.h>
#include <cs50.h>


int main(void){

    int l = get_int("Enter your lenght>>");
    for(int var=l; var>0; var--){
        for(int item=0; item<var ; ){
            printf("#");
            item++;
        }
        printf("\n"); 
    }
    

    return 0 ;
}
