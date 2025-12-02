/*Write a program to find the sum of digits of a number.*/
#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        i=num%10;
        num=num/10;
        sum=i+sum;
    } printf("%d",sum);
}