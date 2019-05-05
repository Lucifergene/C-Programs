#include <stdio.h>


typedef struct complex
{
    float real;
    float imag;
} complex,*p1,*p2;

complex add(complex x, complex y)
{
    complex temp;
    temp.real = x.real + y.real;
    temp.imag = x.imag + y.imag;

return(temp);
}

int main()
{
    complex c1, c2, c;
    complex *p1=&c1;
    complex *p2=&c2;
    printf("\nFor 1st complex number \n");
    printf("\nEnter real and imaginary part respectively:");
    scanf("%f %f", &p1->real, &p1->imag);
    printf("\n\nFor 2nd complex number \n");
    printf("\nEnter real and imaginary part respectively:");
    scanf("%f %f", &p2->real, &p2->imag);
    c = add(c1,c2);
    printf("\n\nSum = %.1f + %.1fi", c.real, c.imag);
return 0;
}
