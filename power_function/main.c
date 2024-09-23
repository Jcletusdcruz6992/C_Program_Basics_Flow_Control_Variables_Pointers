#include<stdio.h>
#include<math.h>

int main(){
while(1){
 double num=0;
double result=0;
double exp=0;
printf("Enter the base number \n");
scanf("%lf",&num);
printf("Enter the exponent \n");
scanf("%lf",&exp);
printf("The base you entered is %f and exp is %f \n",num,exp);
result=pow(num,exp);
printf("The power of %f^%f is %0.2f \n",num,exp,result);
}

return 0;
}
