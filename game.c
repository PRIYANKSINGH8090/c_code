#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comp(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    char name[10];

    int a, b, c = 0, d = 0;

    printf("Enter the name of the player");

    scanf("%s", &name);
    printf("~~~~~~~~~~~Welcome %s~~~~~~~~~~\n", name);
for (int i = 1; i <=3; i++)
 {
        printf("Press\n0:PAPER\n1:SCISSOR\n2:STONE");
        scanf("%d", &a);
        // printf("%d",a);
        printf("%s entered %d\n", name, a);
        b = comp(2);
        printf("Player 2 entered %d\n", b);
        if (a > b)
        {
            c++;
        }
        else if (a==b)
        {
            c++;
            d++;
        }
        
        else
        {
            d++;
        }
}

    if (c > d)
    {
        printf("%s WON\n",name);
        printf("~~~~~~~~~~~Congratulations %s~~~~~~~~~~~",name);
    }
    else if (c==d)
    {
        printf("Match tie");
        printf("Please try again ");
    }
    
    else
    {
        printf("PLAYER 2 WON\n");
            printf("~~~~~~~~~~~%d YOU LOST THE GAME ~~~~~~~~~~~");
    }
    return 0;
}