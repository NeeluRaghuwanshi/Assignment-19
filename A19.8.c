//minimum distance between the given two words in the list of words.
#include<stdio.h>
#include<string.h>
int main()
{
  char s[5][20]={"my","name","is","India"};
  char x[]="my";
  char y[]="India";
  int i,x1= -1,y1= -1,min=100;
  for(i=0;i<5;i++)
  {
     if(strcmp(s[i],x) == 0)
       x1=i;
      if(strcmp(s[i],y) == 0)
       y1=i;

      if(x1 != -1 && y1 != -1)
        min= abs(y1-x1);

  }
  printf("minimum distance is %d",min-1);
  return 0;
}
