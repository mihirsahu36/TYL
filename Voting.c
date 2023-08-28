#include<stdio.h>
int main()
{
    int n;
    printf("Enter total number of ballot \n");
    scanf("%d",&n);
    int votes[5];
    votes[0]=0;
    votes[1]=0;
    votes[2]=0;
    votes[3]=0;
    votes[4]=0;
    int i,x,y=0,j;
    for(int i=1;i=n;i++);
    {
        printf("Enter number on %d ballot \n",i);
        scanf("%d",&x);
        if(x==1)
        {
            votes[0]++;
        }
        else if(x==2)
        {
            votes[1]++;
        }
        else if(x==3)
        {
            votes[2]++;
        }
        else if(x==4)
        {
            votes[3]++;
        }
        else if(x==5)
        {
            votes[4]++;
        }
        else
        {
            y++;
        }
    }
    for(int j=1;j<=n;j++)
    {
        printf("Votes received by candidates %d is %d\n",j,votes[j-1]);
    }
    printf("number of spoilt votes are %d",y);
    return 0;
}
