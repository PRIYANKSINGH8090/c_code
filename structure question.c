// drivers detail
#include <stdio.h>
#include <string.h>
struct agence
{
    char name[50];
    int lic_no;
    char route[50];
    int kms;
};
int main(){
    int n;

struct agence s1,s2,s3;
printf("enter the name of driver\n");
scanf("%s",s1.name);
printf("enter the licence number of driver\n");

scanf("%d",&s1.lic_no);
printf("enter the kms travelled in our agence by the driver\n");

scanf("%d",&s1.kms);
printf("enter the route of driver\n");
scanf("%s",s1.route);
printf("the data of the driver is\n");

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

printf("enter the name of 2nd driver\n");
scanf("%s",s2.name);
printf("enter the licence number of driver\n");

scanf("%d",&s2.lic_no);
printf("enter the kms travelled in our agence by the driver\n");

scanf("%d",&s2.kms);
printf("enter the route of driver\n");
scanf("%s",s2.route);


// %%%%%%%%%%%%%%%%%%


printf("enter the name 3rd  of driver\n");
scanf("%s",s3.name);
printf("enter the licence number of driver\n");

scanf("%d",&s3.lic_no);
printf("enter the kms travelled in our agence by the driver\n");

scanf("%d",&s3.kms);
printf("enter the route of driver\n");
scanf("%s",s3.route);
printf("the data of the driver is\n");


printf("the data of the 1st driver is\n");

printf("the name of the driver is %s\n",s1.name);
printf("the kms of the driver is %d\n",s1.kms);
printf("the licence number of the driver is %d\n",s1.lic_no);
printf("the route of the driver is %s\n",s1.route);

printf("the data of the 2nd driver is\n");

printf("the name of the driver is %s\n",s2.name);
printf("the kms of the driver is %d\n",s2.kms);
printf("the licence number of the driver is %d\n",s2.lic_no);
printf("the route of the driver is %s\n",s2.route);



printf("the data of the 3rd driver is\n");

printf("the name of the driver is %s\n",s3.name);
printf("the kms of the driver is %d\n",s3.kms);
printf("the licence number of the driver is %d\n",s3.lic_no);
printf("the route of the driver is %s\n",s3.route);
    return 0;
}