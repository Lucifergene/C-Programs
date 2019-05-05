//https://www.codechef.com/problems/TRUEDARE
#include <stdio.h>

int main()
{
    long int T,Tr[10],Dr[10],Ts[10],Ds[10],tr,dr,ts,ds,i,j,a,l;
    scanf("%ld",&T);
    while (T--)
    {
  scanf("%ld",&tr);//tr=truth of ram
        for (i=0; i<tr; i++)
        {
            scanf("%ld",&Tr[i]);
        }
  scanf("%ld",&dr);//dare of ram
        for (i=0; i<dr; i++)
        {
            scanf("%ld",&Dr[i]);
        }
  scanf("%ld",&ts);//truth of shyam
        for (i=0; i<ts; i++)
        {
            scanf("%ld",&Ts[i]);
        }
  scanf("%ld",&ds);//dare of shyam
        for (i=0; i<ds; i++)
        {
            scanf("%ld",&Ds[i]);
        }

        l=0;
        a=0;
        for (i=0; i<ts; i++) //ts->19
        {
            for (j=0; j<tr; j++) //tr->9
            {
                if (Tr[j]==Ts[i])
                {
                  a=1;
                }
            }
            if (a!=1)
            {
              l=1;
            }
        }
        for (i=0; i<ds; i++)
        {
            a=0;
            for (j=0; j<dr; j++)
            {
                if (Dr[j]==Ds[i])
                {
                  a=1;
                }

            }
            if (a!=1)
            {
              l=1;
            }
        }
        if (a!=1)
        {
            printf("no\n");
        }
        else
        {
          printf("yes\n");
        }
    }
}
