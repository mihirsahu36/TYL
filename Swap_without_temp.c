#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two digit: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping values of a and b are %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping values of a and b are %d and %d",a,b);
    return 0;
}
