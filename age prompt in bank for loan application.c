/*
Name:mathenge Collins mureithi
 Registration number:CT100/G/26138/25
 Description:  A.program to input
       1.Age:if user is 21 years and above annual income 21000 will get loan
       2.annual income
             B.program to output 
        1.congratulation you can qualify for a loan:if above  21 years
        2.unfortunately,we are unable to offer you a loan at this time:below 21 years 
*/
#include <stdio.h>         
int main() {

    //prompting user to input required data 
    int age;
    float annualincome;
    
   // prompting user to enter age
   printf("enter your age:\n");
   scanf("%f",&age);
   
   //prompting user to enter annualincome 
   printf("enter annualincome:\n");
   scanf("%f",& annualincome);
   
   //expected output after input of data
   if (age>=21 && annualincome >=21000){
   printf("congratulations you qualify for a loan.");
 
 }
 else{
 printf("unfortunately,we are unable to offer you a loan at this time.");
 }
 return 0;
 
 }