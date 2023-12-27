/*
Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include<stdio.h>
#include<string.h>

 struct recode{
 	int id;
	char name[100];
    int age;
	char course[100];
	char city[100];
	char standard[100];
    char school[100];
 };
 void main(){
 	int i;
 	struct recode s1;
 	struct recode s2;
 	struct recode s3;
 	
 	s1.id = 7219;
 	s2.id = 7129;
 	s3.id = 7319;
 	s1.age = 19;
 	s2.age = 20;
 	s3.age = 21;
 	
 	
 	
 	printf("enter name:-");
 	gets(s1.name);
 	printf("enter course:-");
 	gets(s1.course);
 	printf("enter city:-");
 	gets(s1.city);
 	printf("enter starndard:-");
 	gets(s1.name);
 	printf("enter school:-");
 	gets(s1.school);
 	printf("enter name:-");
 	gets(s2.name);
 	printf("enter :-course");
 	gets(s2.course);
 	printf("enter city:-");
 	gets(s2.city);
 	printf("enter starndard:-");
 	gets(s2.name);
 	printf("enter school");
 	gets(s2.school);
 	printf("enter name:-");
 	gets(s3.name);
 	printf("enter course:-");
 	gets(s3.course);
 	printf("enter city:-");
 	gets(s3.city);
 	printf("enter starndard:-");
 	gets(s3.name);
 	printf("enter school:-");
 	gets(s3.school);
 	
 	
 		printf("id is %d\n",s1.id);
 		printf("name is %s\n",s1.name);
 		printf("course is %s\n",s1.course);
 		printf("starndard is %s\n",s1.standard);
 		printf("school is %s\n",s1.school);
 		printf("city is %s\n",s1.city);
 		
 			printf("id 2 is %d\n",s2.id);
 		printf("name 2 is %s\n",s2.name);
 		printf("course 2 is %s\n",s2.course);
 		printf("starndard 2 is %s\n",s2.standard);
 		printf("school 2 is %s\n",s2.school);
 		printf("city 2 is %s\n",s2.city);
 		
 			printf("id is %d\n",s3.id);
 		printf("name is %s\n",s3.name);
 		printf("course is %s\n",s3.course);
 		printf("starndard is %s\n",s3.standard);
 		printf("school is %s\n",s3.school);
 		printf("city is %s\n",s3.city);
	 }
 	
 	
 

