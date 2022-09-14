//program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
  char c[10][20],temp[20];
  int i,j;
  printf("Enter 10 city names :\n");
  for(i=0;i<10;i++)
  gets(c[i]);
  for(i=0;i<10;i++)
  {
     for(j=i+1;j<10;j++)
     {
        if(strcmp(c[i],c[j]) > 0)
        {
           strcpy(temp,c[i]);
           strcpy(c[i],c[j]);
           strcpy(c[j],temp);

        }
     }
  }
  printf(" City Names after sorting :\n");
  for(i=0;i<10;i++)
  printf("%s \n",c[i]);
  return 0;
}
