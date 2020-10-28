// Gets an int from user using scanf

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(4) ;
    printf("x: ");
    // printf("%i", __line__);
    scanf("%i", x);
    printf("x: %i\n", *x);
    free(x);
}
