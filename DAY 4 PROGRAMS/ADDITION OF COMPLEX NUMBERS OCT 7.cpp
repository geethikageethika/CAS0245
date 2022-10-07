#include<stdio.h>

struct complex
{
    float real;
    float imaginary;
};

int main()
{
    
    struct complex cnum1, cnum2, sum;
    printf("Enter  first complex number:\n");
    scanf("%f%f", &cnum1.real, &cnum1.imaginary);
    printf("Enter  second complex number:\n");
    scanf("%f%f", &cnum2.real, &cnum2.imaginary);

    sum.real = cnum1.real + cnum2.real;
    sum.imaginary = cnum1.imaginary + cnum2.imaginary;

    printf("SUM = %0.2f + i %0.2f", sum.real, sum.imaginary);

    return 0;
}
