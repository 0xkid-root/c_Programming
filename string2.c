#include <stdio.h>


    // char name[] = "Gaurav";
    // printf("%s",name);

    // char name[50];
    // printf("Enter your name:");
    // fgets(name,50,stdin);
    // printf("Your Name is %s",name);

//     char str[50];
//     printf("Enter your Sentence :");
//     fgets(str, sizeof(str),stdin);
//     printf("Your sentence is : %s",str);
//    return 0;

// char name[] = "gaurav";
// puts(name);
// return 0;



//   char str[50];
//   printf("enter you sentence");
//   fgets(str,sizeof(str),stdin);
//   printf("Your sentence \n");
//   puts(str);

// char *str = "hello world";
// printf("%s \n",str);

// str="gaurav!";

// printf("%s \n",str);
// return 0;

// char name[]="gaurav";
// printf("%s \n",name);
// name = "sourav";
// printf("%s \n",name);

// int main(){

//     char city[] = "Lucknow";

//     printf("%c %c %c",city[0],city[3],city[6]);
//     return 0;

// }

// }

// int main(){

//     char str[] = "hello";

//     int i ;

//     for(i=0; str[i] != '\0'; i++){
//         printf("%c",str[i]);
//     }

//     return 0 ;
// }

// str[0] = 'h'
// str[1] = 'e'
// str[2]= 'l'
// str[3] = 'l'
// str[4]='0'
// str[5] = '\0'
 



/*
write a program to count number of characters in a string ?

piecodingschools
int i ;
int count = 0;
for(i = 0 str[i] != '\0';i++){
count++;
}

printf("number of character ",count);

*/
// int main(){
//     char str[100];
//     int count = 0;
//     int i ;
//     // scanf("%s",str);

    
//     fgets(str, sizeof(str),stdin);

//     for(i = 0 ; str[i] != '\0' ; i++){

//         count++;
//     }

//     printf("number of characters: %d",count);

// }


// write a program to print each character of a string in new line?

// input hello world

// output
// h
// e
// l
// l
// o
 
// w
// o
// r
// l
// d

// char str[100];
// int i ;

// fgets(str,sizeof(str),stdin);

// str = find ===> hello
// size of str = sizeof(str);
 
// for(i=0;str[i] != '\0'; i++){
//     printf("%c\n",str[i]);
// }

// str[i] =====>

// str[0] = h
// str[1] = e
// str[2] = l
// str[3] = l
// str[4] = o
// str[5] = \0




// write a program to count number of vowela in a string ?

// hello world;

int main(){

    char str[100];
    int count = 0;
    int i;

    fgets(str,sizeof(str),stdin);

    // string ==> hello world

    for(i = 0; str[i] != '\0';i++){

        if(str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u' || str[i] =='A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U'){
            count++;
        }
    }
    printf("Number of vowels: %d",count);

}



palindrome string 
madam
madam
palindrome string

char str[]= "madam";



index

str[0] = m ;
str[1] = a;
str[2]= d;
str[3] = a;
str[4]= m;
str[5] =\0;

str[4] == str[0] ==> m == m true

str[3] == str[1]  ===> a == a true 
 
str[2] == str[2] ===> d == d true
5/2 = 2 


length - i - 1;
 if i = 0 
5-0 -1 = 4 

if = 1 = 

5 - 1-1 = 3


for(int i = 0 ; i< lenght/2 ; i++){

}


    



















