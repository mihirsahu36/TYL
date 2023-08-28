#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int num, sq, a, last;
    int n =0;
 
    printf("Enter a number \n");
    scanf("%d",&num);
 
    sq = num*num;
    a = num;
 
    while(a>0){
        n++;
        a = a/10;
    }
    int den = floor(pow(10,n));
    last = sq % den;
 
    if(last == num)
        printf("Automorphic number \n");
    else
        printf("Not Automorphic \n");
 
    return 0;
}
