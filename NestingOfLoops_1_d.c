#include <stdio.h>

int main()
{
    int i,j,n;
    int k = 1;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",k);
            if(k==0)
            {
                k = 1;
            }
            else
            {
                k = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
