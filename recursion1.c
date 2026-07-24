#include <stdio.h>

//Q.) Sum of first n natural numbers


// int sum(int n ){
//     if(n == 0){
//         return 0;
//     }
//         return n + sum(n-1);

// }

// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d", &n);
//     printf("sum of first %d natural numbers is %d", n, sum(n));
//     return 0;
// }


/*
Q.) Sum of first n natural numbers
n => 1+2+3+4+5+6+7.................+n-1+n = sum(n-1) + n 

n = 20 ,
1+2+3+4+5+6

sum of N natural number = sum(n-1) + n 

n =5; 1 + 2 + 3 + 4+ 5  = n(5) => n(4) + 5;

n =4; 1 + 2 + 3 + 4  === n(4) ==> n(3) + 4
n = 3 ; 1+ 2 + 3   == > n(3) ==> n(2) + 3
n = 2 ; 1 + 2 ==> n(2) => n(1) + 2
n = 1 n(1) = n(1)
sum n natural number =  n + sum(n-1)

sum(n)==> sum(5)=== > num(4) + 5;  ==> 10 + 5 ==> 15
sum(4) => num(3) + 4 == 6 + 4 = 10
sum(3) => num(2) + 3 = 3 + 3 = 6
sum(2) => num(1) + 2 == 1 + 2 = 3  
sum(1) => num(1) + sum(0);1  = 1



*/



//factorial of N number 

// formula => factorial(n) => factorial(n-1) * n ;  

// int factorialNumber(int n ){
//     if(n == 0){
//         return 1;
//     }

//     return factorialNumber(n-1)*n;
// }


// int main(){
//     int n;
//     printf("Enter Number ");
//     scanf("%d",&n);
//     printf("Factorial of %d is %d", n, factorialNumber(n));
//     return 0;
// }



//Q). Write  a function to calculate percentage of a students from marks in science, math , english  & sanskrit?



float percentage(int science, int math, int english, int sanskrit) {
    int total = science + math + english + sanskrit;
    float percent = (total / 400.0) * 100;   // 4 subjects → max 400
    return percent;
}

int main() {
    float result = percentage(80, 70, 90, 60);
    printf("Percentage = %.2f%%", result);
    return 0;
}

0,1,1,2,3,5,8,13,21,34,55............