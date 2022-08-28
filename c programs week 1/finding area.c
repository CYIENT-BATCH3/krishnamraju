
#include<stdio.h> //preprocessor directive
int main()
{
    int r;  // declaring the integer variable 
    float pi=3.14; 
    float area; // declaring the floating value 
    printf("enter the radius value:\n");
    scanf("%d",&r); // reaning radius value from keyboard with the help of scanf statement 
    area= pi*(r*r); // declaring formula to findout area
    printf("area to be covered by the gardener:%lf",area); // printing area to be calculated with the help of printf statement
    return 0;
    
}