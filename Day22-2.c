/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
#include<stdio.h>
int main(){
    int n,i=3;
    float sum=1.0;
    printf("Enter the n term ");
    scanf("%d",&n);
    while(n>0){
        sum=(float)i/(1+i)+sum;
        n--;
        i=i+2;
    }
    printf("%f",sum);
}