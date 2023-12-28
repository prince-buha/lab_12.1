/*Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/
#include<stdio.h>
#include<string.h>

struct recode{
	int id;
   char name[100];
	int age;
	char role[100];
	char city[100];
	int experience;
	char company_name[100];
};
void main(){
	int i;
	int num1;
	struct recode num;
	
	printf("enter your number employee");
	gets(num1);
	printf("enter name:-");
 	gets(num1);
 	printf("enter course:-");
 	gets(num1);
 	printf("enter city:-");
 	gets(num1);
 	printf("enter starndard:-");
 	gets(num1);
 	printf("enter school:-");
 	gets(num1);
 	printf("enter age:-");
 	gets(num1);
 	prints("enter grid:-");
 	gets(num1);
 	
 	
 		printf("id is %d\n",id);
 		printf("name is %s\n",name);
 		printf("course is %s\n",course);
 		printf("starndard is %s\n",standard);
 		printf("school is %s\n",school);
 		printf("city is %s\n",city);
	 }
	
	
}


