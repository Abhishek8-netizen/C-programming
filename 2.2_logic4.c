#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\nMaximum number : %d\n",a);
        }
        else
        {
            printf("\nMaximum number : %d\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\nMaximum number : %d\n",b);
        }
        else
        {
            printf("\nMaximum number : %d\n",c);
        }
    }
    return 0;
}
