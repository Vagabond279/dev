#include <stdio.h>

int main()
{

    float a, b, c;
    printf("Enter the 1st number: ");
    scanf("%f", &a);
    printf("Enter the 2nd number: ");
    scanf("%f", &b);
    c = a;
    a = b;
    b = c;
    printf("swaped numbers 1st: %.3f\n", a);
    printf("swapped numbers 2nd: %.3f\n", b);

    return 0;
}
