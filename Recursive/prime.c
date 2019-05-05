//function q.7
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
             count++;
        }
    }
        if(count==2)
            return 1;
        else
            return 0;
}

int main()
{
    int p;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&p);

    if(p==1)
        printf("UNIQUE");
    else if(prime(p)==1)
        printf("PRIME NUMBER");
    else if(prime(p)==0)
        printf("NOT PRIME");

return 0;
}
