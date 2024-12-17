#include <stdio.h>
#include <malloc.h>

int main()
{
    int n,i,*a;

    printf("Enter n : ");
    scanf("%d",&n);

    a = (int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Enter an element : ");
        scanf("%d",a+i);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    free(a);
    return 0;
}
