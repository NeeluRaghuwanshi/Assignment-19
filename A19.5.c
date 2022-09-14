//check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
   char e[5][50];
   int i,flag=0;
   printf("Enter email addresses: ");
   for(i=0;i<5;i++)
   gets(e[i]);
   for(i=0;i<5;i++)
     {
        if(strchr(e[i],'@') == 0)
            printf("odd email addresses are: %s\n",e[i]);

     }
    return 0;

}
