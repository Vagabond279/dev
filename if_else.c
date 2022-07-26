//this program will tellls you that you can get a lisence or not//
#include<stdio.h>
int main(){
int age;
printf("Enter your age \n");
scanf("%d",&age );
if (age<=90 && age>=19)
{
    printf("you can get lisence for car driving \n");
}
else
{
    printf("you cant get a lisence for car driving \n");
}


return 0;
}
