#include<stdio.h>
void main()
{
    int n,i,n2=0;
    scanf("%d",&n);
    i=n;
    while(i>0)
    {n2=n2*10+(i%10);
    i=i/10;

    }
    if(n==n2)
        printf("yes");
    else
        printf("no");

}
