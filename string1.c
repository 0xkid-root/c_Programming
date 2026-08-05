data types: int,char,float , 

char a = 'a';
char b = 'a'
 
my name is gaurav tiwari



string collection of characters

collection of characters array thet ends with \0 
\0 means null character

char a = 'G';
a = variable
data_type char 
value = 'G';
adress = &a===> 1002

why \0? .... what is the role of \0 ?\

\0 null character compiler ko batata hai humare string end ho chuka hai 

\0 ==== compiler khud se add kar deta hai 

examples :-

char name[] = {'G','A','U','R','A','V','\0'};
output = GAURAV 

character VS string

memory allocation :-

index     value   address

name[0] = 'G'; address ==> 1000
name[1]  'U' ; address ==> 1001
name[2]  'A' ; address ==> 1002
name[3]  'R' ; address ==> 1003
name[4]  'A' ; address ==> 1004
name[5]  'V' ; address ==> 1005
name[6]  '\0' ; address ==> 1006


ways to declare a string 

method 1:-

char name[]= {'g','a','u','r','a','v','\0'};

method 2--

char name[] ="Gaurav";

actual memeory 

name[0] = 'G' , address = 1000
name[1] = 'a', address = 1001
name[2] = 'u', address = 1002
name[3] = 'r', address = 1003
name[4] = 'a', address = 1004
name[5] = 'v', address = 1005
name[6] = '\0', address = 1006



string format specifier :--

%s






fgets():-- rspace read


syntax =====
fgets(str, size, stdin);

char str[100];
str = string name 

size = maximum size of array

stdin:- standdard input 



char name = max size 50;

name[] ===> array of characters
max to max 49 store characte ------> last position hoge \0 (null character)

max character  = n 

n-1 characters;
 50 -1 = 49 

 fgets()

 puts() ====> puts(str);

 int a = 10 
sizeof(a) =  4
sizeof(str) =  50 *  data_types size = 50 * 1 =  50 bytes 


printf() vs puts()

both print the string 
printf===> automatically not added new line
puts= > automatically add new line 




string using pointer :--


string ===> array 
string collection of character array 

string ==> array ===> array ==> pointer 

int arr[5] = {20,50,60,70,90};
arr = array name 
arr => address of first elements 
pointer => pointer is a variable that stores the address of another variable 


char name[] ="pieCoding"; 

name == array name 
name = address of first character 
name[0]= p;

char *str = "hello world";

str == pointer name 
hello world :- stored memory 
str = stores the address of the first elements;

memory location

char *str = "Hello";

pointe stores address 

str[0] = h  address = 1000
str[1] = e  address = 1001
str[2] = l  address = 1002
str[3] = l  address = 1003
str[4] = o  address = 1004
str[5] = \0  address = 1005


str = 1000;



char str[]= "hello world!"; // initialized not possible 

char name[]="gaurav";
printf("%s \n",name);
name = "sourav";
printf("%s \n",name);


pointer 

char *str = "hello world!";// initialized possible 

char *str = "hello world";
printf("%s \n",str);

str="gaurav!";

printf("%s \n",str);
return 0;


