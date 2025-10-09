/*
Name: mathenge Collins mureithi
reg no;CT100/G/26138/25
Description;A program displaying use of while loop to print ATM balance
*/

#include<stdio.h>
int main(){
  int balance=1000;
  int withdrawal ;
  printf("Your current balance is %d\n",balance);
  
  while(balance>0)
  {
   printf("enter the amount to withdraw\n");
   scanf("%d",&withdrawal);
   balance=balance-withdrawal;
   printf("new balance is %d\n",balance);
   }
   printf("insufficient balance\n");
   return 0;
   }