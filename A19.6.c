//program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
   char pl[5][50];
   int i,j,l;
   printf("Enter some string :\n");
   for(i=0;i<5;i++)
   gets(pl[i]);
   l=strlen(pl);
   for(i=0;i<l/2;i++)
    {
    for(j=0;pl[i][j];j++)
      if(pl[i] != pl[l-1-i])
      {
        printf("%s is not palindrome\n",pl);
        break;
      }
    }
    if(i==l/2)
    printf("%s is palindrome",pl);
}
