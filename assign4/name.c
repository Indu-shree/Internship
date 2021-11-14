#include<stdio.h>
struct name
{
    char fname[50];
    char mname[50];
    char lname[50];

}s[10];
int main()
{
    int i;
    printf("enter the name of the person\n");

      for(i=0;i<10;i++)
      {printf("enter the first name\t");
        scanf("%s",s[i].fname);
        printf("enter the middle name\t");
        scanf("%s",s[i].mname);
        printf("enter the last name\t");
        scanf("%s",s[i].lname);
      }
   printf("%s-%s-%s",s[i].fname,s[i].mname,s[i].lname);
  return 0;
}
