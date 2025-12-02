/*Count even and odd numbers in an array.*/
#include<stdio.h>
int main(){
    int n,even=0,odd=0;
    printf("Enter the Number of elements: ");
    scanf("%d",&n);
    int C[n];
    printf("Enter The Elements Of The Array: ");
    for(int i=0;i<n;i++){
        scanf("%d\n", &C[i]);
    } 
    for(int i=0;i<n;i++){
        printf("%d ",C[i]);
    }printf("\n");
    for(int i=0;i<n;i++){
        if(C[i]%2==0){
            even++;
        }else{
            odd++;
        }
          
    }
    printf("Even Numbers are %d\n",even);
    printf("Odd Numbers are %d\n",odd);
}