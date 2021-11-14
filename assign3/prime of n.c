#include<stdio.h>
#define max_size 100
int main()
{
    int num,i,j,cnt=3,k=0;
    int a[max_size],l;
    a[0]=2;
    printf("Enter value number\n");
    scanf("%d",&num);
    int temp=num;
    if(num>=1)
    {
        printf("first %d prime number are\n2\t",num);
        for(i=2; i<=num;)
        {
            for(j=2; j<=cnt-1; j++)
            {
                if(cnt%j==0)
                    break;
            }
            if(j==cnt)
            {
                printf("%d\t",cnt);
                i++;
            }
            cnt++;
        }
    }

    return 0;
}
