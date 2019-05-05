#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
}t;

int daysinmonth[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *monthname[]={"jan","feb","mar","april","may","june","july","aug","sept","oct","nov","dec"};

struct date read()
{
    struct date t;
    printf("ENTER THE DAY:MONTH:YEAR");
    scanf("%2d %2d %4d", &t.day,&t.month,&t.year);
    return t;
}

int val(struct date t)
{

    if(d.day>31||d.day<1||d.month<1||d.month>12||d.year<1)
        return 0;
        int isleap=(!(d.year%4)&&(year%100)||(d.year%400));
    if(isleap && (d.day>2 && d.month==2));
        return 0;




    if(t.month=='1'||t.month=='3'||t.month=='5'||t.month=='7'||t.month=='8'||t.month=='10'||t.month=='12')
        t.day<='31';
    else if(t.month==2)
    {
        if((t.year%400==0||t.year%4==0) && (t.year%100!=0))
        {
            t.day<='29';
        }
        else
        {
            t.day<='28';
        }

    else
    {
        t.day<='30';
    }

    }
    else
        printf("Error");
    if(year%4==0 && t.month==2)
        t.day<=28;
    else if(year%4==1 && t.month==2)
        t.day<=29;

int isleap=(!(t.year%4))
}
