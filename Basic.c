#include<stdio.h>
int main()
{
printf("Hello!!");
}

#include <stdio.h>
int main() 
{
int num1, num2, sum;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
sum = num1 + num2;
printf("Sum = %d\n", sum);
return 0;
}

#include <stdio.h>
int main() {
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("Addition: %d\n", a + b);
printf("Subtraction: %d\n", a - b);
printf("Multiplication: %d\n", a * b);
printf("Division: %.2f\n", (float)a / b);
printf("Modulus: %d\n", a % b);
return 0;
}
