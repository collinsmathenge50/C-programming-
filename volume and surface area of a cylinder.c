/*
Name:mathenge Collins mureithi
 Registration number:CT100/G/26138/25
Description:program to find the volume and surface area of cylinder 
  volume=
  surface area=
  */
  #include<stdio.h>
  int main() {
  
  //
  float radius,height,volume, surface_area;
  
   //prompting user to enter radius
  printf("enter radius:\n");
  scanf("%f",&radius);
  
  //prompt user to enter height 
  printf("enter height:\n");
  scanf("%f",& height); 
 
 //formula for calculating volume 
 volume=3.142*radius*radius*height;
 printf("volume:%.1fcm^3\n",volume);
 
 //formula for calculating surface area
 surface_area=(2*3.142*radius*radius)+(2*3.142*height);
 printf("surface_area:%.1fcm^2",surface_area);
 
 return 0;
 }