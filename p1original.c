#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter the value of two numbers\n");
  scanf("%d %d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("%d+%d is %d\n",a,b,sum);
}
int main()
{
  int p,q,sum;
  input(&p,&q);
  add(p,q,&sum);
  output(p,q,sum);
  return 0;
}