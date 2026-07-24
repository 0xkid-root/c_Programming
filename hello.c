#include <stdio.h>

int main() {

    
    int y = 30 ;
    int Y = 56;
    char star= 'A';
    char name= '@';
    float pi = 3.14;
    int student_age = 24;

    //Create a variable to store your name and print it.

     char myName[]  = "ankit";

    printf(" print your name %s \n", myName); 
    
    printf("Your y value is %d \n", y);
    printf("Your star value is %c \n", star);
    printf("your pi value is %f \n",pi);
    printf("yor Y value is %d \n",Y);
    printf("student age is %d \n", student_age);

     int ram = 45;


    //  format specifiers:- 

    // int -----  %d
    // char -----  %c
    // float -----  %f
    // double -----  %lf
    // string -----  %s

    //  sizeof: operator jo data type ke size ko batata hai

    printf("your y value is %d bytes \n", sizeof(y));
    printf(" your pi value is %d bytes \n ", sizeof(pi));



    return 0;
}

// rules of varilable ------
 // A) variable case senesitive what is case senestive :- A =! a)


// step explanation :-

// step1: hello.c file bante 

// steo2:- hello.c ko compiler ke pass vejte hai 

// step3:-  compiler check karta hai  :-
//  semicolon present hai ya nahi
// ruels follow ho rh hai ke nahi
// systax correct hai ke nhi 

// step 4:- executable file banta hai .


// hello.c -----> comiler c ------> a.exe (file banta hai jo executable file hote hai)



