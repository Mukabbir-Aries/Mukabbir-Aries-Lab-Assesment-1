#include<stdio.h>
#define p printf
#define s scanf
//Mukabbir Hossain 221-35-974(F)//
int main(){
int n,sum=0,m;
p("Enter a number: ");
s("%d",&n);
while(n>0)
{
    m=n%10;
    n=n/10;
    sum=sum+m;
}
p("The Sum is = %d",sum);
return 0;
}
