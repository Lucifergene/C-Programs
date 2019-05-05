//LENGTH OF A STRING WITH/WITHOUT USING LIBRARY FUNCTIONS
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0;
    char name[20],nam[20];
    printf("ENTER THE STRING1: ");
    gets(name);
    printf("ENTER THE STRING2: ");
    scanf("%s",&nam);//gets terminated after a space

    while(name[i]!='\0')
    {
        count++;
        i++;
    }
        printf("LENGTH BY GETS FUNCTION: %d\n",count);


    for(i=0,count=0;nam[i]!='\0';count++,i++);

    printf("LENGTH BY SCANF FUNCTION: %d",count);


    //USING STRLEN FUNCTION
    int length1,length2;
    length1=strlen(name);
    length2=strlen(nam);

    printf("\nTHE LENGTH OF 1ST AND 2ND STRINGS ARE: %d & %d",length1,length2);


    return 0;


}
