
#include <stdio.h>
/*

write a function  to print all even number from 1 to N.

if  n is less than or equal to 0 , print invalid number 

 if else
 for
*/

void evenNumbers(int n){
    
    if(n <= 0){
        printf("Invalid Number");
        return;
    }
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n",i);
        }

    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    evenNumbers(n);
    return 0;

}








/*


// swap of two number 

int a = 10;
int b = 15;

output 
int a = 15;
int b =10;

////////


int a = 15;
int b = 10;

bucket ------

bucket A 
bucket B 
bucket C 


step 1

bucket a  drop to the bucket C 

bucket free

step 2

bucket B usko dal duga bucket a;

step 3

bucket c utho ko dal dege bucket B;




*/








/*
Write a C program that prints numbers from 1 to 100 using a for loop.

Rules:

If the number is divisible by 3, print "Fizz".
If the number is divisible by 5, print "Buzz".
If the number is divisible by both 3 and 5, print "FizzBuzz".
Otherwise, print the number.

int i ;
for(i=1;i<=100;i++){
if(i % 3 ==0 , i % 5 == 0){
    printf("FizzBuzz\n");
}
    else if(i % 3 == 0 ){
    printf("fizz\n");
    }
    else if (i % 5 == 0 ){
    printf("Buzz\n");
    }
    printf("%d\n",i);


}


*/

