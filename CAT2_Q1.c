#include <stdio.h>
#include <string.h>


 // Define the structure
 struct employee{
     char name[25];
     int id;
     char department [20];
     float salary;
     char email[50];
 };
 int main (){
     // Declare and initialize a variable of the structure type
     struct employee emp;
     //Assign values to the fields
     strcpy(emp.name, "John Doe");
     emp.id =12345;
     strcpy(emp.department,"Human Resources");
     emp.salary=55000.50;
     strcpy(emp.email, "john.doe@company.com");
     // print the values of the fields
     printf("Name: %s\n",emp.name);
     printf("ID:%d\n",emp.id);
     printf("Department:%s\n",emp.department);
     printf("Salary: %.2f\n",emp.salary);
     printf("Email: %s\n",emp.email);

         return 0;

 }