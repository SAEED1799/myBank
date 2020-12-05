#define n 50
#define g 900
#include <stdio.h>
#include <stdlib.h>
#include "myBank.h"
double arr[2][n];

 void Addaccount(double ammount)
{
int c=1;
if(ammount<0)
{
printf("cant open account with negative ammount\n");
return;
}

 for(int i=0;i<50;++i)
{
if(arr[0][i]==0)
{
arr[0][i]=1;
arr[1][i]=ammount;
printf("your new account number is %d \n",i+g);
break;
}
c++;
}
if(50-c==0)
printf("theres no room for more accounts \n");

}

void accountsum(int account_number)
{
double x=(int)arr[0][account_number-g];
if(x==1)
printf(" sum of account %d is: %.2lf \n" ,account_number,arr[1][account_number-g]);
else
{
printf("account not open\n");
}
}

void entermoney(double ammount, int account_number)
{
int x=(int)arr[0][account_number-g];
if(x==1)
{
arr[1][account_number-g]+=ammount;
}
else
printf("this account %d Is not open \n" ,account_number);
}


void pullmoney(double ammount, int account_number)
{
int x=(int)arr[0][account_number-g];
if(x==1)
{
if(arr[1][account_number-g]<ammount)
printf("cant pull this much money from your account because you ammount is : %lf \n",arr[1][account_number-g]);
else
arr[1][account_number-g]-=ammount;
}
else
printf("this account %d Is not open \n" ,account_number);
}

void closeaccount(int account_number)
{
int x=(int)arr[0][account_number-g];
if(x==1)
{
arr[1][account_number-g]=0;
arr[0][account_number-g]=0;
}
else
printf("this account %d Is not open \n" ,account_number);
}

void addrepeat(double interest_rate)
{
for(int i=0;i<50;i++)
{
if(arr[0][i]==1.0&&arr[1][i]>0)
{

arr[1][i]+=arr[1][i]*(interest_rate/100);

}
}
}


void prinaccounts()
{
for(int i=0;i<50;i++)
{
if(arr[0][i]==1)
{
printf("account number: %d   ammount:%.2lf \n",i+g,arr[1][i]);
}

}
}


void closeaccounts()
{
for(int i=0;i<50;i++)
{
arr[0][i]=0;
arr[1][i]=0;


}

}
















