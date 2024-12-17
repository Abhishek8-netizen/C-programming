#include <stdio.h>
#include <malloc.h>

int main()
{
    int n,nnew,i,*a;

    printf("Enter n : ");
    scanf("%d",&n);

    a = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d",a+i);
    }

    printf("\nEnter new value for n : ");
    scanf("%d",&nnew);

    a = (int*)realloc(a,nnew*sizeof(int));

    for(i=n;i<nnew;i++)
    {
        printf("Enter the element : ");
        scanf("%d",a+i);
    }

    for(i=0;i<nnew;i++)
    {
        printf("%d\t",*(a+i));
    }
    free(a);
    return 0;
}
