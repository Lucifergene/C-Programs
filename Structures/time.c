//addition of 2 times
#include<stdio.h>
typedef struct time
{
    int hour;
    int min;
    int sec;
} time, t1,t2;


time calc(time t1,time t2)
{
    time temp;
    int co;
    temp.hour=t1.hour+t2.hour;
    temp.min=t1.min+t2.min;
    temp.sec=t1.sec+t2.sec;

    co=temp.sec+(temp.min*60)+(temp.hour*3600);
    temp.hour=co/3600;
    temp.min=(co/60)-(temp.hour*60);
    temp.sec=co%60;

    return temp;
}

int main()
{
    time t1,t2,c;
    printf("ENTER HOUR:MIN:SEC: ");
    scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
    printf("ENTER HOUR:MIN:SEC: ");
    scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
    c=calc(t1,t2);
    printf("\n%d : %d : %d",c.hour,c.min,c.sec);
}
