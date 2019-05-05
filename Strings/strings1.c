//Different ways of inputting a string
#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    gets(name);     //Function to read string from user.
    printf("Name: ");
    puts(name);    //Function to display string.

printf("\n");

    char num[30];
    printf("Enter Password: ");
    scanf("%s",&num);
    printf("Password: %s",num);

printf("\n");
printf("\n");


    char nam[8]={'W','e','l','C','o','M','E'};//extra space for '\0'
    printf("Greetings: %s",nam);

    return 0;
}



