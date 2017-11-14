/**
 * File: PE6.13
 * Developer: Dalles Marin
 * Email: Dallasmarin80@icloud.com
 * Description: This program  prints out a bank statement
 * */
#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    float d,a,average = 0, minimum = 0, balance = 1143.24;
    float balance2 = 1143.24;
    float min_interest = 0, avg_interest = 0;

    string s;
    int j = 0;
    bool b = true;

    vector <int> day;//three vectors store day, amount, and description
    vector <float> amount;
    vector <string> description;

    day.push_back(1);//stores initial or first entry in vector
    amount.push_back(1143.24);
    description.push_back("initial balance");
    
    cout << "press 0 to stop giving inputs\n";
    cout << "enter inputs in form: day amount description\n\n";

    while(b)
    {
        cin >> d;//gets day from user
        if(d==0)
        {
            b = false;
        }
        else
        {
            cin >> a;//gets amount from user
            getline(cin,s);
            day.push_back(a);
            description.push_back(s);
        }
    }
    cout << "\n";
    cout << "Day\tAmount\tDescription\tBalance" << endl;

    for(int i=0;i<30;i++)
    {
        if(i+1 == day[j])
        {
            if(j!=0)
            {
                balance = balance + amount[j];
            }
            if(balance2>balance)
            {
                balance2=balance;
            }
            cout << day[j] << "\t" << amount[j] << description[j] << "\t\t" << balance << endl;
            j++;
        }
        average = average + balance;//Calculate the average daily balance of 30 days
        minimum = minimum + balance2;//calculate the minimum daily balance of 30 days
        balance2 = balance;
    }

    float apr = 0.5/100;//Calculates the rate of interest
    float cycle = (float)30/365;//Calculates the cycle for 30 days to find the minimum and average daily balance interest.
    min_interest = apr * cycle * minimum;//Calculate average and minimum daily balance interest.
    avg_interest = apr * cycle * average;
    cout << "\n";
    cout << "Interest according to minimum daily balance: " << min_interest << endl;//Display average and minimum daily balance interest
    cout << "Interest according to average daily balance: " << avg_interest << endl;

    return 0;
}
