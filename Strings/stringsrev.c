//reverse of a string with/without using library function
#include<stdio.h>
#include<string.h>

    //USING FUNCTIONS
char * mystrrev(char ns[])
{
    int b,i,j=0,temp;
    b=strlen(ns);
    int end=b-1;
    for(i=0;i<(b/2);i++)
    {
         temp=ns[i];
         ns[i]=ns[end];
         ns[end]=temp;
         end--;
    }
    return ns;

}

int main()
{
    char a[30],c[30],d[30];
    printf("ENTER THE STRING: ");
    gets(a);
    printf("THE STRING IS: ");
    puts(a);
    strcpy(c,a);
    printf("THE REVERSED STRING IS: ");
    puts(mystrrev(a));

    //USING STRREV FUNCTION


    printf("\nTHE REVERSED STRING USING FUNCTION IS: ",strrev(c));
    puts(c);
}
