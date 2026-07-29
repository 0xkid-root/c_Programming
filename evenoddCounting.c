
// write a c program to count how many even and odd number are present in an arry 

// int arr [10]={12,23,24,7,19,20,30,34,78,90};

// int even= even+1;
// int odd = odd+1;

// even odd

#include <stdio.h>

int main(){

    int arr[100];
    int even = 0;
    int odd = 0;
    int size;

    printf("Enter Size:");
    scanf("%d",&size);

    for(int i = 0; i< size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0 ; i< size;i++){
        printf("%d ",arr[i]);
        
    }

    for(int i = 0 ; i < size ; i++){

        if(arr[i]%2 ==0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even: %d\nOdd: %d",even,odd);




    
    


    
    return 0;
}