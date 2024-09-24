#include<stdio.h>

int main(){
while(1){
  int num;
printf("Enter the number \n");
scanf("%d",&num);
if(num<5){
    printf("%d is less than 5 \n",num);
}
else if(num>5){
        printf("%d is greater than 5 \n",num);
}
else{
    printf("%d is equal to 5 \n",num);
}

}

return 0;
}
