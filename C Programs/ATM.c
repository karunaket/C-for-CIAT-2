/* Write a C program to emulate various operations of an ATM using control structures. */

#include <stdio.h>
void balance_f();
void deposit();
void withdraw();
void pin_f();
int pin=1234,pinuser,withdraw_Amount,deposit_Amount;
char ch;
float balance=0;
void main()
{
int n;
do{
printf("WELCOME TO SBI\n-----------------------------");
printf("\n 1.CHECK BALANCE\n 2.DEPOSIT MONEY\n 3.WITHDRAW MONEY\n 4.PIN CHANGE\n 5.EXIT");
printf("\nENTER YOUR CHOICE :");
scanf("%d",&n);
switch(n)
{
case 1: printf("CHECKING BALANCE ...");balance_f();break;
case 2:printf("DEPOSITING YOUR MONEY ..."); deposit();break;
case 3:printf("WITHDRAWING YOUR MONEY ..."); withdraw(); break;
case 4:printf("PIN CHANGE REQUEST IS ON PROCESS ..."); pin_f();break;
case 5:printf("Thank you ...");break;
}
printf("\nDo you want to continue (Y/N) : " );
scanf("%s",&ch);
}while(ch=='y'||ch=='Y');
}
void balance_f()
{
printf("\nENTER YOUR PIN:");
scanf("%d",&pinuser);
if(pin==pinuser){
printf("Your balance is Rs.%f",balance);
}
else
{
printf("Invalid pin");
}
}
void deposit()
{
printf("\nENTER YOUR PIN: ");
scanf("%d",&pinuser);
if(pin==pinuser){
printf("Enter the amount to be deposit : ");
scanf("%d",&deposit_Amount);
printf("Success..! Rs. %d credited to your account.",deposit_Amount);
balance+=deposit_Amount;
}
else
{
printf("Invalid pin");
}
}
void withdraw()
{
printf("\nENTER YOUR PIN: ");
scanf("%d",&pinuser);
if(pin==pinuser){
printf("Enter the amount to be withdrawn : ");
scanf("%d",&withdraw_Amount);
if(balance<withdraw_Amount)
{
printf("In sufficent Balance");
}else{
printf("Success..! Please collect Rs.%d",withdraw_Amount);
balance-=withdraw_Amount;
}
}
else
{
printf("Invalid pin");
}
}
void pin_f()
{
int pinuser1,pinuser2;
pinn:
printf("\nEnter old PIN: ");
scanf("%d",&pinuser);
if(pin==pinuser){
printf("\nEnter new PIN: ");
scanf("%d",&pinuser1);
printf("\nConfirm new PIN: ");
scanf("%d",&pinuser2);
if(pinuser1==pinuser2)
{
printf("Success..! Your PIN has been changed.");
pin=pinuser1;
}
else
{
printf("Doesnt match");
goto pinn;
}
}
else{
printf("Incorrect pin try again");
goto pinn;
}
}