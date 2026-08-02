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







input int arr[5] = {10,40,20,50,30};

firstLargetNumber : 50
secondLaregtNumber = 40;

current arrary :- 0, 1,2,3,4, 

int firstlargestNumber = arr[0]; == 10 
int secondLargestNumber = arr[0]; == 10 

current NUmber = 40

currentNUmber > firstLargestNumber{
    firstLargestNumber = currentNUmber;
}

40 > 10 --> yes

largestFirstNumber = 40;
secondLaregtNumber = 10;

currentNumber = 20 ;

20 >  40 no 

currentNumber > secondLargestNumber
20 > 10 --> yes 

secondLaregtNumber = 20 

firstLargetNumber = 40 
secondLaregtNumber = 20

step 4 -------------------------------
current Valyue = 50 
currentValue > firstLargestNumber

50 > 40 ---> yes 
update firstLargestNumber = 50 ;
secondLargestNumber = 40 ;


step 5 --------------------------------

current Value ---> 

currentValue > firstLargestNumber
30 > 50 ----> no 

currentValue> secondLaregtNumber
30 > 40 --- no 

final anaswer firstLargestNumber = 50 
secondLaregtNumber =  40 


step ----
10  =====> firstLargestNumber, secondLaregtNumber ===> 10  (initiaal values )

step 1
40 ======> firstLargestvalue  == 40 , secondLaregtNumber === 10  (40 becomes the new largest )

step 2
20 ======> firstLargestvalue  == 40 , secondLaregtNumber === 10  (20 is not larger than 40, but 20 is larger than 10, so secondLargest becomes 20)`

step 3


50 ==== > i firstLargestNumber == 50 , secondLaregtNumber == 40

step 4

30 ====> 



int main(){

    int arr[5] = {10,40,20,50,30};

    int largest = arr[0]; //  ==>40 
    int secondLargest = arr[0]; //===> 10 

    for(int i=1;i<5;i++){

        if(arr[i]>largest){ 
            secondLargest = largest; 
            largest = arr[i]; 
        }
        else if(arr[i]> secondLargest){  
            secondLargest = arr[i]; 
        }
    }

    printf("first Largest Number = %d\n",largest);
    printf("secoond laregst number = %d",secondLargest);

}



what  a memory ?

examples :- int a =10 ;
            int b =20 ;

            value  :- 10 , 20
            address :- 100 , 104



            //////////////// start ----------------

int arr[5] = {10,20,30,40,50};

arr == &arr[0];

arr = array name ;
arr = address of first element;

arr[0] = value = 10; address = 100;
arr[1] = value = 20; address = 104;
arr[2] = value = 30; address = 108;
arr[3] = value = 40; address = 112;
arr[4] = value = 50; address = 116;

arr == address of first element;
&arr[0] == address of first element;
arr = pointer 

normal varibale ====> value  store ; int a = 5
pointer variable ===> address store ; int *p = &a

Real life examples:- 

int a = 10;
int *ptr = &a;

ptr ===> variable name , int data_types ;

 * ===> pointer ke value ko access 
& ===> address ko batata 

// connect arrary and pointer 

int arr[5] = {10,20,40,50,80};
arr[0] value = 10; address = 1000;
arr[1] value = 20 address = 1004;
arr[2] value = 40 address = 1008;
--
--
--



int *ptr = arr;

ptr ==> output ? 1000

arr ==> output  ? 1000

*ptr =  


//===============arrary -------

int arr[5] ={10,20,30,40,50};

arr[0]= 10 address == 1004
arr[1]= 20; address == 1008
arr[2]= 30; address == 1012
arr[3]= 40; addrres == 1016
arr[4]= 50; address = 1020

/// pointer 
int *ptr = arr;
ptr = address ==> 1004

(ptr + 1)  ==> incrase 4 bytes  data_int => 4 bytes (1004 + 1*4)=> 1008 == 1005 ===> 

(ptr+2) ==> 1004 + 2*4 == 1004 + 8 ===> 1012;

ptr + 1 = 1008

current address + 1* size of data_type 

1004 + 1 * 4 === > 1004 + 4 = 1008 

(ptr + 1)  == output address of second elemens;
(ptr+ 2) == output address of third element;

*(ptr + 2)===> value 













            









 



