#include <stdio.h>

int sumofdigits(num)
{
    int r;
    int sum = 0;

    while(num>0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int number;
    int sum;

    printf("Enter a number : ");
    scanf("%d",&number);

    sum = sumofdigits(number);

    printf("\nSum of the digits : %d\n",sum);
    return 0;
}
