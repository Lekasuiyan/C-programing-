/*
Name:Paul Sinyati Lekasuiyan
Reg no:PA106/G/28929/25
Description:Program to compute loan eligibility 
*/

#include <stdio.h>

int main (){

//Declaration variable 
  int age;
  float income;
  
 //prompt user  
 printf("Enter your age:");
 scanf("%d",&age);
 
 printf("Enter your income:");
  scanf("%f",&income);
  
  //imput conditions display on screen 
  if (age >=21 && income >=21000) {
   printf("Congratulations you qualify for a loan. \n");
  } else {
   printf("unfortunately we are unable to offer you loan at this time.\n");
   }
   return 0;
  }

 
