/*Write a program to check if a number is an Armstrong number.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,arms=0,i,n=0,num1,num2;
    printf("Enter a number to check whether it's a armstrong number\n");
    scanf("%d", &num);
    num1=num;
    num2=num;
    while(num1>0){
        num1=num1/10;
        n++;
    }
    while(num>0){
        i=num%10;
        
        arms=arms+pow(i,n);
        num=num/10;
        //printf("%d\n",i);
    } /*printf("%d\n",num);
    printf("%d\n",num2);
    printf("%d\n",num1);
    printf("%d\n",arms);
    printf("%d\n",n);}*/
    
    if (arms==num2){
        printf("Armstrong Number");
    } else {
        printf("Not a armstrong number");
    }
}