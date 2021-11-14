#include<stdio.h>
int main()
{
    int n,i=0,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array value");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

        int max=a[i];
        int min=a[i];
        for(i=0; i<n; i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
            }
        }
        printf("maximum number is %d\n",max);
        printf("minimum number is %d\n",min);
        return 0;

    }

