//program for c structures CAT 2
/*
//program for c structures
Author: Stephen mwendwa 
Date:6/11/2024
*/
#include<stdio.h>
#include<string.h>
   struct structure {
   char Name[25];
   char Department [20];
   char Email[50];
   float salary; 
   int ID;
 } employee1;
 
 int main () {
 strcpy(employee1.Department,"Human resources ");
 strcpy(employee1.Name,"John Doe");
 strcpy(employee1.Email,"John.doe@company.com");
 employee1.salary=55000.50;
 employee1.ID=12345;
 
 
 printf("Name:%s\n", employee1.Name);
 printf("Department:%s\n", employee1.Department);
 printf("Email:%s\n", employee1.Email);
 printf("salary:%f\n", employee1.salary);
 printf("ID:%d\n", employee1.ID);
 
 return 0;
 
 }
