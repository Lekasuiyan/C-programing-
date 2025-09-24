/*
Name:
Reg no:
Description:Program to compute volume and surface_area 
volume =pi*radius *radius *height 
surface area =(2pi*radius *radius)+(2pi*radius*height)
*/

#include <stdio.h>

int main(){
   //Declaration variable
    float pi,height,volume,surface_area,radius;
    
   //prompt user to enter height 
   printf("Enter height:");
    scanf("%f",&height);
   
  // prompt user to enter radius 
  printf("Enter radius:");
   scanf("%f",&radius);
   
  //prompt user to enter pi
  printf("Enter pi:");
  scanf("%f",&pi);
    
    //compute volume
    volume=pi*radius*radius*height;
    
    //compute surface area 
    surface_area=(2*pi*radius*radius)+(2*pi*radius*height);
    
    //Display input to screen
    printf("volume= %.2f\n",volume);
    printf("surface_area= %.2f",surface_area);
    
    return 0;
}
 