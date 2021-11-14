#include<stdio.h>
#define max_size 100
int main()
{
int vowel=0,conso=0,i=0;
char str[max_size];

printf("enter the string\n");
gets(str);

while(str[i]!='\0')
{
if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
{
    vowel++;
}
else
{
  conso++;
}

i++;
}

printf("num of vowels are %d\n",vowel);
printf("num of consonent are %d\n",conso);

return 0;

}
