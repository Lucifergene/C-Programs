#include<stdio.h>
#include<string.h>
int main()
{
    char c[30];
    printf("enter the string: ");
    gets(c);
    printf("words= %d",func(c));
    return 0;

}

int func(char a[])
{
    int count=0,i,j;

    for(i=0;i<strlen(a);)
    {
        for(j=i+1;j<strlen(a)-i-1;j++)
        {
            if(a[j]=' ' && a[i]!=' ')
            {
                count++;
            }
            else
            {
                i++;
            }
        }
    }
    return count;
}
