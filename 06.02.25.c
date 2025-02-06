//Simple calculator
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

//Divisibilty checking
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 3 == 0 && num % 5 == 0) {
        printf("The number is divisible by both 3 and 5 \n", num);
    } 
    else if(num % 3 == 0) {
        printf("The number is divisible by 3 \n", num);
    }
    else if(num % 5 == 0) {
        printf("The number is divisible by 5 \n", num);
    } 
    else {
        printf("The number is not divisible by either 3 or 5 \n", num);
    }
    return 0;
}

//Printing roll_nos
#include <stdio.h>
int main() 
{
    int roll_no , num;
    printf("Enter a roll_no : ");
    scanf("%d" , &roll_no);
    for(num = 1 ; num <= roll_no ; num ++ )
    {
        printf("The given roll_no is : %d \n" , num);
    }
    return 0;
}
