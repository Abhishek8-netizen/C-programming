#include <stdio.h>

int main()
{
    int i,j,n;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
