#include<stdio.h>
int main()
{

char str1[100],ch[20];
char *found;

printf("enter a sentence:\n");
gets(str1);

printf("enter a string:\n");
gets(ch);

found=strstr(str1,ch);
if(found)
printf("%d is the position of the string",found-str1);
else
printf("-1");
return 0;
}
