/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main(){
   int i=1,j,sp,r=5;
   for(i;i<r;i++){
      for(sp=1;sp<r-i;sp++){
         printf("  ");  
      } for(j=1;j<i*2;j++){
         printf("* ");
      }printf("\n");
   }
   i=r-2;
   for(i;i>=1;i--){
      for(sp=1;sp<=r-i;sp++){
         printf(" ");  
      } for(j=1;j<=(i*2)-1;j++){
         printf("* ");
         
      }printf("\n");
   }
}