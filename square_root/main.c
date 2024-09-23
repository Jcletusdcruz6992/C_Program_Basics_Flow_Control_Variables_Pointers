#include<stdio.h>
#include<math.h>

int main(){
float num=0.0;
float result=0.0;
printf("Enter any number you want to find the square root \n");
scanf("%f",&num);
result=sqrt(num);
printf("Square root of %0.2f is %0.2f \n",num,result);
return 0;
}
