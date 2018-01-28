#include<stdio.h>
#include<math.h>
void main()
{

    int n,i,j,count=0,sum=0,k,m;
    scanf("%d %d",&n,&m);
    for(i=n+1;i<m;i++)
    {k=i;
        while(k!=0)
        {
            count=count+1;
            k=k/10;
        }
        k=i;
        while(k!=0)
        {
            sum=sum+pow(k%10,count);
            k=k/10;

        }
        if(i==sum)
        {
            printf("%d ",i);

        }
    }

    }
