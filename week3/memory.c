// http://valgrind.org/docs/manual/quick-start.html#quick-start.prepare

#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>

int *mem = 0 ;
int num = 10;

void f(void)
{
    // int *x = malloc(num * sizeof(int)); // x =0
    int *x = malloc(40); // x =0

    x[10] = 0;
    mem = x;
}


int main(void)
{
    f();

    for(int i = 0; i<num; i++)
        {   printf("Enter num");
            scanf("%i", &(mem[i]));

        }

    for(int i = 0; i<num; i++)
        { printf("%i, ", mem[i]);}
    printf("\n");

    printf("%p\n", mem);
    free(mem);
    printf("Free memory\n");
    return 0;
}
