#include <stdio.h>

int main()
{
    char f1[20], f2[20], a[20];
    FILE *fp1,*fp2;

    printf("Enter source file : ");
    scanf("%s",f1);
    printf("Enter destination file : ");
    scanf("%s",f2);

    fp1 = fopen(f1,"r");
    fp2 = fopen(f2,"w");

    while(!feof(fp1))
    {
        fscanf(fp1,"%s",a);
        fprintf(fp2,"%s",a);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}
