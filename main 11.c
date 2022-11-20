#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Sakura";
    people[0].number = "12345678";

    people[1].name = "Reina";
    people[1].number = "58367580";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Sakura") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
