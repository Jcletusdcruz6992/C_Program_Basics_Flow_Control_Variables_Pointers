#include<stdio.h>

int main(){
int num=0;
printf("Enter the value num \n");
scanf("%d",&num);
if(num<10){
    printf("%d is the num you typed \n",num);
    printf("%d is less than 10",num);
}
if(num>10){
    printf("%d is the num you typed \n",num);
    printf("%d is greater than 10 \n",num);
}
if(num==10){
        printf("%d is the num you typed \n",num);
        printf("%d is equal to 10",num);
}

return 0;
}
