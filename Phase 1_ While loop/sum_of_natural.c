#include<stdio.h>
int main(){
int x;
int sum=0;
int i=1;
printf("Enter a number:");
scanf("%d",&x);
while(i<=x){
     sum=sum+i;
     i+=1;
}
printf("Sum of first %d natural numbers is %d",x,sum);
return 0;
}