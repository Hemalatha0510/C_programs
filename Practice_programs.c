#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d \n", ch, ch);
    return 0;
}

#include <stdio.h>
int main() {
    printf("HEMALATHA");
    return 0;
}
#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name : ");
    scanf("%s", name);
    printf("%s \n" , name);
    return 0;
}

#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Product: %.2f\n", a * b);
    return 0;
}
