// Draws a pyramid using iteration

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int arr[] = {2,3,0, -1};
    int c;
    do{
        c = 0;
        for (int i=0; i <3 ; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1] = temp;
                c++;
            }
        };
        // output
        for(int i=0; i< 4; i++){
            printf("%i, ", arr[i]);
        };
        printf("\n");

    } while (c);

}

