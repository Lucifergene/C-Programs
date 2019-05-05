 //WAP to operate two numbers using pointers using functions
#include<stdio.h>
int arr[6];
void func(int *x,int *y,int *z[])
{

   // int * sum=NULL,*diff=NULL,*product=NULL,*division=NULL,*remainder=NULL;
    //int sum=0,diff=0,product=0,division=0,remainder=0;
    *(z+1)=*x+*y;
    *(z+2)=*x-*y;
    *(z+3)=*x* *y;
    *(z+4)=*x/ *y;
    *(z+5)=*x % *y;

}


int main()
{
    int a,b,i,o;
    int c[30];
    int ptr;
    printf("ENTER VALUES OF A & B: ");
    scanf("%d %d",&a,&b);

    func(&a,&b,&c);



    printf("\nENTER THE OPERATION: ");
    scanf("%d",&o);

    if (o==1)
        printf("%3d",*(c+1));
    else if (o==2)
        printf("%3d",*(c+2));
    else if (o==3)
        printf("%3d",*(c+3));
    else if (o==4)
        printf("%3d",*(c+4));
    else if (o==5)
        printf("%3d",*(c+5));
    else
        printf("ERROR");

}
