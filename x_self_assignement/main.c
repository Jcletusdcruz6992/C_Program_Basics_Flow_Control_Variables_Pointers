#include<stdio.h>
int main(){
int x=0;
printf("Enter the value of x \n");
scanf("%d",&x);
printf("The value of x you entered is %d \n",x);
x=x+1;
printf("Value of x after adding 1 to itself is x = %d \n",x);
x--;
printf("value of x after decrement is %d \n",x);
return 0;
}
