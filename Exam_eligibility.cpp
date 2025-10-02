/*
Name:Paul Sinyati Lekasuiyan
Reg no:PA106/G/28929/25
Date:30/9/2025
Description:To compute exam eligibility of a student
*/
#include<stdio.h>

int main(){
	//variable declaration
	int attendance,avarage_marks;
	
	//prompt user to enter attendance
	printf("Enter attendance\n:");
	scanf("%d",&attendance);
	
	//prompt user to enter avarage_marks
	printf("Enter avarage_marks:\n");
	scanf("%d",&avarage_marks);
	
	//display conditions
	if(attendance>=75 && avarage_marks>=40){
		printf("you are eligible for exams\n");
	}else("you are not eligible for exam\n");
	
	//display on screen
	printf("attendance=%d\n",attendance);
	printf("avarage_marks=%d",avarage_marks);
	return 0;
	
}