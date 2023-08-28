#include<stdio.h>
int main()
{
    int rev=0,rem,c,n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
    rem=n%10;
    rev=(rem*rem*rem)+rev;
    n=n/10;
    }
    if(c==rev)
    {
        printf("Its an armstrong number");
    }
    else
    {
        printf("Its not an armstrong number");
    }
    return 0;
}
