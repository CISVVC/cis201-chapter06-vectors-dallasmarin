/**
 * File: PE6.13
 * Developer: Dalles Marin
 * Email: dallasmarin80@icloud.com
 * Description: Program makes a bank statement
 */
 
#include "BackAccount.h"
#include <iostream>

BackAccount::BackAccount()
{
currentBalance = 1000;
numberOfTransactions = 0;
}
  
BackAccount::BackAccount(int pCurrentBalance)
{
currentBalance = pCurrentBalance;
numberOfTransactions = 0;
}

void BackAccount::deposit(int amount)
{
currentBalance += amount;
numberOfTransactions++;
}

void BackAccount::withdraw(int amount)
{
if (currentBalance >= amount)
{
currentBalance -= amount;  
}
else
{
std::cout << "ERROR: Cannot withdraw " << amount << " since current balance is " << currentBalance << std::endl;
}
numberOfTransactions++;
}

int BackAccount::getCurrentBalance()
{
return currentBalance;
}

int BackAccount::getNumberOfTransactions()
{
return numberOfTransactions;
}
