#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int sec;
} ;t;

void read()
{
        struct time_struct t;
        printf("Enter hour:minute:second: ");
        scanf("\n%d:%d:%d", &t.hour,&t.minute,&t.sec);
}


void display()
{
    struct time_struct t;
    void read();
    printf("\n%d:%d:%d", t.hour,t.minute,t.sec);
}


int main()
{
    read();
    display();
    return 0;
}
