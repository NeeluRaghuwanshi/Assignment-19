
#include<stdio.h>
#include<string.h>
int fact(int);
int main()
{
  char l[5][20],s[20];
  int n,i,r;
  printf("give a list of 5 names:\n");
  for(i=0;i<5;i++)
  gets(l[i]);
  printf("Enter your name:");
  gets(s);
  for(i=0;i<5;i++)
    {
         r=strcmp(s,l[i]);

    }
    if(r == 0)
    {
    printf("%s is in the list\n",s);
    printf("You can calculate factorial\n");
    fact(n);
    }

    else
    {
    printf("%s is not in the list\n",s);
    printf("You can not calculate factorial\n");
    }
    return 0;

}
int fact(int n)
   {
      int fa=1,i;
      printf("enter a number\n");
      scanf("%d",&n);
      for(;n>=1;n--)
      fa=fa*n;
      printf("Factorial is %d",fa);
      return 1;
   }
