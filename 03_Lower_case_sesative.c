#include<stdio.h>
 
int main (){
    char character;
printf("Enter a character \n");
scanf("%c",&character);
// 97 - 122=a-z

if (character<=122 && character>=97 )
{
    printf("it is lowercase\n");
}
else
{
    printf("it is not lowercase\n");
}



return 0;
}
