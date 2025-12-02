/*Count positive, negative, and zero elements in an array.*/
#include<stdio.h>
int main(){
    int n,pos=0,nega=0,zero=0;
    printf("Enter the Number of elements: ");
    scanf("%d", &n);
    int C[n];
    printf("Enter The Elements Of The Array: \n");
    for(int i=0;i<n;i++){
        scanf("%d\n", &C[i]);
    } 
    for(int i=0;i<n;i++){
        printf("%d ",C[i]);
    }
    for(int i=0;i<n;i++){
        if(C[i]>0)
            pos++;
        else if (C[i]<0)
            nega++;
        else
            zero++;
    }printf("\n");
    printf("The positive numbers are %d\n",pos++);
    printf("The negative numbers are %d\n",nega++);
    printf("The Zeros numbers are %d\n",zero++);
}