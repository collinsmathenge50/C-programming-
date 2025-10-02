/*
Name: mathenge Collins mureithi 
Reg No:ct100/g/26138/25
Description: program for mobile data purchase 

*/
#include<stdio.h>

int main() {
int choice;
printf("option bundle cost (kes)\n");
printf("100MB kes50\n.");
printf("500MB kes 200\n.");
printf("1GB kes350\n.");
printf("2GB kes600\n.");


printf("Enter choice (1-4):");
scanf("%d",& choice);

switch (choice) {
   case 1:printf("you selected 100MB. cost=KSH50\n");
   break;
   
   case2:printf("you selected 500MB. cost =200\n");
   break;
   
   case 3:printf("you selected 1GB.cost=350\n");
   break;
   
   case 4:printf("you selected 2GB.cost=600\n");
   break;
   default:
   printf("invalid choice\n");
   
   }
   return 0;
   }
   
   