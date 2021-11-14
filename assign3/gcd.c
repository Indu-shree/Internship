#include<stdio.h>
int main()
{
    int a,b,c,max=0,gcd;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if((a!=0 || b!=0) && c!=0)
    {
        if((a>=b)&&(a>=c))
            max=a;
        else if((b>=a)&&(b>=c))
            max=b;
        else
            max=c;
    }
    else
        printf("GCD of zero is infinite\n");


    if(max>0)
        {

            for(int i=1; i<=max; i++)
            {
                if(a%i==0 && b%i==0 && c%i==0)
                    gcd=i;
            }
            printf("GCD is %d",gcd);
        }

    return 0;
}
