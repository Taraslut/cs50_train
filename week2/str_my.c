#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int num, string val[]){
    
    for(int i =0; i< num; i++){
        for(int j=0; j<strlen(val[i]); j++)
            printf("%c", val[i][j]);
        printf("\n");
    }
}