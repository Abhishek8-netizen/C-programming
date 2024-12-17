#include <stdio.h>

int one_to_n(int a,int n)
{
    if(a==n)
    {
        printf("%d\t",a);
    }
    else
    {
        printf("%d\t",a);
        return one_to_n(a+1,n);
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("\n");

    one_to_n(1,number);

    return 0;
}
