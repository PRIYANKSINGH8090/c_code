#include <stdio.h>
#include <string.h>

int main()
{
struct student{
    int id;
    float marks;
    char name[53];
};
struct student sunil ,pratiksha,sangita;
sunil.id=01;
sangita.id=02;
pratiksha.id=03;
 sunil.marks=580;
sangita.marks=581;
pratiksha.marks=590;
printf("sunil got %d ",sunil.id);
printf("\n");
strcpy(sunil.name,"priyank");

printf("sunil name is  %s ",sunil.name);
    return 0;
}