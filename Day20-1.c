/*Write a program to find the product of odd digits of a number.*/
#include<stdio.h>
int main (){
    int num,i=1,rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        num=num/10;
        if(rem%2!=0){
            i=i*rem;
        }else{
            continue;
        }
    }printf("%d",i);
}