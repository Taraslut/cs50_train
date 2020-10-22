#include <cs50.h>
#include <stdio.h>
#include <string.h>
// strlen

int main()
{
    string str_1 = get_string("Enter some string>");
    printf("Your string =>> %s\n", str_1);

    //

    int words = 1;
    for(int i=0; i<strlen(str_1); i++){
        if ( str_1[i]==' ') //!!! single char=>> 'a';
            words++;                //!!! string =>>>  "asd"
    }
    printf("We\'ve got %d words\n", words);

    int sentens = 0;
    for(int i=0; i<strlen(str_1); i++){
        if (str_1[i]== '.' || str_1[i] == '?' || str_1[i]=='!')
            sentens++;
    }
    printf("We\'ve got %d sentences\n", sentens);

}