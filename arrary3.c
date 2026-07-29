#include <stdio.h>

// int main(){

//     // int marks1= 45;
//     // int marks2= 65;
//     // int marks3=85;

//     int marks[3];
//     printf("Enter your first Marks:");
//     scanf("%d\n",&marks[0]);
//     printf("ENter your Second marks:");
//     scanf("%d\n",&marks[1]);
//     printf("ENter your Third marks:");
//     scanf("%d\n",&marks[2]);



//     printf("all you marks ::");
//     printf("your first marks %d\n",marks[0]);
//     printf("your second marks %d\n",marks[1]);
//     printf("your third marks %d\n",marks[2]);

//     return 0;
// }

// // update the array value 
// int main(){
    
// int arr[5]= {30,50,20,70,89};

// printf("before update index of 2 value: %d\n", arr[2]);

// arr[2]= 100;

// printf("updated array value ::");
// printf("arr[2] = %d\n", arr[2]);
    
//     return 0;
// }


// int  main(){

// int arr[5];
// int index,value;

// for( int i = 0; i < 5; i++){
//     scanf("%d", &arr[i]);
// }

// printf("\n before update  arrary value\n");
// for(int i = 0 ; i< 5; i ++){
//     printf("%d ", arr[i]);
// }

// printf("Enter index to update:");
// scanf("%d",&index);

// printf("enter your value ");
// scanf("%d",&value);

// arr[index] = value;


// printf("\n update arrary value\n");
// for(int i = 0 ; i< 5; i ++){
//     printf("%d ", arr[i]);
// }

// return 0;

// }







// //arrary as function argument:--

// void function_name(int arr[],int size){

// }

// void fucntion_name(int *arr , int n){

// }

//calling fucniton

// function_name(arr,n);

void printNumber(int arr[],int n){
    for(int i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}

int  main(){
    int arr[]= {1,2,3,4,5,6,7,8};
    printNumber(arr,8);
    return 0;

}

// write a fucntion to rever an arrary?

int arr[5]= [1] [2] [3] [4] [5];

arr element n 

last iindex n- 1;

golden rules swap 
int a ;
int b ;
int temp;
temp = a;
a = b ;
b = temp;

now come to arrary side

sppose 10 20 30 40 50  60 
index  0   1   2   3   4 5

we want 

50 40 30 20 10 


which value shoul swap
first condation 
10 <----> 50

second  condation 

20 <--->40


middle 
30 <---->30(no changed)

n/2 times swap --- 6/ 2 = 3 swap

last index  n-1 

n = 5 

for(int i= 0;i<n;i++){

}



last inded n-1 



arr[n-i-1];

arr[5-0-1] = arr[4];

sppose 10 20 30 40 50 
index  0   1   2   3   4

we want 

50 40 30 20 10 

void reverseArray(int arr[],int n){
    for(int i = 0; i < n/2; i ++){
        int temp = arr[i];
        
        arr[i] = arr[n-i-1];

        arr[n-i-1]= temp;
    }
}

int main(){
    int arr[]={10,20,30,40,50};

    int n =5;
    reverseArray(arr,n);
    printf("\n Reverseed Arrary :\n");

    for(int i = 0 ;i<n;i++){
        printf("%d ",arr[i]);
    }

}

Arrary Traversal 

int arr[100];

printf("%d",arr[0]);
printf("%d",arr[1]);
printf("%d",arr[2]);


introduce loop :- traversal array;

for(int i=0;i<100;i++){
    printf("%d",arr[i]);
}

step i = 0 ;

logic check  o<100 == yes == printf(arr[0])

increemnt i  i +1; 0+1;= 1
logic check 1<100 ; true ; == printf(arrp[1]);

time complexity 
o(n)=
loop run 100 times 

real life exapmles:--

rohit sir 
roll1 --- roll2 ----roll3---roll4 ----roll5-------

totla student 30 

int arr[10];

for(int i = 1; i <10;i++){
    printf("%d",arr[i]);
    scanf("%d",&arr[i]);
}

Arrary starts from index 0.











