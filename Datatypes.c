#include<stdio.h>
int main()
{
    //char a = 255;
    unsigned char a = 255;
    printf("%d",a);
    return 0;
}

#include <stdio.h>
int main() {
    int a = 10;
    long int b = 12345;
    long long int c = 123456789;
    printf("size : %d \n", sizeof(a));
    printf("size : %ld \n", sizeof(b));
    printf("size : %lld", sizeof(c));
    return 0;
}
