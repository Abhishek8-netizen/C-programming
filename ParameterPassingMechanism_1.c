#include <stdio.h>


void change(int n)
{
    printf("n = %d\n",n);
    n=20;
    printf("n = %d\n",n);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    change(n);

    printf("n = %d\n",n);

    return 0;
}
