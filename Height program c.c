/*
Name:Paul Sinyati Lekasuiyan
reg no:PA106/G/28929/25
Description:program to compute height, id_number, account_balance, email and Github username 
*/

#include <stdio.h>

int main(){
  float height;
  long id_number; 
  double account_balance;
  char email[50];
  char github_username[50];
  
  //Get user input 
  printf("enter your height:\n");
  scanf("%f",&height);
  printf("enter your id_number:\n");
  scanf("%ld",&id_number);
  printf("enter your account_balance:\n");
  scanf("%lf", &account_balance);
  printf("Enter your email:");
  scanf("%s",email);
  printf("Enter your github_username:");
  scanf("%s",github_username);

  //display user input 
  printf("height: %.2f meters\n",height);
  printf("ID Number: %ld\n", id_number);
    printf("Account Balance: %.2f\n", account_balance);
    printf("email: %s\n",email);
    printf("github_username: %s\n",github_username);
  return 0; 
  }

    
