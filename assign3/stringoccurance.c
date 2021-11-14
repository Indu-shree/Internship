#include<stdio.h>
#include<string.h>
int main()
{
int i=0,cnt=0,j,l1,l2,cnt1=0;
int found;
char str1[100];
char str2[100];
printf("Enter a meaning sentence\n");
scanf(" %s",str1);
l1=strlen(str1);

printf("enter the string that you want to find\n");
scanf(" %s",str2);
l2=strlen(str2);

for(i=0; i<l1;)
{
    j=0;
    cnt=0;
    while((str1[i] == str2[j]))
    {
        cnt++;
        i++;
        j++;
    }
    if(cnt==l2)
    {
        cnt1++;
        cnt=0;

    }
    else
        i++;

}
printf(" '%s'occur %d times in '%s'",str2,cnt1,str1);

}
