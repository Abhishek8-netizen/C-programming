#include <stdio.h>
int add(int a,int b)
{
    int sum = a + b;
    return sum;
}

int sub(int a,int b)
{
    int dif;
    if(a>b)
    {
        dif = a - b;
        return dif;
    }
    else
    {
        dif = b - a;
        return dif;
    }
}

int mul(int a,int b)
{
    int pro = a * b;
    return pro;
}

float div(int a, int b)
{
    float quo = a / b;
    return quo;
}


int main()
{
    int a,b;
    int choice,result;
    float div_result;

    printf("1 to Add\n");
    printf("2 to Subtract\n");
    printf("3 to Multiply\n");
    printf("4 to Divide\n");
    printf("Enter choice : ");
    scanf("%d",&choice);

    printf("\nEnter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);

    switch(choice)
    {
    case(1):
        result = add(a,b);
        printf("\nResult : %d\n",result);
        break;
    case(2):
        result = sub(a,b);
        printf("\nResult : %d\n",result);
        break;
    case(3):
        result = mul(a,b);
        printf("\nResult : %d\n",result);
        break;
    case(4):
        div_result = div(a,b);
        printf("\nResult : %f\n",div_result);
        break;
    default:
        printf("\nInvalid choice");
    }

    return 0;
}
