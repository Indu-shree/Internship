#include<stdio.h>
#define max_size 100
main()
{
    int n,i,j,flag=0,a[max_size],b[max_size];
    printf("enter the value of n:");
    scanf("%d",&n);

    printf("\nEnter the array elements\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);

    }
    printf("\n\n");

    for(i=0; i<n; i++)
    {
        printf("a[%d]:",i);
        printf("%d\t\t",a[i]);
    }

    printf("\n");

//reversing array

    for(i=n-1,j=0; i>=0; i--,j++)
    {
        b[j]=a[i];
    }

    for(i=0; i<n; i++)
    {
        printf("b[%d]:",i);
        printf("%d\t\t",b[i]);
    }
    printf("\n\n");

    for(i=0; i<n; i++)
    {

        if(a[i]==b[i])
        {

            flag=1;
        }
        else
            flag=0;
    }
    if(flag==1)
    {
        printf("Array is a palindrome");

    }
    else
    {
        printf("Array is not a palindrome");
    }

}
