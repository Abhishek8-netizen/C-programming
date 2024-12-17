#include <stdio.h>

void forward(int num)
{
    for(int i=1;i<=num;i++)
    {
        printf("%d\t",i);
    }
}

void backward(int num)
{
    for(int i=num;i>=1;i--)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int number;
    printf("Enter a positive number : ");
    scanf("%d",&number);

    printf("1 to %d : \n",number);
    forward(number);
    printf("\n");
    printf("\n%d to 1 : \n",number);
    backward(number);
    printf("\n");

    return 0;
}
