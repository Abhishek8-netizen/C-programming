#include <stdio.h>

void factorial(int num)
{
    int f = 1;
    for(int i = 1;i<=num;i++)
    {
        f = f * i;

    }
    printf("\nFactorial : %d\n",f);
}

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    factorial(number);

    return 0;
}

