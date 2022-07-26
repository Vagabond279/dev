#include<stdio.h>
 
int main (){
float tax=0,income;
printf("Enter your  total anual income \n");
scanf("%f",&income);

if (income>=250000 && income<=500000)
{
    tax=tax+0.05*income;
    printf("your total tax on your given anual income is %.3f \n ",tax);
}
else if(income>=500000 && income<=1000000){
    tax=tax+0.20*income;
    printf("your total tax on your given anual income is %.3f \n ",tax);
}
else if (income>=1000000)
{
    tax=tax+0.30*income;
    printf("your total tax on your given anual income is %.3f \n ",tax);
}
else
{
    printf("You are in tax free Zone \n");
}


// printf("your total tax on your given anual income is %.3f \n ",tax);
return 0;
}
