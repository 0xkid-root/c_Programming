// write a program to calculate the area of circle (radius is given by user) and area of circcle is pirsquare


#include <stdio.h>
#define pi 3.14

int main() {
    int radius;
    printf("enter radius \n");
    scanf("%d", &radius);
    float area = pi * radius * radius;
    printf("area of circle is %f", area);
    return 0;
}