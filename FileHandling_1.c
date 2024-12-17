#include <stdio.h>

int main()
{
    FILE *f;
    int n,i;
    char string[20];

    f = fopen("string.txt","w");

    printf("Enter n : ");
    scanf("%d",&n);
    if(f==NULL)
    {
        printf("Error...file not found");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("Enter a string : ");
            scanf("%s",string);
            fprintf(f,"%s\n",string);
        }
    }
    fclose(f);
    return 0;
}
