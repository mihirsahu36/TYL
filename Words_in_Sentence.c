#include<stdio.h>
int main()
{
    char str[100];
    int count=0,i;
    printf("Enter the string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]==' ')
    {
        count++;
    }
    }
    printf("The number of words in sentence is %d",count+1);
}
