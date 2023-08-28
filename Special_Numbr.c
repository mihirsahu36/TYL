#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,sum=0,rem;
    int m=n;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+factorial(rem);
        n=n/10;
    }
    if(sum==m){
        printf("It is a special number");
    }
    else{
        printf("It is not a special number");
    }
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
