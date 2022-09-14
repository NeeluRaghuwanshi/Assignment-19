//program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>
int main()
{
  char s[5][20];
  int i,j,v=0;
  printf("Enter five string\n");
  for(i=0;i<5;i++)
  gets(s[i]);
  for(i=0;i<5;i++)
    {
        for(j=0;s[i][j];j++)
        {
            if(s[i][j] == 'A' || s[i][j] == 'E' || s[i][j] == 'I' || s[i][j] == 'O'|| s[i][j] == 'U' || s[i][j] == 'a'
               || s[i][j] == 'e'|| s[i][j] == 'i' || s[i][j] == 'o' || s[i][j] == 'u')
                v++;
        }

  printf("%d vowels in %s \n",v,s[i]);
  v=0;
   }
  return 0;

}
