#include<stdio.h>
// int main(){
 
// int marks[5];
// marks[0]=30;
// marks[1]=20;
// marks[2]=30;
// printf("%d",marks[2]);
// printf("%d",marks[1]);
// printf("%d",marks[0]);

   
//     return 0;
// }



// int main (){
//     int marks[5]={10,20,30,40,50};
// printf("the value of marks[0]is %d\n",marks[0]);
// printf("the value of marks[1]is %d\n",marks[1]);
// printf("the value of marks[3]is %d\n",marks[2]);
// printf("the value of marks[4]is %d\n",marks[3]);
// printf("the value of marks[5]is %d\n",marks[4]);
//     return 0;
// }

int main()
{
int marks[4];
for ( int i = 0; i <=4; i++)
{
printf("enter the value of %d is ",i );
scanf("%d",&marks[i]);
}
for ( int i = 0; i <=4; i++)
{
printf("the value of %d elememt of hte array is %d\n",i,marks[i] );

}

    return 0;
}
