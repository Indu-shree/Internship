#include<stdio.h>
void main()
{
    int num,fact=1,i;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("factorial is not exists for negative number");
    }

    else
    {
        for(i=1;i<=num;i++)
            fact=fact*i;
        printf("factorial of  %d is %d",num,fact);
    }

    //return(0);
}

