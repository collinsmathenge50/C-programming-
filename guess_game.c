
/*simple c program 
name:mathenge Collins mureithi 
reg::CT100/G/26138/25
description:guess game
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
int playerchoice=10;
int x=20;
int y=1;
int compchoice;
srand(time(0));


compchoice=(rand()%(x-y+1)+y);
do
{
printf("Enter guess\n");
scanf("%d",&playerchoice);}
while(playerchoice<1||playerchoice>20);

if(playerchoice>compchoice)
{
printf("Too high %d\n",compchoice);
}
else if(playerchoice<compchoice)
{
printf("Too low %d\n",compchoice);
}
else
{
printf("congratulations %d\n",compchoice);
}

return 0;
}
