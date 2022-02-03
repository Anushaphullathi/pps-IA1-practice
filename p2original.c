#include<stdio.h>
int input()
{
  int x;
  scanf("%d",&x);
  return x;
} 

int cmp(int a,int b,int c)
{
    
  if(a>b && a>c)
  {
  return a;
  }

else if(b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

int main()
{
  int a,b,c,large;
  printf("enter the three numbers\n");
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  printf("%d is the largest of the three",large);
}