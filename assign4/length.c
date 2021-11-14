#include<stdio.h>
#define max_size 100
int main()
{
int vowel=0,conso=0,i=0,flag=0,j=0;
char str[max_size],str1[max_size],str2[max_size];

printf("enter the string\n");
gets(str);
puts(str);

int length=strlen(str);
printf("length of the string is %d\n",length);
//uppercase
for(i=0;i<length;i++)
{

    if(str[i]>='a' && str[i]<='z')
    {

        str[i]=str[i]-32;
    }

}
printf("upper string is %s ",str);


//reverse
for(i=length-1;i>=0;i--)
{

    str2[j]=str[i];
    j++;
}

//palindrome
for(i=0;i<length;i++)
{
    if(str[i]==str2[i])
    {
        flag=1;
    }
    else {
        flag=0;
    }
}
if(flag==1)
{
    printf("string is palindrome");
}
else
{
    printf("string is not a palindrome");
}

return 0;

}
