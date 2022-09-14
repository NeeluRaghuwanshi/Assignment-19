//From the list of IP addresses, check whether all ip addresses are valid
#include<stdio.h>
#include<string.h>
int main()
{
   char ip[50];
   int i,flag=0;
   printf("Enter some ip addresses:\n");
   gets(ip);
   char *a= strtok(ip,".");
   while(a != NULL)
   {
     int x= atoi(a);
     if(x>=0 && x<=255)
     printf("%d",x);
     a=strtok(NULL,".");
     flag=1;

   }
   if(flag==1)
   printf("ip address are valid\n");
   else
   printf("ip addresses are not valid\n");
   return 0;
}
