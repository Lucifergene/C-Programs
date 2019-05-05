#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int sec;
} s[10];

int main()
{
    int n,i;
    printf("ENTER NO. OF MEMBERS: ");
    scanf("%d", &n);
    printf("Enter information: \n");

    for(i=0;i<n;i++)
    {
        printf("Enter hour, minute and second: ");
        scanf("\n%d %d %d", &s[i].hour,&s[i].minute,&s[i].sec);
    }

    printf("Displaying Information:\n");

    for(i=0;i<n;i++)
    {
         printf("\n%d:%d:%d",s[i].hour,s[i].minute,s[i].sec);
    }

    return 0;
}
