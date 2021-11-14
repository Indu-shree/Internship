#include<stdio.h>
#include<MaximumNumber.h>
int main()
{
    int n,i,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int a[100];

    if(n>0)
    {
        printf("enter the array value");
        for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    }
    else
        return 1;

    int max=a[0];
    maximum(max,a);
    //int min=a[0];


    //printf("minimum number is %d\n",min);
    return 0;
}
