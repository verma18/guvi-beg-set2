#include<stdio.h>
#include<math.h>
void main(){
int n,k,j,count=0,sum=0;
scanf("%d",&n);
k=n;
while(k!=0){
    k=k/10;
    count++;

}
k=n;
while(n!=0){
    j=n%10;

    printf("\n%d",j);
    sum=sum+pow(j,count);
    printf("\n%d",sum);
    n=n/10;
}
if(k==sum)
    printf("yes");
else
    printf("no");
}
