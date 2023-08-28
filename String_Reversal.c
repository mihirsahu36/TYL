#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char str[40];
    printf("Enter the string: \n");
    gets(str);
    n=strlen(str);
    printf("The reversed String is \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
