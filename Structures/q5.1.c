#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};

void read(struct date d)
{
    printf("ENTER DAY, MONTH AND YEAR: ");
    scanf("%d %d %d,&d.day,&d.month,&d.year");
}

void valid(struct date d)
{
    switch(d.month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("THIS MONTH HAS ONLY 31 DAYS");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("THIS MONTH HAS ONLY 30 DAYS");
        break;
    case 2: if((d.year%100==0)&&(d.year%400==0))||((d.year%100!=0)&&(d.year%4==0))
            {
                if(d.day>29)
                {
                    printf("FEB HAS ONLY 29 DAYS IN LEAP YEAR");
                }

            }
            else
            {
                if(d,day>28)
                {
                    printf("%d is not a leap year.");
                }
            }
            break;
    default: printf("invalid date");
    }
}

void printf(struct date d)
{
    switch(d.month)
    {
        case 1: printf("Jan, %d ,%d",d.day,d.year);
        break;
        case 2: printf("Feb, %d ,%d",d.day,d.year);
        break;
        case 3: printf("Mar, %d ,%d",d.day,d.year);
        break;
        case 4: printf("Apr, %d ,%d",d.day,d.year);
        break;
        case 5: printf("May, %d ,%d",d.day,d.year);
        break;
        case 6: printf("Jun, %d ,%d",d.day,d.year);
        break;
        case 7: printf("July, %d ,%d",d.day,d.year);
        break;
        case 8: printf("Aug, %d ,%d",d.day,d.year);
        break;
        case 9: printf("Sep, %d ,%d",d.day,d.year);
        break;
        case 10: printf("Oct, %d ,%d",d.day,d.year);
        break;
        case 11: printf("Nov, %d ,%d",d.day,d.year);
        break;
        case 12: printf("Dec, %d ,%d",d.day,d.year);
        break;
    }
}

struct date update(struct date d)
{
    if((d.month==1)||(d.month==3)||(d.month)==5
};



}












int main()
{
    struct date e,f;
    read(e);
    valid(e);
    print(e);
    printf("\n NEw Date\n");
    f=update(e);
    printf("%d %d %d",d.day,d.month,d.year);
}
