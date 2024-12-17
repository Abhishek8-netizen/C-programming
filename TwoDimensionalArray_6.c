#include <stdio.h>
int main()
{
    int a[20][20];
    int row,column,i,j;
    int sum_upper = 0;
    int sum_lower = 0;
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
        for(j=i;j<column;j++)
        {
            sum_upper = sum_upper + a[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<i+1;j++)
        {
            sum_lower = sum_lower + a[i][j];
        }
    }
    printf("\nUpper triangular matrix : %d",sum_upper);
    printf("\nLower triangular matrix : %d\n",sum_lower);
    if(sum_upper==sum_lower)
    {
        printf("\nThe upper triangular matrix is equal to the lower triangular matrix\n");
    }
    else
    {
        printf("\nThe upper triangular matrix is not equal to the lower triangular matrix\n");
    }
    return 0;
}
