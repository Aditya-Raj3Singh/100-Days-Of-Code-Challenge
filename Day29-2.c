/*Find the maximum and minimum element in an array.*/
#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the number of elements you need in the array: ");
    scanf("%d",&n);
    int C[n];
    printf("Write The Elements Of The Array\n");
    for(int i=0;i<n;i++){
        scanf("%d", &C[i]);
    }
    printf("The Array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",C[i]);
        
    } printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++)
        if(C[j]>C[j+1]){
            x=C[j];
            C[j]=C[j+1];
            C[j+1]=x;
            
        }
    }
        printf("Minimun number %d\n",C[0]);
        printf("Maxmimum number%d\n",C[n-1]);
}