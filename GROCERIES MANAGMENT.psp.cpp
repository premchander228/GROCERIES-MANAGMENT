#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct glossary{
char n[10];
int pi,q;
}g[100];
char items[][15]={"wheat flour","tea powder","groundnuts","onions","shampoo","salt","masala","sunflower oil","sugar","dishsoap","surf","potato","brush","dal","idli rava"};
int price[15]={55,130,120,20,2,20,10,175,40,50,70,30,20,120,40};
int x;
int t;
char c;
struct glossary *z;
int check(char a[10],int qua);
int main(){
system("cls");
int i;
int p;
printf("\n ITEMS PRICE(Rs) QUANTITY\n");
printf("\nwheat flour 55 for 1 kg");
printf("\ntea powder 130 for 250gm");
printf("\nground nuts 120 for 1 kg");
printf("\nonions 20 for 1 kg");
printf("\nshampoo 2 for 1 packet");
printf("\nsalt 20 for 1 kg");
printf("\nmasala 10 for 100gm");
printf("\nsunflower oil 175 for 1 ltr");
printf("\nsugar 40 for 1 kg");
printf("\ndish soap 50 for 250gm");
printf("\nsurf 70 for 500gm");
printf("\npotato 30 for 1 kg");
printf("\nbrush 20 for 1 piece");
printf("\ndal 20 for 1 kg");
printf("\nidli rava 40 for 1 kg");
printf("\n_____________________________________");
printf("\n_____________________________________");
p:
printf("\n Enter the number of items=");
scanf("%d",&x);
z=g;
z=(struct glossary*)malloc(x*sizeof(struct glossary));
for(i=0;i<x;i++){
printf("\n Enter the item %d =",i+1);
fflush(stdin);
scanf("%[^\n]",(z+i)->n);
printf("\nEnter the Quantity of item %d=",i+1);
scanf("%d",&(z+i)->q);
p=check((z+i)->n,(z+i)->q);
(z+i)->pi=p;
}
printf("Do you want to add other items(Y/N):");
fflush(stdin);
scanf("%c",&c);
if(c=='y'){
goto p;
}
if(c=='n'){
goto j;
}
j:
system("PAUSE");
 system("CLS");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~PREMGROCERIES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
printf("\n ITEM PRICE QUANTITY AMOUNT");
for(i=0;i<x;i++){
printf("\n%d%s %d %d %d",i+1,(z+i)->n,(z+i)->pi,(z+i)->q,(z+i)->pi*(z+i)->q);
}
printf("\n TOTAL AMOUNT %d rs",t);
}
int check(char a[10],int qua){
int pr;
int i,za,u;
for(i=0;i<15;i++){
za=strcmp(a,items[i]);
if(za==0){
pr=price[i];
u=price[i]*qua;
t=t+u;
return pr;
}
}
}

