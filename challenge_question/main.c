#include<stdio.h>

int main(){
while(1){
 int num=0;
printf("Enter your choice of numbers \n");
scanf("%d",&num);

switch (num){
case 1:
    puts("Red \n");
    break;
case 2:
    puts("Green \n");
    break;
case 3:
    puts("Blue \n");
    break;
default:
    puts("Invalid Input \n");

}


}

return 0;
}
