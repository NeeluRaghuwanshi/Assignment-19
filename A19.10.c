#include<stdio.h>
#include<string.h>
int main()
{   int i,flag=0;
    char u[5][2][20]={ {"Neel","123"},{"Nitin","124"},{"Naman","125"},{"Priya","126"},{"Prem","127"}};
    char username[20];
    printf("Enter username: \n");
    gets(username);
    char password[20];
    printf("Enter password: \n");
    gets(password);

    for(i=0;i<5;i++)
      if(strcmp(username,u[i][0]) == 0 && strcmp(password,u[i][1]) == 0)
      {
        printf("Login successful...");
        flag=1;
      }
      if(flag == 0)
        printf("Username and password not matched..");

        return 0;
}
