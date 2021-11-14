#include<stdio.h>
#define max_size 100
int main()
{
int n,i,sum=0;
printf("enter the value of n\n");
scanf("%d",&n);
int a[max_size];
printf("enter the array value\n");
for(i=0;i<n;i++)
{
    printf("a[%d]:",i);
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}

printf("sum is %d",sum);
return 0;
}
