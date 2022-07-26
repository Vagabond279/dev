#include <stdio.h>
int main()
{
    int marks ,end;
    printf("Enter your Marks Percentage \n");
    scanf("%d", &marks);

    if (marks>= 90 && marks<=100)
    {
        printf("Your Grade is  'A' \n ");}
        else if (marks >= 80 && marks<=90)
        {
            printf("Your Grade is  'B'\n ");
        }
        else if (marks >= 70 && marks<= 80)
        {
            printf("Your Grade is  'C'\n ");
        }
        else if (marks >= 60 && marks<=70)
        {
            printf("Your Grade is  'D'\n ");
        }
        else if (marks >= 50 && marks<=60)
        {
            printf("Your Grade is  'E'\n ");
        }
        else
        {
            printf("Your Grade is 'F' \n");
        }
        
    printf("Type '0' to end program\n");
    scanf("%d" ,&end);
    return 0;
}
