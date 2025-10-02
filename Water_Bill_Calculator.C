/*
Name:Paul Sinyati Lekasuiyan
Reg no:PA106/G/28929/25
date;30/9/2025
Description:To compute water bill calculator
*/
#include <stdio.h>

int main(){
	//variable declaration
	int units;
	float total_water_bills;
	
	//prompt user to enter units
	printf("Enter water units consumed:");
	scanf("%d",&units);
	
	//conditions
	if ("units>=0 && units<=30"){
	total_water_bills=20*units;
	}else if("units>=30 && units<60"){
	total_water_bills=25*units;
	}else ("units>=60");
	 total_water_bills=30*units;
   //display on screen
   printf("total_water_bills=%.2fKES",total_water_bills);
   return 0;

	
	}



