#include <stdio.h>

int main()
{
    FILE *f;
    char a[20];

    f = fopen("name.txt","r");

    while(!feof(f))
    {
        fscanf(f,"%s",a);
        printf("%s\n",a);
    }
    fclose(f);
    return 0;
}
