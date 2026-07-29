#include <stdio.h>

void reverseArray(int arr[],int n){

    for(int i = 0; i < n/2; i ++){
        
        int temp = arr[i];
        
        arr[i] = arr[n-i-1];

        arr[n-i-1]= temp;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};

    int n =6;
    reverseArray(arr,n);
    printf("\n Reverseed Arrary :\n");

    for(int i = 0 ;i<n;i++){
        printf("%d ",arr[i]);
    }



}

