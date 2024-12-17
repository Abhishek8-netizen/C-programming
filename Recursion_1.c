#include <stdio.h>

int sum_of_n(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum_of_n(n-1);
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    int sum = sum_of_n(number);

    printf("\nSum of numbers from 1 to %d : %d\n",number,sum);
    return 0;
}
