#include <stdio.h>

int main(){

int days;
printf("Enter days:");
scanf("%d",&days);

int result = days % 7 ;

switch(result){
    case 1 : 
        printf("Monday");
        break;
    case 2 : 
        printf("Tuesday");
        break;
    case 3 : 
        printf("Wednesday");
        break;
    case 4 : 
        printf("Thursday");
        break;
    case 5 : 
        printf("Friday");
        break;
    case 6 : 
        printf("Saturday");
        break;
    case 7 : 
        printf("Sunday");
        break;
    default : 
        printf("Invalid day");
        break;
}






// agr today is monday then ajj se 30 day kya hoga

//     after 3 days
//     after 7 days
//     after 100 days

//     monday -->1
//     tuesday -->2
//     wednesday -->3
//     thursday -->4
//     friday -->5
//     saturday -->6
//     sunday -->7

//     days % 7 = 0 ----> monday;

//     reamin = 12 % 7; 5;----> friday
//     day(1)--> monday
//     day(2)---> tuesday;
//     day(3)-----> wednesday

// exaplnes :-
//  after 30 days 


//  30 % 7 = 2----> tuesday





    // int x = 2;

    // if(x=1){
    //     printf("X is equal to 1");
    // }
    // else{
    //     printf("X is not equal to 1");
    // }
    // return 0;

    // output :---

    // A).  printf("X is not equal to 1");

    // B). printf("X is equal to 1");
    // C). Both A and B
    // D). None of the above



    // compiler 
    // outoput 

    // x= 2
    //  x = 1



    
}



/*

9.   Write a C program to display the day of the week using a number.

1 → Monday
2 → Tuesday
3 → Wednesday
4 → Thursday
5 → Friday
6 → Saturday
7 → Sunday


*/


/*

Write a C program to find the largest of three numbers.

rohit = 90
rahul = 80
aman = 65

who has the higest marks :- 
rohit (90)


A= 20;
B= 15;

C= 10;


A > B 

A is greater than B

A > C 

A is greater than C



A, B, C  ======   

A > B AND A > C  ------->  yes --- printf(message)

else if (b > C){
printf("B is greatest");
}
else{
printf()
}







*/





/*
Write a C program to display the day of the week using a number.

1 → Monday
2 → Tuesday
3 → Wednesday
4 → Thursday
5 → Friday
6 → Saturday
7 → Sunday


step1 :- take day as  number
step2 :- check if day is  monday , ya tuesday , thrusday , fridaahsjdbshdbhjhj


solution is here:--

    int day;

    printf("Enter Day Number(1-7) :");
    scanf("%d",&day);

    if(day ==1){
        printf("Day is Monday");
    }
    else if(day ==2){
        printf("Days is tuesday");
    }
    else if(day ==3){
        printf("Days is wednesday");
    }
    else if(day ==4){
        printf("Days is thursday");
    }
    else if(day ==5){
        printf("Days is friday");
    }
    else if(day ==6){
        printf("Days is saturday");
    }
    else if(day ==7){
        printf("Days is sunday");
    }
    else{
        printf("Invalid day");
    }


*/



//3.Check Leap Year

/*

leap year = 366 days  instead of 365 days 

year % 4 == 0

2005 % 4 == 0 (leap year ) == not leap year 

step 1:- take the year from the user 
step2 : - divide the year by 4 using modulo operator 
step3:- if remainder is zero  then leap year 

int year ;
printf("Ether year :");
scanf("%d",&year);
if(year % 4 == 0){
    printf("leap year");

}
else{
    printf("not leap year");
    
}

return 0;


why 2000 is leap year yaa 365 se 366 kyu gaya ?

science , socail science 
one revolution  sun ke around earth 365.2587 days ;

1 year = 365 days + 5, 6  hour
2 yar = 365 days + 5,6 hours 
3 year  = 365 days + 5,6 hours
4 year 365 days + 5,6 hours  =  

6 + 6+ 6+ 6 = 24 hours = 1 days 
 february 1 increase 29 days 


*/




// grade calculator 

/*
marks=78;

marks >= 78 ----> grade A
marks >= 75 ---- grade B
marks >= 50 ---- grade C
marks >=35 --- failed

int marks = 34;

    if(marks >= 75){
        printf("grade A");
    }
    else if(marks >= 70){
        printf("grade B");
    }
    else if(marks >= 50){
        printf("grade C");
    }
    else if(marks >= 35){
        printf("grade D");

    }
    else {
        printf("failed");
    }

return 0;



*/


/*
int num = 10 

check number is greater than 10 ya not if greater than 10 then print "number is greater than 10" 
and num is equal then print "number is equal to 10" if number is less then print "number is less than 10"


*/






/*

if ---- condation check 

else if--------- condation cehck

else if  ----- another condation 

else if- --------- another condation

else   it nothing is true
 
*/






// // syntaxx :----
// // if - else 

// if(condation){
//     // do soemthing if true 
// }
// else {
//     // do something if false 
// }

// //