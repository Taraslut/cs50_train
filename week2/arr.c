#include <stdio.h>
#include <cs50.h>

int main(){
    int n = get_int("Enter arr dimention>>");
    int k = get_int("Enter row number>>");
    int x[n][k];

    for (int j=0; j<k; j++)
        for(int i= 0; i < n; i++)
            x[i][j] = i*i -9*i +13 + j*j*j - 25*j ;

    for (int j=0; j<k; j++){
        for(int i= 0; i<n; i++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }

    return 0;
}