//DECIMAL TO BINARY
#include<stdio.h>
#include<math.h>
int main()
{
   int num=231,bin=11100111,i=0,j=1,temp,sum=0,re=0;

   while(num)
   {
       temp=num%2;
       num/=2;
       re+=temp*j;
       j*=10;
   }

    printf("BINARY= %d",re);

    printf("\n");




 //BINARY TO DECIMAL

  while(bin)
  {
      temp=bin%10;
      sum+=temp*pow(2,i);
      i++;
      bin/=10;
  }

  printf("DECIMAL= %d",sum);

}




