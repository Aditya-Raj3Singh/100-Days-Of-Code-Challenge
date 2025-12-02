//Write a program to calculate the factorial of a number
#include<stdio.h>
int main ()
{ int num,fac=1;
    printf("Enter a number ");
    scanf("%d",&num);
    for(num;num>=1;num--)
        fac=num*fac;
        printf("%d",fac);

}