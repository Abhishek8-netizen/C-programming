#include <stdio.h>
int prime(int num)
{
    int i;
    int flag = 0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag = 1;
            return 0;
            break;
        }
    }
    if(flag == 0)
    {
        return 1;
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    int result = prime(number);

    printf("%d",result);
    return 0;
}
