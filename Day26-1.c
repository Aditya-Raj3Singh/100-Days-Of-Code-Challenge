/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */
#include<stdio.h>
int main(){
    int i=1,j=1,sp;
    const int n=5;
    for(i;i<=5;i++){
        
        
        for(sp=5;sp>i;sp--){
            printf(" ");}
            int digit=n-i+1;
        for(int j=digit;j<=n;j++){
            
            printf("%d",j);
            
        }printf("\n");
    }
}