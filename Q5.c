#include<stdio.h>
#define p printf
#define s scanf
#define jan 31
//Mukabbir Hossain 221-35-974(F)//
int main(){
int a;
float c,d,sum;
p("Enter Employee's ID\n");
s("%d",&a);
p("Enter Employee's work hour in a month\n");
s("%f",&c);
p("Enter Amount he receives per hour\n");
s("%f",&d);
sum=c*d*jan;
p("The Employee's ID is %d \n",a);
p("The Employee's work hour in a month is %.2f\n",c);
p("The Employee's receives per hour is %.2f\n",d);
p("The Employee's salary of the January month is %.2f \n",sum);
return 0;}
