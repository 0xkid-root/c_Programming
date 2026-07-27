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


int  main(){

int arr[5];
int index,value;

for( int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
}

printf("\n before update  arrary value\n");
for(int i = 0 ; i< 5; i ++){
    printf("%d ", arr[i]);
}

printf("Enter index to update:");
scanf("%d",&index);

printf("enter your value ");
scanf("%d",&value);

arr[index] = value;


printf("\n update arrary value\n");
for(int i = 0 ; i< 5; i ++){
    printf("%d ", arr[i]);
}

return 0;

}


// write a c program to count how many even and odd number are present in an arry 

int arr [10]={12,23,24,7,19,20,30,34,78,90};

int even= even+1;
int odd = odd+1;

even odd



