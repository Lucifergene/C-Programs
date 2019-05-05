#include<stdio.h>
#include<string.h>
void main()
{
    char c[30];
    printf("ENTER THE STRING: ");
    gets(c);
    func(c);
}

void func(char a[])
{
    int i,j;
    char temp;
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(a)-1;j++)
        {
            if(a[j]>a[j+1])//ascending order
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nPRINTING IT IN ALPHABETICAL ORDER: ");
    printf("%s\n",a);


}
