#include <stdio.h>

int main() {
    int num,r,c=0,i=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Binary representation: 0");
        return 0;
    }
    else {
    while (num > 0) {
        r = num % 2;
        num=num/2;
        c=10*i*r+c;
        i*=10;
    }printf("%d", c);

    return 0;
}}