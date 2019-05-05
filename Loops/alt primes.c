//alternating prime numbers from 1 to 100
#include<stdio.h>
int main()
{
     int num,i,count=0,d=0;

     for(num=1;num<=100;num++)
        {
            count=0;
            for(i=2;i<=num/2;i++)
                {
                    if(num%i==0)
                        {
                            count++;
                        }
                }


            if(count==0)
                {
                    d++;
                    if(d%2==1)
                    {
                        printf("%d\n",num);
                    }

                }

        }


}
