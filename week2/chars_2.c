#include <cs50.h>
#include <stdio.h>
#include <string.h>
// strlen

int main()
{
    char cc = 'Y';

    printf("%c\n", cc);
    printf("%d\n", cc);

    char cc2 = cc +  13;
    if ( cc >='A' && cc<'Z' && cc2 > 'Z' )
        cc2 -= 26;

    printf("\n\n%c\n", cc2);
    printf("%d\n", cc2);

}
