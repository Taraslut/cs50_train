#include <stdio.h>


int main(void){
    int x = 10;

    int divide = x /3;
    int mod = x% 3;
    printf("%d / 3 = %d\n",x, divide);
    printf("%d %% 3 = %d\n",x, mod);

}