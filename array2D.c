#include <stdio.h>
int main(){
    int marks[2][4] = {{10, 20, 30, 40},{3, 2, 3,5}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("the value of %d,%d elememt of hte array is %d\n", i,j, marks[i][j]);
        }
    }
    return 0;
}