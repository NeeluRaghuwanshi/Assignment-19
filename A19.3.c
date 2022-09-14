//program to read and display a 2D array of strings in C language
#include<stdio.h>
int main()
{
    char s[20][20];
    int i,n;
    printf("Enter the number of names : ");
    scanf("%d",&n);
    printf("Enter %d names :",n);
    for(i=0;i<n;i++)
     gets(s[i]);
    printf("Names are :\n");
    for(i=0;i<n;i++)
     puts(s[i]);
     return 0;



}
