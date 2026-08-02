#include <stdio.h>

// int main(){

//     int arr[5] = {10,20,30,40,50};

// for(int i = 0; i<5;i++){
//     printf("%d %p\n",arr[i],&arr[i]);
// }    

// return 0;
// }

// index 0
// value = 10 , address = 1004;
// index 1 
// value 20  , address = 1008;
// index =2 
// value = 30 , address = 1012;
// index 3 
// value 40 . address = 1016 ;
// index 4 
// value 50 . address = 1020 ;

// why addres increse 4 bytes 


// Arrary Name(arr) and arr[0] same output / same address 

// int arr[6] = {10,20,30,40,50,60};

// index = 0 
// value = 10  address 100;
// index = 1
// value 20  address = 104;
// index 2
// valkue 30 address = 108;

// what is arr ?
// array Name 

// arr address of arr[0] 


// arr === address offirst index 

// &arr[0] == adress of the first elements

// arr[0]= value of first index 

int main(){
    int arr[5] = {20,30,40,50,60};
    printf("%d\n",arr);//123456
    printf("%d\n",arr[0]);//20
    printf("%d\n",&arr[0]);//123456
    return 0 ;
}

arr === &arr[0] 


&arr[0] == 10

int arr[5] = {20,1,3,4,2};

