int a[10] ={10,20,30,40,40,50,60,70,80,90};


array ko need  kyu hai 

exaplmes:--- 2 student marks ;

int marks1;
int marks2;
int marks3;
int marks4;
int marks5;

data_tyoes:-- int size  4 bytes ;

int marks[5];

int arr[];

outout : 
1).error
2)something print

int arr[] = {10,20,30};


size 3 . n =3 index = n-1==> 3-1=2

int a[5]={10,20};
output 

a[0]= 10;
a[1]=20;
a[2]=0;
a[3]=0;
a[4]=0;



10 students 
5 subjects

using 1d array

int maths[10];
int english[10];
int hindi[10];
int computer[10];
int science[10];

int marks[5][10];

2d array:-- array of array 

int marks[2][3];

       0  1  2
row 0 [] [] []
row 1 [] [] []

2 x 3 matrix 


2 = row
3 = column

row 0 ;
[] [] []
row 1

[] [] []

element == size_row * size_columns ==> 2* 3 = 6 elemnts;


int marks[3][2];
array 3 x 2 
3 row;
2==> column;
col    0  1       
row 0 [] []
row 1 [] []
row 2 [] []

size = number of elemnts * data_types of size = 6 *4 = 24 bytes 


golder ruls 2d array

data_type array_name[row][columns];

total memory allocation : 

int a = 5

4 bytes 

int arr[5]={10,20,30,40,50};

number of elements * data_typpes size= 
5 * 4 = 20 bytes


int marks[3][2];
array 3 x 2 
3 row;
2==> column;
col    0  1       
row 0 [0,0] [0,1]
row 1 [1,0] [1,1]
row 2 [2,0] [2,1]

int marks[3][2]={1,2,3,4,5,6};

col    0 1 2
row 0  1 2 3
row 1  4 5 6 
row 2  7 8 9 

int arr[3][3];

memory actual layout --->

1--->2--->3--->4--->5--->6---->7---->8---->9

compiler storess 
first row
second row
third row


col    0 1 2

row 0  1 2 3

row 1  4 5 6 

row 2  7 8 9 

int marks[3][3];



marks[0,0] = 1;
marks[0,1] = 2;
marks[0,2] = 3;
marks[1,0] = 4;
marks[1,1]=  5 ;
marks[1,2]= 6;
marks[2,0] = 7
marks[2,1] = 8;
marks[2,2]= 9;



two types of initialization ?

1>) compile time 
2) run time 

//1). compile time===== 

1)first method

int a[2][3]= {0,0,0,1,1,1};

total elements = row * col = > 2 * 3 ==> 6 

col     0 1 2

row 0   0 0 0 
row 1   1 1 1 

===================

col   0   1  2
       
row 0 [0] [0] [0]
row 1 [1] [1] [1]

[row->0] [row-1]

2) method 
                row 0   row 1
int a[2][3]= {{0,0,0},{1,1,1}};

a[0]= {0,0,0};
a[1] = {1,1,1};


3 ) method 

int a[][3]= {0,0,0,1,1,1}; correct 

int a[2][]={0,0,0,1,1,1,} not correct 

row 0 
row 1 

int a[3][3]= {0};

total elemts = 3 * 3 = 9 
col    0 1 2 

row 0  0 0 0
row 1  0 0 0
row 2  0 0 0


int a[2][3] ={0,0,0,1};

total number of elemtns = row * col = 2* 3 = 6 

output =>

col      0 1 2

row -0   0 0 0 

row 1    1 0 0 






2) run time 

scanf("%d",&a[i][j]);














