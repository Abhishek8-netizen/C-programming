#include <stdio.h>


int main()
{
    int i,j,k,n;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        k = 1;
        for(j=1;j<=i;j++)
        {
            printf("%d\t",k);
            if (k==1)
            {
                k = 0;
            }
            else
            {
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
