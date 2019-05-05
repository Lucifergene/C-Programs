#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int sec;
} ;




struct time_struct read()
{
        struct time_struct t;
        printf("Enter hour:minute:second: ");
        scanf("\n%d %d %d", &t.hour,&t.minute,&t.sec);

    return t;
}


void display()
{
    struct time_struct t;
    printf("\n%d:%d:%d", t.hour,t.minute,t.sec);
}


int main()
{
    struct time_struct n;
    n=read(n);
    display(n);
    return 0;
}
