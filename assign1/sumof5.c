#include<stdio.h>
int main()
{
int num,rem,temp,count=0,temp1,i=0,cnt=0,n,temp2;
int a[100];
int dig,sum=0;

printf("Enter the number\n");
scanf("%d",&num);

temp=temp1=temp2=num;

while(temp1!=0)
{
    temp1/=10;
    ++count;
}

if(count!=5)
{
printf("It is not a 5 digit number");
}

else
{   while(temp2>0 || sum>9)
    {

        if(temp2==0)
        {
            temp2=sum;
            sum=0;

        }
        sum+=temp2%10;
        temp2/=10;
    }
    printf("single digit sum is %d\n",sum);
    printf("Enter the digit\n");
    scanf("%d",&dig);

 while(temp!=0)
 {
     rem=temp%10;
     if(rem==dig)
        cnt++;
     temp=temp/10;
 }
printf("number of occurrence of a digit is %d ",cnt);
}
return 0;
}

