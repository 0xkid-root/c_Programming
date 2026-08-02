#include <stdio.h>
int main(){

    int a[2][3];
//     first = row 
//     scond = col 

// col      0     1    2

// row 0 [0,0]  [0,1] [0,2]
// row 1 [1,0]  [1,1] [1,2]

    // 2 by 3 matix 2d array

    // total elemts 2*3 = 6

    for(int i = 0 ; i < 2; i++){

        for(int j = 0; j <3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n matrix ...\n")

    for(int i = 0;i <2;i++){
        for(int j =0;j<3;j++){
            printf("%d",a[i][j]);
        }
        
    }
}


int a[2][3]={{10,20,30},{50,40,60}};

printf("%d",a[1][2]);
output 30 
output 60
outout 30
row ===>2 
col ==>3 


