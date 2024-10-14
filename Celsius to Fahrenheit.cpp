#include <stdio.h>

int main() {
    float c,f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (9.0 / 5.0)*c + 32;
  
    printf("Fahrenheit is %f",f);

    return 0;
}

