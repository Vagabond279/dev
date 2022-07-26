#include<stdio.h>
int main(){
int marks;
printf("Enter your Marks Percentage: \n");
scanf("%d",&marks);
switch (marks)
{
case 90-100:
    printf("Your Grade is A \n");
    break;

default:
printf("this is default\n");
    break;
}
    return 0;
}
