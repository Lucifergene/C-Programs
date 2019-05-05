//LIST THE PATIENTS WHO ARE ADMITTED MORE THAN 7 DAYS
#include<stdio.h>
struct hospital
{
    int id;
    int day;
    int month;
    int year;
    float amount;
}t;
int main()
{
    struct hospital t;
    int i,n=3,d=7,mo=11,y=2018,l=0,m=0;
    //for(i=1;i<=n;i++)
    //{
        printf("ENTER THE PATIENT DD MM YYYY: ");
        scanf("%d %d %d",&t.day,&t.month,&t.year);
        printf("%d %d %d\n",t.day,t.month,t.year);
   // }
        m=t.month;
    /*switch(t.month)
    {
    case '1':
        m=12;
        //printf("J");
        break;
    case '2':
        m=1;
       // printf("f");
        break;
    case '3':
        m=2;
        //printf("mr");
        break;
    case '4':
        m=3;
        //printf("a");
        break;
    case '5':
        m=4;
       // printf("mA");
        break;
    case '6':
        m=5;
       // printf("jun");
        break;
    case '7':
        m=6;
        //printf("Jul");
        break;
    case '8':
        m=7;
        //printf("aug");
        break;
    case '9':
        m=8;
        //printf("sep");
        break;
    case '10':
        m=9;
        //printf("oct");
        break;
    case '11':
        m=10;
        //printf("nov");
        break;
    case '12':
        m=11;
        //printf("dec");
        break;
    }*/

    if(m=='1'||m=='3'||m=='1'||m=='5'||m=='7'||m=='8'||m=='10'||m=='12')
        l=t.day+31-d;
    else if(m=='4'||m=='6'||m=='9'||m=='11')
        l=t.day+30-d;
    else if(m=='2')
    {
        if(t.year%400==0||t.year%4==0  && t.year%100!=0)
            l=t.day+29-d;
        else
            l=t.day+28-d;
    }
    printf("%d",l);
}
