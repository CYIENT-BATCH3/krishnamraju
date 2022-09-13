#include <stdio.h> //including the header file for input and outputu

struct student
{
int empid;
char name;
float salary;
};
struct student getdetail(struct student s);
int main() //defining main function  
{
 //declaring variables of diff data types   
 struct student e,e2;
 e=getdetail(e2);
 //struct output (s); //function call
 //printing student details with the help of printf statement
 printf("employee id is %d\n",e.empid); 
 printf("name is %s\n",e.name);
 printf("salary is %f\n",e.salary);
 return 0;
}
    struct student getdetail(struct student std)//function defination
    {
     std.empid=10;
     strcpy(std.name,"raj");
     std.salary=12345.2;
    return std;
}

	

	


	