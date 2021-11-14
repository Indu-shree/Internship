#include<stdio.h>
int factorial(n)
{

    if(n!=0)
        return (n*factorial(n-1));
    else
        return 1;
}


void main()
{
    int num,fact=0;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>=0)
    {
        fact=factorial(num);
    printf("factorial of  %d is %d",num,fact);

    }
    else
        printf("factorial for negative number is not exists");

    //return(0);
}

