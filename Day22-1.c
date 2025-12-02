/*Write a program to check if a number is a strong number.*/
#include<stdio.h>
int main(){
    int num,temp,rem,sum=0;
    printf("Enter a number ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        num=num/10;
        int fac=1,i=1;
        for(i;i<=rem;i++){
            fac=i*fac;

        }sum=fac+sum;
    }
    if(temp==sum){
        printf("%d is a strong number",temp);
    }else{
        printf("%d is not a strong number",temp);
}}