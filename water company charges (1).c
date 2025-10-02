/*
Name: mathenge Collins mureithi 
Reg No:ct100/g/26138/25
Description: program for water company charges rules

*/
#include<stdio.h>//scan(),printf()

//main function 
int main(){
int units;
float total_bill;

//prompt the user to enter the number of units
printf("Enter units \t");
scanf("%d",&units);
//calculating the bill using if-else
if(units>=0 && units<=30){
total_bill=units*20;
}
else if(units>= 31 && units<=60){
total_bill=units*25;
}

else if(units>=60){
total_bill=units*30;
}
//display total water bill to decimal places
printf("water bill=kes %.2f \t",total_bill);

return 0;
}
