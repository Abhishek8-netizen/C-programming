#include <stdio.h>
int main()
{
    int a[20][20];
    int sum_forward = 0;
    int sum_backward = 0;
    int row,column,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of columns : ");
    scanf("%d",&column);

    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter the value for a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        sum_forward = sum_forward + a[i][i];
    }
    for(i=0;i<row;i++)
    {
        j = (row-1) - i;
        sum_backward = sum_backward + a[i][j];
    }

    printf("\n\nSum of forward diagonal : %d",sum_forward);
    printf("\nSum of backward diagonal : %d\n",sum_backward);
    if(sum_forward==sum_backward)
    {
        printf("\nThe forward diagonal is equal to the backward diagonal\n");
    }
    else
    {
        printf("\nThe forward diagonal is not equal to the backward diagonal\n");
    }
    return 0;
}
