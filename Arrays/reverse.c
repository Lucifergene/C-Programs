//REVERSE OF A NUMBER
#include<stdio.h>

main()
{

    long num,rev,sum=0;

    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);

    while(num!=0)
    {
        rev=num%10;
        num=num/10;
        sum=sum*10+rev;//IMPORTANT
    }

        printf("%d",sum);

}
