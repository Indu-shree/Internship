#include<stdio.h>
int main()
{
    int n=3,a[n],i;
    printf("enter a 3 number\n");
    for(i=0; i<3; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
        if(a[i]>=1 && a[i]<50)
            continue;
        else
            printf("number is not in the range of 1 to 50");
    }

//comparing
    int b[8];
    printf("Enter the array values of B\n");
    for(i=0; i<8; i++)
    {
        printf("b[%d]:",i);
        scanf("%d",&b[i]);

    }
    int count=0,j;
    for(i=0; i<3; i++)
    {

        for(j=0; j<8; j++)
        {
            if(b[j]==a[i])
                count++;
        }
    }
    if(count==3)
    {
        printf("Success...");
    }
    else
    {
        printf("Fail..!!!");

    }

}
