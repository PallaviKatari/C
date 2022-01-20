#include<stdio.h>
void main()
{
  int i;
  int sum=0;
  for(i=0;i<5;i++) //1,2,3,4,5
  {
      sum+=i; //sum=0+0=0,0+1=1,1+2=3,3+3=6,6+4=10
      continue;
      printf("\n break and continue statement");
  }
  printf("\nSum:%d",sum);
}




