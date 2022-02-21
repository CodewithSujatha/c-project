#include <stdio.h>

void biggest2()
{
    int num1, num2;

    printf("Enter two integers :\n");
    scanf("\n%d%d\n", &num1, &num2);

    if (num1 > num2)
    {
        printf("Largest number is %d.\n", num1);
    }
    else
    {
        printf("Largest number is %d \n", num2);
    }

   //return 0;
}
