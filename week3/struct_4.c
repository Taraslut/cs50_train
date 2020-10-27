// Draws a pyramid using iteration

#include <cs50.h>
#include <stdio.h>
#include "str_deal.h"


int main(void)
{
    pixel a = {100,100,100};

    printf("a ==>> %i, %i, %i\n", a.red, a.green, a.blue);

    pixel z = {200,200,200};
    printf("z ==>> %i, %i, %i\n", z.red, z.green, z.blue);
    pixel b = add(a, z);
    printf("b ==>> %i, %i, %i\n", b.red, b.green, b.blue);

    if (cmp(a, b))
    {
        printf("Same\n");
    }
    else{
        printf("Differ\n");
    }
}


