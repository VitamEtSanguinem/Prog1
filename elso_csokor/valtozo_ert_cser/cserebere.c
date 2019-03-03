#include <stdio.h>



int a= 13;
int b= 9;

int main(){


printf("%d\n", a);
printf("%d\n", b);



a=a+b;
b=a-b;
a=a-b;


printf("%d\n", a);
printf("%d\n", b);


}