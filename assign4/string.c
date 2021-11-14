#include<stdio.h>
#define max_size 100
int main()
{
int alpha,num,spc,spcl,n,i=0;
alpha=num=spc=spcl=0;
char str[max_size];

printf("enter the string\n");
gets(str);

while(str[i]!='\0')
{
if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
{
    alpha++;
}
else if(str[i]>='0' && str[i]<='9')
{
    num++;
}
else if( str[i]==' ')
{
    spc++;
}

else
{
    spcl++;
}
i++;
}

printf("num of alphabetics are %d\n",alpha);
printf("num of numbers are %d\n",num);
printf("num of white space are %d\n",spc);
printf("num of special char are %d\n",spcl);
return 0;

}
