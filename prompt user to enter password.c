/*
//simple c program 
name: mathenge Collins mureithi 
reg::CT100/G/26138/25
description:Do_while_loop
*/
#include <stdio.h>
int main()
{
int password;
int correct_password=1234;

do{
printf("Enter your password");
scanf("%d",&password);
}
while(password!=correct_password);
printf("access granted\n");


return 0;
}