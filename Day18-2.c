//Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main(){
    int hcf=1,num1,num2,i;
    printf("Enter Two Numbers\n");
    scanf("%d %d",&num1,&num2);
    for (i=1;i<=num1 && i<=num2;i++){
        if (num1%i==0 && num2%i==0){
            hcf=i;
        }
    }printf("The HCF or GCD of %d and %d is %d",num1,num2,hcf);
}