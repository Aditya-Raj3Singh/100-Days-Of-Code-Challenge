/*Write a program to swap the first and last digit of a number.*/
#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,i=0,lastdgt,firstdgt,pow10,revnum;
    printf("Enter a number ");
    scanf("%d",&num);
    
    lastdgt=num%10;
    temp=num;
    temp=temp/10;
    num=temp;
    while(num>0){
        num=num/10;
        i++;
    }i=i-1;
    pow10=pow(10,i);
    firstdgt=temp/pow10;
    num=temp%pow10;
    revnum=(lastdgt*pow10*10)+(10*num)+firstdgt;
    printf("%d\n",lastdgt);
    printf("%d\n",firstdgt);
    printf("%d\n",num);
    printf("%d",revnum);
}