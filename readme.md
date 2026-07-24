gcc filename (gcc is compailer of c langauge)

variables:- variable is the name of memory location to store data

int number =24;
char star = '*';
int age= 22;
float pi = 3.14;

{ float rules :-
The integer 10 is automatically converted to 10.0 (float format).

This is called implicit type conversion.
}

Variables rules :--

variables are case sensitive
1st character is alphabet or '_'
no common/blank space

No otehr symbol other than '_'

int a = 20;
int A = 40
A= 45; (here i m update the value)


DATA TYPES:- kes tarike ka data app  memory me store kar rh hai  and jes tarike ka data hota hai utna he memory lega
char or signed char(1 bytes)
unsigned char (1 bytes)
int or signed int(2 bytes)
unsigned int(2 bytes)
float(4 bytes)
double(8 bytes)
long double(10 bytes)

constants :- value dont chnaged (fixed)
types of constants: 
1) integer constants
2) real constants
3) character constants

Integer Constant (Simple numbers)

👉 Just normal numbers
No dot
No quotes


10
25
-5

2️⃣ Real Constant (Decimal numbers)

👉 Numbers with dot (.)

3.14
2.5
0.99

✔ Has decimal point

Character Constant (Single symbol)

👉 Only one character inside single quotes

'A'
'B'
'1'
'*'

✔ Must use ' '
✔ Only ONE character

Keywords :- reserved words that have special meaning to the compiler 

 kuch keywords hai jo reserved hai C language  me usko use nhi krna chhaiye apne variable banate time 


auto,double,int,struct,break,float,long,char,switch,return,void,while,if,do,default,const,short,union,volatile,sizeof,for,

ye special  word hai jesme meaning fix hai jo compiler ko pta hai 

jaise human body ka structure hota hai waise he sare programming ka apna structure hota hai


#include<stdio.h> (preprocessor directive)
is line ko humasa humare code me likhna hai warna nhi chale ga humara code 

int main(){
    printf("Hello world!");
    return 0;
}

main function se kese v program ka execution suru hoga line by line 

; (iska mtlba hota hai jo humne line likha hai wo khtam hua yaha par abb next line se start hoga )


return 0 means ye batata hai ke yaha zero error hai  humara code succefully executes kar gaya koi error nhi aaya.


What is scanf()?

👉 It is used to take input from user


1. #include <stdio.h> — in the simplest way

👉 Think like this:

You want to use printf() or scanf()
But C language says:
👉 “I don’t know these unless you import them”

So you write:

#include <stdio.h>

👉 Meaning:

“Hey C, give me access to input-output tools”

are in a kitchen 🍳
stdio.h = kitchen box (tools)
printf() = spoon

👉 Without opening the box → you can’t use spoon ❌
👉 With #include <stdio.h> → you can use spoon ✔️

🔹 2. What is printf()?

👉 It is used to print (show) output on screen

printf("Hello");

👉 Output:

Hello