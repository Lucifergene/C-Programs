//extract first character of each word in a string
#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,b,j,k;
    char a[30],c[30],z[100];
    printf("ENTER THE NAMES: ");
    scanf("%s %s",a,c);
    printf("THE STRING IS: ");
    //strncpy(z,a,1);
    z[0]=a[0];
    z[1]='.';
    z[2]=' ';
    z[3]='\0';
   // strcat(z,c);
   // puts(z);
    strcat(z,c);
    puts(z);
}

    /*i=0,k=0;
    while(a[i]==' ');
    {
        printf("%c",a[i+1]);
    }
    i++;


    b=strlen(c);
    printf("THE FIRST LETTERS OF EACH WORD ARE: ");

    if(a[0]!=' ')
    {
        printf("%c",a[0]);
    }
    else
    {

    }

    for(j=0;j<=b;j++)
   {
       printf("%c",c[j]);
   }*/
