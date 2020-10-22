#include <stdio.h>
#include <cs50.h>

void foo(int x ){
     printf("go ==> %d\n",x);
}


int main(void){
    int i = 0;
    while(i++<3){

        if (i == 2)
            //break;
            continue;
        foo(i);
    }


}