#include<stdio.h>
#define p printf
#define s scanf
//Mukabbir Hossain 221-35-974(F)//
int main(){
int c,d;
p("Enter the value of c: ");
s("%d", &c);
p("Enter the value of d: ");
s("%d", &d);
c = c+d;
d = c-d;
c = c-d;
p("\n The value of c: %d", c);
p("\n The value of d: %d", d);
return 0;}
