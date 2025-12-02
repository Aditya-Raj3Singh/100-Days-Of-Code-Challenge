/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*   */
#include<stdio.h>
int main(){
    int i=1,j,k;
    for(i;i<=5;i++){
        for(j=1;j<i*2;j++){
            printf("*");
        }printf("\n");
    }for(i=4;i>=1;i--){
        for(j=1;j<i*2;j++){
        printf("*");
        }printf("\n");
    }
}