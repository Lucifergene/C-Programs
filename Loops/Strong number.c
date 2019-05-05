//STRONG NUMBER
int main()
{
    int num,fact=1,sum=0,temp,i,num1;


    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);

    num1=num;

    while(num)
    {
        fact=1;
        temp=num%10;
        for(i=1;i<=temp;i++)
        {
            fact*=i;
        }
        num/=10;
        sum+=fact;
    }

    if(sum==num1)
        printf("STRONG NUMBER");
    else
        printf("NOT");


}
