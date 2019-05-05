//check a string is pallindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("ENTER THE STRING: ");
    gets(a);
    strcpy(b,a);
    printf("THE REVERSED STRING IS: ",strrev(b));
    puts(b);

    if(strcmp(b,a)==0)
        printf("IT IS A PALLINDROME");
    else
        printf("NOT A PALLINDROME");


}
