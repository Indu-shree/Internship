#include<stdio.h>
int main()
{
    int n=18,sum=0,i,cnt=0;
    float avg=0.0;
    int a[18]= {3,2,4,5,6,4,5,7,3,2,3,4,7,1,2,0,0,0};
    for(i=0; i<=14; i++)
    {
        sum+=a[i];
        cnt++;
    }
//printf("%d\n",cnt);
/*

*/
    a[cnt]=sum;
    printf("\n%d\t%d\n",a[cnt],cnt);
    cnt++;
    avg=avg+(float)sum/n;
    a[cnt]=avg;
    printf("%d\t%d\n",a[cnt],cnt);
    cnt++;
    int min=a[0];
    printf("array values\n ");
    for(i=0; i<18; i++)
    {
        printf("%d\t",a[i]);
        if(min>a[i])
            min=a[i];
    }
    a[cnt]=min;
    printf("\nsmallest number in the array is %d %d",a[cnt],cnt);
    return 0;
}
