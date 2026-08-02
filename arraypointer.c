#include <stdio.h>

// int main(){

//     int arr[5] = {30,40,50,10,20};

//     int *ptr = arr;

//     printf("%d\n",arr);
//     printf("%d\n",ptr);
//     printf("%d\n",*ptr);
// }


// int main(){

//     int arr[6] = {30,40,50,90,78,32};

//     int *ptr = arr;

//     printf("%d \n",arr);//address first elemts 
//     printf("%d\n",ptr); // addrdss of first elements 
//     printf("%d\n",*ptr); // value 
//     printf("%d\n",(ptr + 1)); // addrss of second elements 
//     printf("%d\n",*(ptr + 1)); // value of second eleemnts
//     printf("%d\n",(ptr +2));
//     printf("%d\n",*(ptr+2));

// }


// write  a program to print all elements of arrary using pointer

// int main(){
//         int arr[6] = {30,40,50,90,78,32};

//     int *ptr = arr;
   

//     for(int i = 0 ;i<6;i++){
//         printf("%d\n",*(ptr + i));
//     }

// }

// write a program to find the sum of all arrary elements using pointer. 

// int main(){

//     int arr[5] = {20,30,40,50,60};
//     int *ptr = arr;
//     int sum = 0;


// for(int i = 0;i<5;i++){
//     printf("%d\n",*(ptr + i));
//     sum = sum + *(ptr + i ); 
// }

// printf("Sum: %d\n", sum);
// return 0 ;

// }

// find laregst elements using pointer ?

// int main(){

// int arr[5]= {10,80,20,40,50};
// int largest =arr[0];
// int i;

// for(i =0 ;i<5;i++){

//     if(arr[i]> largest){
//         largest = arr[i];
//     }

// }

// printf("laregst value is %d", largest);

// return 0;
// }

//  arry {10,20,30,40}
// pairs of elements an array


// output----->

// (10,10)
// (10,20)
// (10,30)
// (10,40)
// (20,10)
// (20,20)
// (20,30)
// (20,40)
// (30,10)
// (30,20)
// (30,30)
// (30,40)
// (40,10)
// (40,20)
// (40,30)
// (40,40)


int main(){

    int arr[4]= {10,20,30,40};

    for(int i=0;i<4;i++){

        for(int j =0; j<4;j++){ // compare with every elements 

            printf("(%d %d) \n",arr[i],arr[j]);
        }
    }
}



arr[4]= {10,20,30,40};
unique pairs from an array

output:---

(10,20)
(10,30)
(10,40)
(20,30)
(20,40)
(30,40)

for(int i= 0;i<4;i++){

    for(int j = i+1;j<4;j++){

        printf("(%d ,%d)\n",arr[i],arr[j]);
    }
}

step 1;  i = 0 yess   

int j = i + 1 ==> 0 + 1 = 1

arr[i],arr[j] ===> arr[0],ar[1] === (10,20)

step  j =  j++ ==> j = j+ 1= 1+1 ==> 2  

condation ===> j< 4 ===> 2< 4 yes 

arr[i],arr[j] ==> arr[0],arr[2] ===>  (10,30)

step  j++ ===> j = j+ 1 ==> 2+1= 3
con===> j<4 ==> 3<4 yes true ---
arr[i],arr[j]===> arr[0],arr[3]===> (10,40)

step j++ ==> j+1 ==> 3+1==>4 

conda==> 4<4 false 










    

    



