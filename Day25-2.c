/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
#include<stdio.h>
int main(){
    int i=5,j=1,sp=1;
    for(i=5;i>=0;i--){
        
        for(j=1;j<=i;j++){
            printf("*");

        }printf("\n");
        for(sp=1;sp<=j;sp++){
            printf(" ");
        }
    }
}