#include<stdio.h>
int factorial(int a);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d factorial is %d",n,factorial(n));
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
