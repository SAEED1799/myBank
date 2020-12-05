#include "myBank.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main( int argc , char **argv)
{


int account_number;
double ammount;
double rpeat;
char func;



while( 1)
{
printf("what opperation do you want to execute\n");
scanf(" %c",&func);


switch(func)
{
case 'O' :{
printf("enter ammount to open new bank account\n");

while(scanf("%lf",&ammount)!=1)
{ 
printf("invalid input try again\n");
while(getchar()!='\n'){}


}

Addaccount(ammount);
break;


}

case 'B' : {
printf("enter account numer to check the ammount:\n");

printf("enter account number:\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");
while(getchar()!='\n'){}
}
while(account_number<900||account_number>950)
{
printf("invalid account number try again\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");
while(getchar()!='\n'){}
}
}

 accountsum(account_number);
break;

}

case 'D' :{
printf("enter account number and the ammount you want to add\n");

printf("enter account number:\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");

while(getchar()!='\n'){}
}
while(account_number<900||account_number>950)
{
printf("invalid account number try again\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");
while(getchar()!='\n'){
}
}
}
printf("enter ammount :\n");

while(scanf("%lf",&ammount)!=1)
{
printf("invalid ammount try again\n");

while(getchar()!='\n'){}
}


 entermoney(ammount , account_number);
break;

}

case 'W' :{
printf("enter account number and the ammount you want to withdraw\n");

printf("enter account number:\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");
while(getchar()!='\n'){}
}
while(account_number<900||account_number>950)
{
printf("invalid account number try again\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");
while(getchar()!='\n'){}
}
}
printf("enter ammount :\n");

while(scanf("%lf",&ammount)!=1)
{
printf("invalid ammount try again\n");
while(getchar()!='\n'){}
}
 pullmoney(ammount ,  account_number);
break;
}

case 'C' :
{
printf("enter the account number you want to close\n");

printf("enter account number:\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");
while(getchar()!='\n'){}
}
while(account_number<900||account_number>950)
{
printf("invalid account number try again\n");
while(scanf("%d",&account_number)!=1)
{
printf("invalid inout try again\n");
while(getchar()!='\n'){}
}
}
 closeaccount(account_number );
break;

}

case 'I' : {

printf("enter the number interest rate you want to add to all open accounts\n");

while(scanf("%lf",&rpeat)!=1)
{
printf("invalid interest rate try again\n");
while(getchar()!='\n'){}
}
while(rpeat<0)
{
printf("interst rate should be positive number try again\n");
while(scanf("%lf",&rpeat)!=1)
{
printf("invalid ammount try again\n");
while(getchar()!='\n'){}
}
}
 addrepeat(rpeat );
break;
}

case 'P' : {
 prinaccounts();
break;

}

case 'E' :{
 closeaccounts();
printf("program is closed bye bye");

break;
}


default : printf("invalid option\n");
}
if(func=='E')
break;


}
}






