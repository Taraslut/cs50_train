// Draws a pyramid using iteration

#include <cs50.h>
#include <stdio.h>

typedef struct
{
    char r;
} paper;

typedef int mytype;

int main(void)
{
    int n = 4;
    paper people[n] ;

    for(int i= 0; i< n; i++){
        people[i].name = get_string("Enter name>");
        printf("Enter %s voites>", people[i].name);
        people[i].voites = get_int("");
        printf("Enter %s person sex>", people[i].name);
        people[i].sex = get_int("");
        printf("Enter %s person region>", people[i].name);
        people[i].region = get_int("");
        printf("===============\n");
    }


    // find person in lviv with max voites
    int n_person = -1;
    int max_voites = 0;

    for(int i= 0; i< n; i++){
        if (people[i].region ==2 && people[i].voites > max_voites ){
          n_person = i;
          max_voites =  people[i].voites;
        }
    }

    // output that person
    if (n_person == -1){
        printf("There is no person from Lviv region\n");
    }
    else {
        printf("%s %i-voites, %i-region \n", people[n_person].name, people[n_person].voites, people[n_person].region);
    }


}

