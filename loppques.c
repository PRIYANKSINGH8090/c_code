#include <stdio.h>




int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
for ( a; a<=9; a++)
{
 if ( a==1){  
printf ("one\n");
}
else if (a==2)
{
printf("two\n");
}
else if (a==3)
{
printf("three\n");
}else if (a==4)
{
printf("four\n");
}else if (a==5)
{
printf("five\n");
}else if (a==6)
{
printf("six\n");
}else if (a==7)
{
printf("seven\n");
}else  
{
printf("eight\n");
}
}
if (a>9)
{
if (a%2==0)
{
    printf("even");
}
else{
    printf("odd");
}
}
 scanf("%d",&b);
for ( b; b<9; b++)
{
 if ( b==1){  
printf ("one\n");
}
else if (b==2)
{
printf("two\n");
}
else if (b==3)
{
printf("three\n");
}else if (b==4)
{
printf("four\n");
}else if (b==5)
{
printf("five\n");
}else if (b==6)
{
printf("six\n");
}else if (b==7)
{
printf("seven\n");
}else  
{
printf("eight\n");
}
}
if (b>9)
{
if (b%2==0)
{
    printf("even\n");
}
else{
    printf("odd\n");
}
}   
    return 0;
}