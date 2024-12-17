#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char a[20];
    int len;
    int sum = 0;

    fp = fopen("name.txt","r");

    while(!feof(fp))
    {
        fscanf(fp,"%s",a);
        len = strlen(a);
        sum = sum + len;
    }
    fclose(fp);

    printf("\nNumber of characters in the file : %d\n",sum);

    return 0;
}
