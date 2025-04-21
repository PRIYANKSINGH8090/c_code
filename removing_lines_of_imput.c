#include <stdio.h>
#include <string.h>
void phaser(char *string)
{
    int index = 0, in = 0, i;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }

        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
        while (string[strlen(string)-1] == ' ')
    {
string[strlen(string)-1]='\0';
    }
}

int main()
{
    char string[] = "<h1>      this is healing        </h1>";
    phaser(string);
    printf("the praser string is~~%s~~", string);
    return 0;
}