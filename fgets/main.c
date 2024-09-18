#include<stdio.h>

int main(){
char name[64];
printf("Enter your full name? \n");
fgets(name,64,stdin);
puts("Your full name is :");
puts(name);
return 0;
}
