#include<stdio.h>
#include<time.h>
int main()
{
    int num,rev=0,sum=0,rem,temp,count=0,temp1;

    clock_t start, end;
    double cpu_time_used;
    start = clock();

    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    temp1=temp;
    while(num!=0)
    {
        num=num/10;
        count++;
    }


    if(count==5)
    {
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            sum+=rem;
            temp=temp/10;
        }
        printf("\nsum of the number is %d\n",sum);
        printf("\nReverse num is %d ",rev);

        if(rev==temp1)
        {
            printf("\nthe given number is palindrome\n");
        }
        else
        {
            printf("\nthe given number is not palindrome\n");
        }

    }
    else
    {

        printf("It is not a 5 digit number");
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("process time for the execution is %f",cpu_time_used );
}
