/*Read and print elements of a one-dimensional array.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you need to write in an array: ");
    scanf("%d",&n);
    int C[n];
    printf("Write down the elements of the array\n");
    for (int i=0;i<n;i++){
        scanf("%d",&C[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",C[i]);
    }
}