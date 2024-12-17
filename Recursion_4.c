#include <stdio.h>

int sum_of_digits(int s,int n)
{
    if(n / 10 == 0)
    {
        s = s + n;
        return s;
    }
    else
    {
        s = s + n%10;
        return sum_of_digits(s,n/10);
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    int sum = sum_of_digits(0,number);

    printf("\nSum of the digits : %d\n",sum);

    return 0;
}
