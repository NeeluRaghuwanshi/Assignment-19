//program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
  char l[10][20],s[20];
  int i,r;
  printf("Enter 10 names:\n");
  for(i=0;i<10;i++)
  gets(l[i]);
  printf("Enter a name:");
  gets(s);
  for(i=0;i<10;i++)
    {
         r=strcmp(s,l[i]);

    }

    if(r == 0)
    printf("%s is in the list",s);
    else
    printf("%s is not in the list",s);
    return 0;

}
