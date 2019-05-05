//product of matrices using pointers
//sum += A[row][i] * B[i][col]==sum += (*(*(A + row) + i)) * (*(*(B + i) + col));
#include<stdio.h>

void mul(int mat1[][10],int mat2[][10],int res[][10])
{
    int i,j,k;
    int sum;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            (*(*(res+i)+j))=0;
            {
                for(k=0;k<3;k++)//k=col
                {
                    (*(*(res+i)+j))+=(*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
                }
            }
        }
    }

}

void print(int mat[][10])
{
    int i, j;
    for (i=0; i<3;i++)
    {
        for (j=0; j<3;j++)
        {
            printf("%4d",*(*(mat + i) + j));
        }

        printf("\n");
    }
}

void scan(int maty[][10])
{
    int i, j;
    for (i=0; i<3;i++)
    {
        for (j=0; j<3;j++)
        {
            scanf("%4d",(*(maty + i) + j));
        }

        printf("\n");
    }
}

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k;

    printf("ENTER MATRIX A: ");
    scan(a);

    printf("\nENTER MATRIX B: ");
    scan(b);

    printf("\nMATRIX A: \n");
    print(a);

    printf("\nMATRIX B: \n");
    print(b);

    mul(a,b,c);

    printf("\nTHE PRODUCT IS: \n");
    print(c);
}

    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            {
                for(k=0;k<3;k++)//k=col
                {
                    c[i][j]+=a[i][k] * b[k][j];
                }

            }
        }
    }

   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",c[i][j]);
        }
        printf("\n");
    }*/

