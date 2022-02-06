#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;
complex add(complex a, complex b);
int main() {
    complex a, b, result;
    printf("For I complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("\nFor II complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &b.real, &b.imag);
    result = add(a, b);
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}
complex add(complex a, complex b) {
    complex temp;
    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;
    return (temp);
}