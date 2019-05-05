#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char name[34];
    int amount;
}t;

 struct employee equal(struct employee t)
 {
    scanf("%s %d",t.name,&t.amount);
    printf("%s %d",t.name,t.amount);
 };












int main()
{
    struct employee t;
    int e;

    printf("ENTER 1-4");
    scanf("%d",&e);

    if(e=='1')
    {
        struct employee equal(struct employee t);
    }

    else if(e=='2')
    {
        struct employee greater(struct employee t);
    }

    else if(e=='3')
    {
        struct employee less(struct employee t);
    }

    else if(e=='4')
    {
       exit();
    }

}

