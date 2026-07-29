// write a c program to print all arrary elemets 

// input = {20,30,40,50,60}
// output = 20 30 40 50 60

// #include <stdio.h>

// int main(){

//     int i ;
//     int arr[] = {20,30,40,50,60};

//     for(i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
 
//     return 0;
// }

// write  a c program to print alternative elements of an arrary ?

// input = {20,30,50,60,70,80, 90};

// output :-- 20 50 70 90 
// i = i+2;

// i = 0 

// arr[i] = arr[0] == 20;

// incremnt i=i +2 ; 0+2 = 2;
// arr[2] = arr[2] == 50;

// #include <stdio.h>

// int main (){
//     int arr[10]= {10,40,50,30,20,45,57,89,90,67};
//     int i ;

//     for(i=0;i<10;i=i+2){

//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// write a  program to print array elemts in reverse order?

// arr[]={10,20,30,40,50}

// output = 50 40 30 20 10

// #include <stdio.h>

// int main(){

//     int arr[5]= {10,20,30,40,50};
    
//     printf("Original arrary \n");
//     for(int i= 0;i<5;i++){
//         printf("%d",arr[i]);
//     }

//     printf("\n\n");

//     printf("reversed arrary\n");


//     for(int i=4;i>=0;i--){
//         printf("%d ",arr[i]);
//     }

//     printf("\n\n \n");

//     printf("Original arrary \n");
//     for(int i= 0;i<5;i++){
//         printf("%d",arr[i]);
//     }

//     return 0;
// }





// arr[6] = {10,20,30,40,50,60};

// arrar elemnts n last index n-1;

// // 6 elements, last index = 5

// index 0, 1, 2,3,4,5

// two swap int 





// int arr[5] = {10,20,30,40,50};

// arr[0]= 10;
// arr[1]=20;
// arr[2]= 30;
// arr[3]=40;
// arr[4]=50;

// arrar of elements : n = 5
// last index = n-1 = 5-1= 4

// arr[0] =arr[4] ===> 10 = 50

// arr[1]= arr[3] ===> 20 = 40

// arr[2] ==

// middle  30 alwasy middle element


// int arr[6]= {10,20,30,40,50,60};

// arr[0]= 10;
// arr[1]= 20;
// arr[2]= 30;
// arr[3]= 40;
// arr[4]= 50;
// arr[5]= 60;


// arr[0] = arr[5] ===> 10 = 60;

// arr[1]= arr[4] ===> 20 = 50;


// arr[2] = arr[3] == 30 === 40



// int arr[5] = {10,20,30,40,50};


// index 0 1 2 3 4 

// last index n-1 ==> 5-1 = 4

// n - i -1 = 

// dry code ----->

// step 1
// i = 0 
// formula 
// n - i - 1 = 5 - 0 - 1= 4

// arr[i] = arr[n-i-1];

// arr[0] = arr[n-i-1] ==> arr[5-0-1] ==>arr[4];
// arr[0] = arr[4];

// 10 =50

// second loop  i = i+1 = 0 +1 = > 1

// arr[i] = arr[n-i-1]

// arr[1] = arr[n-i-1] ==>arr[5-1-1]===> arr[3]

// arr[1] = arr[3]

// 20 = 40 

// third lop i = i +1 >> 1+1= 2
// i = 2
// n - i-1 = 5-2-1 = 2

// arr[2] = arr[n-i-1]
// arr[2] = arr[2]

// 30 =30
//  arrary elemts odd swap n/2 times 5 / 2 ==>2 times 

//  array  elemts 6  swap n/2 = 6 / 2 = 3 times 

#include <stdio.h>

//  void reverseArray(int arr[],int n){

//     for(int i = 0; i < n/2; i++){

//         int temp = arr[i]; // temp varibale created 
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
//  }

//  int main(){
//     int arr[]= {10,20,30,40,50,60};
//     int n = 6;
//     reverseArray(arr,n);
//     printf("reverseed arrary\n");

//     for(int i = 0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     return 0 ;
//  }


 // write a program to count how many times even or odd number in present array


int main(){
    int arr[100];
    int size;
    int even = 0;
    int odd= 0 ;

    printf("enter Size:");
    scanf("%d",&size);

    for(int i =0 ;i<size;i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("\n even NUmber = %d",even);
    printf("\n odd NUmber = %d",odd);
    return 0;
}


rohit = 90
alok = 95;
rishi = 54;
alok2= 98
asus = 87

frist  alok2 
second place = alok1


// write a c pgram to find  the largest elemts in arrary ?

// input ={20,30,50.90,80};
// output = 90

int i , largestNumber;
int size ;// what is size
int arr[100];

printf("enter elemts");
scanf("%d",&size); // let size = 6



for(i =0;i<size;i++){
    pritnf("enter elemets %d",i+1);
    scanf("%d",&arr[i]);
}


arrar[6] = {10,20,30,40,50,60}
 10 elemts 


largestNumber= arr[0]; 10 




for(i= 1;i<size;i++){
if(arr[i]>largestNumber){
    largest= arr[i];
}
}

printf("largest number = %d",largest);









