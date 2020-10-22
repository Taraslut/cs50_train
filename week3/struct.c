// Draws a pyramid using iteration

#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int age ;
} person;

typedef int mytype;

int main(void)
{
    int n =3; 
    person people[n] ;

    for(int i= 0; i< n; i++){
        people[i].name = get_string("Enter name>");
        printf("Enter %s age>", people[i].name);
        people[i].age = get_int("");
        printf("===============\n");
    }

    
    for(int i=0; i<n; i++){
        printf("Person %s has age %i\n", 
            people[i].name, people[i].age);
    }

}

