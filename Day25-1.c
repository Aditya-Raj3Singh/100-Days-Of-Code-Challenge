/*Write a program to print the following pattern:
5
45
345
2345
12345 */
#include<stdio.h>
int main(){
    int i,j,n=5,p;
    for(i=1;i<=5;i++){
        
        for(j=0;j<i;j++){
            p=n+j;
            printf("%d",p);
            
        }printf("\n");
        n--;
    }
}