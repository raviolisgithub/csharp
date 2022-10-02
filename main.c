#include <stdio.h>

int main() {
    printf("This calculator can only add numbers for now, stay tuned in github to know updates.\n");
    printf("This calculater was made by ravioli. (Copyright 2022)\n");
    printf("https://github.com/raviolisgithub\n");

    float num1;

    printf("Number 1: ");
    scanf("%f", &num1);

    float num2;
    printf("Number 2: ");
    scanf("%f", &num2);

    printf("Answer is %f.", num1 + num2);
}

