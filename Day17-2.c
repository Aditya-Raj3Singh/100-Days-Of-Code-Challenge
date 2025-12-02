//Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int num,i,a;
    printf("Enter a Number To Check Whether It's A Prime Or Not\n");
    scanf("%d",&num);
    for (i=2;i<num;i++){
        a=num%i;
        if(a==0){
            
            break;
        }
        }
        if(a==0){
            printf("Number is not prime");
        }else{
            printf("Number is prime");
    }
}