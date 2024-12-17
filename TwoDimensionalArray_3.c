#include <stdio.h>
int main()
{
    int a[50][50];
    int row,column;
    int i,j;
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

    printf("\n\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTranspose : \n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
