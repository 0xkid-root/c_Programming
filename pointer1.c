
#include <stdio.h>

int main(){

    int a = 50;
    int *ptr =  &a;
    int **pptr= &ptr;
    
    printf("address of a is %p\n",&a);
    printf("address of a is %p\n",ptr);
    printf("address of a is %p\n",pptr);

    printf("value of a is %d\n",a);
    printf("value of a is %d\n",*ptr);
    printf("value of a is %d\n",**pptr);



}


/*
create a varible x =40;
create pointer  pointer  to pointer create  and print 

*/

/*
chnaged the value of a variable using a pointer?



   int a = 10;
   int *ptr = &a;

   printf("before value of a is %d\n",a);


   *ptr = 50;

   printf("after value of a is %d\n",a);







*/


/*

varibale 

1.)int a = 10 ;

memory :--

a :- variable 

int :- data types

10 :- value


2.) int roll_number = 21;

int :- data types
21 :- value
roll_number :- variable



memory :--

int a = 10 

computer RAM me memory allocate karta hai 

int a = 10

a variable 
value 10
address :- 1000

real life examples:--



House Number :101
Person : gaurav kumar

gaurav :-value 
101:- address


pointer kya hota hai ?


aise vairable jo store kare address of another vairable.





Syntax of Pointer ?




int age = 21;
int *ptr = &age;
int _age = *ptr;


more concept :--
* = value at address operator
& = address of operator

int *ptr;
float *ptr;
char *ptr;

format specifier 
%d :- int
%f :- float
%c :- char
%p :- pointer





pointer to pointer -----

int a = 1000;
int *ptr = &a;
int **ptr2 = &ptr;


*/