#include <stdio.h>


// int main(){

//     int num = 58392;
//     int remainder;
//     int smallest = 9;
    
//     while(num > 0){
//         remainder = num %10; 
        
//         if(remainder < smallest){ 
//             smallest = remainder;
//         }
//         num = num/10 ;
//     }

//     printf("Smallest Digit is %d", smallest);
// }



elments = n

last index =max - 1;

int arr[5] ={50,40,30,20,10};

arr[0] = 50;
arr[1] = 40;
arr[2] = 30;
arr[3] = 20;
arr[4] = 10;
jitne elemnt plus +1 == 5 +1 = 6 last index is 6 

last idnex = 4 
arrary elements = 5 -1 = 4

arrary n elements = = 
last index = n - 1;






write a c program  to find the average of elemnts in an array ?

int arrar[] = {20,30,40,50,70};
int size = 5;
int arr[5] = {20,30,40,50,70};

int i,sum = 0;
float average;

for(i=0;i<size;i++){
    sum = sum + arr[i];
}

average = sum/size;

printf("Sum of Arrary Elemets %d\n", sum);
printf("Average of Arrary Elemets %f\n", average);




/*
find the largest digit in a number

input 58392
output 9


number % 10 == last digit = 2
num = num / 10 = remove last digit  = 5839 

int num = 58392;
int remainder;
int largest = 0;

remainder = num % 10;2

while(num>0){

// logic dalu gaa sbhdbshj

if(remainder > largest){ 
largest = remainder
}

}







*/



/*
check whether a number is paliderom ya not 

int num = 123 

armstrong number 

sum of cubes of each digits = orginal number 

123 =1 + 2*cubes + 3 *cubes = 123
1 + 8 + 27 = 36


153 ==> 1* cubes + 5 * cubes + 3 * cubes ==

1 + 125 + 27 = 126 + 27 = 153


num % 10 == last digit  == 

153 % 10 == > 3 

sum = sum +(remainder * remainder * remainder) ==> 0 + (3*3*3) ===> 27 
num = num / 10 ==>15


*/


// write  a c program to check armstrong number 

// input  153 armstrong number 
// output 153 is armstrong number 

// input 123 --> not armstrong number 