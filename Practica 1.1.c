/*
Practica 1.1
Vega Martinez Daniel
*/
#include<stdlib.h>
#include<conio.h>
int main (void){
printf("1.-suma \n");
printf("2.-resta \n");
printf("introduce 1 para la Suma");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primera cantidad:");
scanf("%d",&a);
printf("introduce la segunda catidad:");
scanf("%d",&b);
int c;
if(opt==1){
c=a+b;
}
else{
c=a-b;
}
printf("El resultado es %d",c);
}
