/*Find the sum of array elements.*/
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
    int sum=0;
    for (int i=0;i<n;i++){
        sum=sum+C[i];
    }printf("The sum of the elements is %d",sum);
}