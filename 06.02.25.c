#include <stdio.h>
int main() 
{
    int a,b,result,choice;
    printf("Enter number 1 :");
    scanf("%d" , &a);
    printf("Enter number 2 :");
    scanf("%d" , &b);
    printf("Enter your choice : \n 1.Addition \n 2.Subtractiion \n 3.Multiplication \n 4.Division \n");
    scanf("%d" , &choice);
    switch(choice)
    {
        case 1:
        result = a + b;
        printf("The addition of %d and %d is %d " , a , b, result);
        break;
        
        case 2:
        result = a - b;
        printf("The subtraction of %d and %d is %d " , a , b, result);
        break;
        
        case 3:
        result = a * b;
        printf("The multiplication of %d and %d is %d " , a , b, result);
        break;
        case 4:
        result = a / b;
        printf("The division of %d and %d is %d " , a , b, result);
        break;
        default:
        printf("Enter a valid number :");
        break;
    }
    return 0;
} 
