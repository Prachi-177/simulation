#include<stdio.h>
#include<conio.h>
int main()
{
float lamda,u,ws,ts,time_to_seat,a,total;

printf("\n Given the following information:");

printf("\n Arrival Rate = %.2f customers per minute\n",lamda);
lamda=1;  

printf("\n\n takes 1.5 min to reach correct seat");
time_to_seat = 1.5 *60; 

printf("\n \n It takes average 20 sec to purchase the ticket");
ts=20;   
u=60/ts;  
printf("\n\n Service rate u=%.2f customer per minute\n",u);
ws= 1/(u-lamda)*60; 
printf("\n waiting time in the system=%.2f seconds\n ",ws);

printf("\n\n Enter Arrival Time in minutes \t: ");
scanf("%f",&a);

a= a*60;  
 
total=(ws+time_to_seat);

if(total<=a)
printf("\n Sports fan be seated in stadium before kick off");
else
printf("\nSports fan cant be seated in stadium before kick off");
getch();
return 0;
}
