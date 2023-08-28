#include<stdio.h>
#include<conio.h>
void main(){
    int n,sum=0,rem;
    int m=n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        rem=n%i;
        if(rem==0){
            sum=sum+i;
        }
    }
    if(m==sum){
        printf("It is a perfect number");
    }
    else{
        printf("It is not a perfect number");
    }
    getch();
}
