//INTRODUCTION TO POINTERS
//WAP to create, initialize, assign and access a pointer variable.
#include<stdio.h>
int main()
{
    int num;
    int *ptr=&num;

    //ptr=&num;

    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);

    printf("THE VALUE OF NUM: %d\n",num);
    printf("ADDRESS OF NUM: %p\n",&num);

    //using pointer
    printf("VALUE OF NUM: %d\n",*ptr);
    printf("ADDRESS OF NUM: %p\n",ptr);

}
