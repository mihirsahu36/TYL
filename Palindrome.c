#include <stdio.h>
int main(){
    int rem, rev=0, n;
    int num=n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==n){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
