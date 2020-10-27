// Draws a pyramid using iteration

#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int voites ;
    bool sex; // 1- MAN 0 -woman
    int region; //1 -fr 2-Lviv
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
    paper max_person;
    max_person.voites = 0;
    max_person.region = 2;

    for(int i= 0; i< n; i++){
        if (people[i].region ==2 && people[i].voites > max_person.voites ){
          n_person= i;
          max_person.voites =  people[i].voites;
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

