/*Write a program to check if a number is a perfect number.*/
#include<stdio.h>
int main(){
    int num,i=1,per=1;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i;i<num;i++){
        if(num%i==0){
            per=per*i;
        }
    }if(num==per){
        printf("%d is a perfect number",per);
    }else{
        printf("%d is not a perfect number",per);
    }
}