#include<stdio.h>
int main()
{
    int l,u,i,j,flag;
    printf("Enter lower and upper bound value\n");
    scanf("%d%d",&l,&u);

    while(l<u)
    {
        flag=0;
        for(i=2;i<=l/2;++i)
        {

            if(l%i==0)
            {
                flag=1;
                break;

            }
        }
        if(flag==0)
            printf("%d ",l);
        ++l;
    }
return(0);

}
