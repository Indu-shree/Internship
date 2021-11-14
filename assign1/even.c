#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}
