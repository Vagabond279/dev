#include<stdio.h>
int main (){
    int physics,math,chemistry;
    float total;
printf("Enter the percentage of physics\n");
scanf("%d",&physics);

printf("Enter the percentage of chemistry\n");
scanf("%d",&chemistry);

printf("Enter the percentage of math\n");
scanf("%d",&math);
total=physics+chemistry+math/3;
if (total<44 || chemistry<33||physics<33 || math<33)
{
   printf("Your total percentage is %.2f fail\n",total);
}
else
{
    printf("Your total percentage is %.2f pass\n",total);
}


return 0;
}
