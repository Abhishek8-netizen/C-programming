#include <stdio.h>

int n_to_one(int n)
{
    if(n==1)
    {
        printf("%d\t",n);
    }
    else
    {
        printf("%d\t",n);
        return n_to_one(n-1);
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("\n");

    n_to_one(number);

    return 0;
}
