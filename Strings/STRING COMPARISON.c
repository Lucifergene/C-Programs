//compare two strings without using library function for comparison operation.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("ENTER STRING 1: ");
    gets(a);
    printf("STRING 1 IS: ");
    puts(a);
    printf("\nENTER STRING 2: ");
    gets(b);
    printf("STRING 2 IS: ");
    puts(b);

    if(mystrcmp(a,b)==0)
        printf("\nENTERED STRINGS ARE EQUAL");
    else
        printf("\nENTERED STRINGS ARE NOT EQUAL");

}

int mystrcmp(char a[],char b[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
            return 0;
        else
            return 1;
    }
}


