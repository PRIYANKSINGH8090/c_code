#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav;
    char name[34];
};

int main()
{
    union student s1;
    s1.id = 1;
    s1.marks = 30 ;
    strcpy(s1.name, "harry");   
    s1.fav = 'a';
// yaha joniche hoga wo preference me hoga baki sab couurupt ho jaye mujhse koi matlab nahi hoga
 
 
    printf("the id is %d \n",s1.id);
    printf("the marksis %d \n",s1.marks);
    printf("the fav is %c \n",s1.fav);
    printf("the name is %s \n",s1.name);
    return 0;
}