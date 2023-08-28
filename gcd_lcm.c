#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int a,b,hcf;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    hcf=gcd(a,b);
    printf("GCD=%d and LCM=%d",hcf,(a*b)/hcf);
}
int gcd(int a, int b)
{
    int rem=a%b;
    if(rem==0)
    {
        return b;
    }
    else
    {
        return (gcd(b,rem));
    }

}
