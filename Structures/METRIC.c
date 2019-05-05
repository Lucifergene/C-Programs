//structure
#include<stdio.h>

typedef struct metric
{
    int meter;
    int cm;
}metric,*p1;

typedef struct british
{
    int feet;
    int inch;
}british,*p2;


int pl(int x,int y)
{
    metric m;
    british p;
    metric centi;
    british br;
    metric *p1=&m;
    british *p2=&p;
    printf("INPUT metric: ");
    scanf("%d %d",&p1->meter,&p1->cm);
    printf("INPUT british: ");
    scanf("%d %d",&p2->feet,&p2->inch);
    centi=(p1->meter*100)+p1->cm;
    br=(12*p2->feet)*p2->inch;
    x=(centi+(br*2.54))%100;
    y=(centi+(br*2.54))/100;
}




int main()
{
    int mf=0,cmf=0;
    int centi,br;
    pl(mf,cmf);
    printf("%d m %d cm",mf,cmf);
}
