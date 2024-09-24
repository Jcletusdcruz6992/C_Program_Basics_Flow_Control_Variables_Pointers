#include<stdio.h>

int main(){
while(1){
char ch=' ';
printf("Enter your options from A top D \n");
scanf(" %c",&ch);
switch(ch){
case'A':
case'a':
    puts("You have won 1million $ \n");
    break;
case 'B':
case 'b':
    puts("You lost everything \n");
    break;
case 'C':
case 'c':
    puts("You won the jackpot! \n");
    break;

case 'D':
case 'd':
    puts("You won multi billion US $ \n");
    break;
default :
    puts("You won a cash price of 100 US$ \n");

}
}

return 0;
}
