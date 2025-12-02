/*Write a program to find the LCM of two numbers.*/
#include<stdio.h>
int main(){
    int hcf=1,num1,num2,i,lcm;
    printf("Enter Two Numbers\n");
    scanf("%d %d",&num1,&num2);
    for (i=1;i<=num1 && i<=num2;i++){
        if (num1%i==0 && num2%i==0){
            hcf=i;
        }
    }lcm=num1*num2/hcf;

    printf("The LCM is %d",lcm);
}