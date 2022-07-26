#include<stdio.h>
 
int main (){
    printf("\n\n\tWelcome to the VAGABOND's - Basic Arithmatic Calculator\n\n");
  
    float num1,num2,end;
char operator;
printf("Enter your Arithmatic operator:\n");
scanf("%c",&operator);
printf("Enter your Number 1:\n");
scanf("%f",&num1);
printf("Enter you Number 2:\n");
scanf("%f",&num2);

switch (operator)
{
case '+':
   printf("Your Answer is:%.3f\n\n",num1+num2);
    break;
    case '-':
   printf("Your Answer is:%.3f\n\n",num1-num2);

    break;
    case '*':
   printf("Your Answer is:%.3f\n\n",num1*num2);

    break;
    case '/':
   printf("Your Answer is:%.3f\n\n",num1/num2);

    break;

default:
printf("Invalid entries\n");
    break;
}
printf("Enter anything to exit:\n");
scanf("%f",&end);


}
