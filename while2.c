#include<stdio.h>
int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);


    
    if((number/2) == 0 ){
        printf("%d is even number",number);
    }
    else{
        printf("%d is odd number",number);
    }
    return 0;
    
}



class outer {

    class inner{
        void fixed(){
            printf("Fixed");
        }
    }
}


// 


#include<stdio.h>
int main(){ 
    int num=16;
    while (num > 1)
    
    num = num - 2;

if (num == 0)
    printf("Even");
else
    printf("Odd");
    return 0;
    }
















