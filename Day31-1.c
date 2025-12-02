/*Search for an element in an array using linear search.*/
#include<stdio.h>
int main(){
    int n,num;
    printf("Enter The Number of elements in the array: ");
    scanf("%d",&n);
    int C[n];

    printf("Enter the elements of the array :\n");

    for(int i=0;i<n;i++){
        scanf("%d",&C[i]);
    }
    printf("Enter the number to find in the array: ");
    scanf("%d",&num);

     for(int i=0;i<n;i++){
        if(C[i]==num){
            printf("%d is present",num);
            break;
        
     
         }
   
            
}}