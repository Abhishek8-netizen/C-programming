#include <stdio.h>
void readArray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the value for a[%d] : ",i);
        scanf("%d",&a[i]);
    }
}

void dispArray(int a[],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int main()
{
    int a[20][20];
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    readArray(a,n);
    dispArray(a,n);
    return 0;

}
