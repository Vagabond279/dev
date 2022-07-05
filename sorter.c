// This code will show the highest numbers from typed numbers

#include<stdio.h>

int main(){
int num1,num2,num3;
printf("Enter the First Number: ");
scanf("%d",&num1);
printf("Enter the Second Number: ");
scanf("%d",&num2);
printf("Enter the Third Number: ");
scanf("%d",&num3);
if (num1>num2&&num1>num3)
printf("The Larger Number is: %d\n",num1);
if (num2>num1 && num2>num3)
printf("The Larger Number is: %d\n",num2);
if (num3>num1&&num3>num2)
printf("The Larger Number is: %d\n",num3);


}
