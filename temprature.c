//This code will convert Celsius to fahrenheit temperature.
#include <stdio.h>

int main()
{

    float C;
    float constant1 = 1.8;
    float constant2 = 32;
    int exit;

    printf("insert value in Celsius \n");
    scanf("%f", &C);
    printf("temperature in fahrenheit= %f F \n", C * constant1 + constant2);
    scanf("%d",&exit);

    return 0;
}
