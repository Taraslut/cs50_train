#include <stdio.h>
#include <cs50.h>

int main(){
    float ff;
    while(1){
        ff = get_float("Enter float in rage 0-100>");
        if (ff>0 && ff<=100) break;
    }
    printf("%f\n", ff);

}