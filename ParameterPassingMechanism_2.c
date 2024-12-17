#include <stdio.h>

int swap(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a,b;

    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);


    printf("Before swapping :\na = %d\t\tb = %d\n",a,b);

    swap(&a,&b);
    printf("\nAfter swapping :\na = %d\t\tb = %d",a,b);

    return 0;
}
