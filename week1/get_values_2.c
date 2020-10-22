#include <stdio.h>
#include <cs50.h>

int main(){
    float ff=-1;
    while( !(ff>0 && ff<=100)){
        ff = get_float("Enter float in rage 0-100>");
    }
    printf("%f\n", ff);

}