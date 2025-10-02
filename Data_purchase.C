/*
Name:paul Sinyati Lekasuiyan
Reg no:PA106/G/28929/25
Date:30/8/2025
*/
#include <stdio.h>

int main(){
	//variable declaration
	int option;
	
//diplay on screen
printf("select data bundles:\n");
printf("1. 100MB @ 50KES\n");
printf("2. 500MB @ 200KES\n");
printf("3. 1GB   @ 350KES\n");
printf("4. 2GB   @ 600KES\n");

//prompt user to enter option 
printf("Enter your option (1-4):");
scanf("%d",&option);

//switch statement
switch(option){
	case 1:
		printf("you selected 100MB. cost=50KES\n");
		break;
	case 2:
        printf("you selected 500MB. cost=200\n");
        break;
    case 3:
        printf("you selected 1GB. cost=350\n");
        break;
    case 4:
        printf("you selected 2GB. cost=600\n");
        break;
        default:
		printf("invalid option\n");
        
	
}


return 0;
}
