#include<stdio.h>

int noc=0,nocy=0,nob=0,count=0,amount=0;
int menu();
void car();
void cycle();
void bike();
void delete();
void showdetail();

void main()

{

while(1)
{ ("cls");


    switch(menu())
    {
    case 1:
        car();
        break;
    case 2:
        cycle();
        break;
    case 3:
        bike();
        break;
    case 4:
        showdetail();
        break;
    case 5:
        delete();
    case 6:
        exit(0);
        dafault:
            printf("\ninvalid choice:");
    }

getch();

}}
int menu()
{ int ch;
   printf("\n1,enter car parking detail:");
     printf("\n2,enter cycle parking detail:");
     printf("\n3,enter bike parking detail:");
     printf("\n4,show detail:");
      printf("\n5,delete all data:");
      printf("\n6,exit:");
      printf("\n\nenter your choice:\n");
       scanf("%d",&ch);
       return(ch);
}
void delete()
{
    noc=0;
    nocy=0;
    nob=0;
    amount=0;
    count=0;
}
void showdetail()
{
    printf("\n number of car is %d",noc);
    printf("\n number of cycle is %d",nocy);
    printf("\n number of bike is %d",nob);
    printf("\n total number of vehicle is %d",count);
    printf("\n total gain amount is %d",amount);
}
void car()
{ printf("\nentry successfull of car");
   noc++;
   amount=amount+50;
   count++;
}
void cycle()
{ printf("entry successfull of cycle\n");
  nocy++;
  amount=amount+10;
  count++;
}
void bike()
{ printf("entry successfull of bike\n");
    nob++;
amount=amount+20;
    count++;
}
