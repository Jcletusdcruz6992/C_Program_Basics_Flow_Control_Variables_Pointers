#include<stdio.h>
int main(){
int a,b;
float c,d;
printf("Enter the value of a \n");
scanf("%d",&a);
printf("Enter the value of b \n");
scanf("%d",&b);
printf("Enter decimal value for c \n");
scanf("%f",&c);
printf("Enter decimal value for d \n");
scanf("%f",&d);

printf("value of a is %d \n",a);
printf("Value of b is %d \n",b);
printf("Value of c is %f \n",c);
printf("Value of d is %f \n",d);

printf("The sum is %d \n",a+b);
printf("The difference is %d \n",a-b);
printf("The multiplication of a and b is %f \n",a*b*1.0);
printf("The result of division of a by b is %f \n",a*1.0/b*1.0);

printf("Incrementing all values by 1 and reprinting the values \n");
a++;
b++;
c++;
d++;

printf("value of a is %d \n",a);
printf("Value of b is %d \n",b);
printf("Value of c is %f \n",c);
printf("Value of d is %f \n",d);

printf("Decrementing all values by 1 \n ");
a--;
b--;
c--;
d--;
printf("value of a is %d \n",a);
printf("Value of b is %d \n",b);
printf("Value of c is %f \n",c);
printf("Value of d is %f \n",d);



return 0;
}
