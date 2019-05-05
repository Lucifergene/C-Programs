//transpose of matrices using pointers
#include<stdio.h>

void scan(int mat[][10],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",(*(mat+i)+j));
        }
    }
}

void print(int maty[][10],int p,int q)
{
    int i,j;
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%5d",*(*(maty+i)+j));
        }
        printf("\n");
    }
}

void transpose(int mat1[][10],int mat2[][10],int row,int col)
{
    int i,j;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            *(*(mat2+i)+j)=*(*(mat1+j)+i);
        }
    }
}

void print1(int mate[][10],int p,int q)
{
    int i,j;
    for(i=0;i<q;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%5d",*(*(mate+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10],b[10][10],r,c;
    printf("ENTER THE ROWS & COLUMNS:\n");
    scanf("%d %d",&r,&c);
    printf("ENTER MATRIX:\n");
    scan(a,r,c);

    printf("MATRIX:\n");
    print(a,r,c);

    transpose(a,b,r,c);

    printf("THE TRANSPOSE IS:\n");
    print1(b,r,c);

}
