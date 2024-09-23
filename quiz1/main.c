#include<stdio.h>

int main(){
while(1){
float a=0;
float b=0;
printf("Enter the value of a \n");
scanf("%f",&a);
printf("The value of b \n");
scanf("%f",&b);
printf("Add=%f \n",a+b);
printf("Sub=%f \n",a-b);
printf("Mul=%f \n",a*b);
printf("Div=%f \n",a*1.0/b*1.0);
printf("a^b=%0.2f \n",pow(a,b));
printf("Sqrt of a =%0.2f and b =%0.2f  \n",sqrt(a),sqrt(b));
}
return 0;
}
