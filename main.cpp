/**
 * File: PE6.13
 * Developer: Dalles Marin
 * Email: Dallasmarin80@icloud.com
 * Description: This program  prints out a bank statement
 * */
#include<iostream>
#include<vector>

int main()

{

int total_months;

int day;

std::string description;

float amount;

float Average_daily_balance;

float minimum_daily_balance = 100.00;

float penalty = 5.00;

float balance;

float deposit;

float withdrawal;

std::cout << "Enter Total number of months : ";

std::cin >> total_months;

std::cout << "\n\nEnter intial day, intial balance and Description : \n\n"; /* enter 1 for intial day for the starting month, then enter intial balance and intial description as given in the example */

std::cin >> day >> balance >> description;

for (int q = 1; q <= total_months; ++q)

{

std::cout << "\n" << q << " Month start : \n";

std::cout << "\nEnter the transaction details day by day for the month " << q << " : ";

std::vector<float> dayVector;

std::vector<float> amountVector;

std::vector<std::string> desVector;

for (int i = 0; i < 28; i++)

{

std::cout << "\nEnter day : ";

std::cin >> day;

std::cout << "Enter the amount : ";

std::cin >> amount;

std::cout << "Enter the description : ";

std::cin >> description;

dayVector.push_back(day);

amountVector.push_back(amount);

desVector.push_back(description);

}

for (int i = 0; i < 28; i++)

{ 
//2 as day 1 already taken care of above

deposit = 0;

withdrawal = 0;

balance += amount;

if (amountVector[i] >= 0)

{

deposit = amountVector[i];

}

else

{

withdrawal = amountVector[i];

}

if (balance < minimum_daily_balance)

{

balance -= penalty;

}

Average_daily_balance += balance;

std::cout << "\nDEPOSITS\t WITHDRAWALS\t BALANCE FOR THE DAY " << dayVector[i] << " :\n";

std::cout << deposit << "\t \t " << withdrawal << "\t \t " << balance << "\n";

std::cout << "\nMinimum daily balance = " << minimum_daily_balance << " and Average daily balance = " << Average_daily_balance << "\n";

}

// end of 30 days

Average_daily_balance /= 30;

balance += Average_daily_balance * 0.5;

std::cout << "\n\n Interest calculated after month " << q << " = " << Average_daily_balance * 0.5;

}

}
