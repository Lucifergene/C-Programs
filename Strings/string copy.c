//copy one string into other with/without using a library function
#include<stdio.h>
#include<string.h>
void mystrcpy(char ns[],char os[]);
int main()
{
    char a[30],b[30];
    int i;

    printf("ENTER THE STRING: ");
    gets(a);
    printf("THE SOURCE STRING IS: ");
    puts(a);

    mystrcpy(b,a);


    printf("THE COPIED STRING IS BY OPERATOR: %s ",b);
    printf("\nTHE COPIED STRING IS PUTS FUNCTION: ");
    puts(b);

    //USING STRCPY FUNCTION
    printf("\nTHE COPIED STRING IS USING STRCPY: ");
    strcpy(b,a);
    puts(b);
}

    //USING FUNCTIONS
    void mystrcpy(char ns[],char os[])
    {
        int i=0;
        while((ns[i]=os[i])!='\0');
       for(i=0;os[i]!='\0';i++)
        {
            ns[i]=os[i];
        }
            ns[i]='\0';
    }

    //USING POINTERS
    copy(char *s1,char *s2)
    {
        while((*s1++=*s2++)!='\0');
    }

/*
// string::copy
#include <iostream>
#include <string>

int main ()
{
  char buffer[20];
  std::string str ("Test string...");
  std::size_t length = str.copy(buffer,6,5);
  buffer[length]='\0';
  std::cout << "buffer contains: " << buffer << '\n';
  return 0;
}
*/
