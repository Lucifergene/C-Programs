#include<stdio.h>
#include<string.h>
struct date
{
    int day;
    int month;
    int year;
};

struct date update(struct date t)
{
   t.day++;
   if(t.day==30)
   {
       t.day=1;
       t.month++;
       {
       if(t.month==12)
            {
                t.month=1;
                t.year++;
            }
       }


   }
return t;
}

int main()
{
    struct date t,c;
    printf("Enter Day:Month:Year: ");
    scanf("\n%d %d %d", &t.day,&t.month,&t.year);

    printf("\nNew Time: \n" );
    c=update(t);

    printf("\n%d : %d : %d\n", c.day,c.month,c.year);
}



