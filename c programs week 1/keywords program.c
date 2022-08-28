

#include <stdio.h>

int main()
{
int a;  //declaring the integer variable
float b;  //declaring the float variable
char c;  //declaring character variable
printf("enter the a value\n");
scanf("%d",&a); //reading integer value from keyboard with the help of scanf sttement
printf("enter the b value\n");
scanf("%f",&b); //reading float value from keyboard with the help of scanf sttement
printf("enter the c value\n");
scanf(" %c",&c); //reading character value from keyboard with the help of scanf sttement
printf("size of int :%ld\n",sizeof(int));

if(a>=18)
{
    printf("true");

}
else
{
printf("false");

}
  return 0;
}
