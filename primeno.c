#include<stdio.h>
void main()
{
    int n,m,j,i;
    scanf("%d %d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        if(i==2)
            printf("2 ");
        else{
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                    break;

            }
            if(j==i)
                printf("%d ",i);

        }
    }
}
