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

    if(a>b && a>c)
    {
        printf("\nMaximum number : %d",a);
    }
    else if(b>a && b>c)
    {
        printf("\nMaximum number : %d",b);
    }
    else
    {
        printf("\nMaximum number : %d\n",c);
    }
    return 0;
}
