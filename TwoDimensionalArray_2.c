#include <stdio.h>
int main()
{
    int a[50][50],b[50][50],s[50][50];
    int sum = 0;
    int row1,column1,row2,column2,i,j,k;

    printf("Enter the number of rows for the first matrix : ");
    scanf("%d",&row1);
    printf("Enter the number of columns for the first matrix : ");
    scanf("%d",&column1);

    printf("Enter the number of rows for the second matrix : ");
    scanf("%d",&row2);
    printf("Enter the number of columns for the second matrix : ");
    scanf("%d",&column2);

    printf("\nFirst matrix :\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("Enter the value for a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nSecond matrix :\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("Enter the value for b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
            for(k=0;k<column1;k++)
            {
                s[i][j] = s[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct :\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
