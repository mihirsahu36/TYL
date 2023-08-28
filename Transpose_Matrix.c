#include<stdio.h>
int main()
{
    int i,a[5][5],j;
    printf("Enter the elements into matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int trans[i][j];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    printf("The transpose matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          printf("%d\t",trans[i][j]);
        }
    printf("\n");
    }
    return 0;
}
