#include<stdio.h>
#define p printf
#define s scanf
//Mukabbir Hossain 221-35-974(F)//
int main(){
float f,c;
p("Enter Temperature of the City in Fahrenheit = \n");
s("%f",&f);
c= (f - 32) * 5 / 9;
p("%.2f Of Fahrenheit is = %.2f Celsius", f, c);
return 0;
}
