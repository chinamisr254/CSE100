//
//  main.cpp
//  Account
//
//  Created by Joseph Hawkins on 7/9/22.
//

#include <iostream>
using namespace std;

class BankAccount
{
private:
    
    double balance;
    int accountNumber;
    string ownerName;
    double interestRate;

public:
    
    BankAccount(){
        balance = 0.0;
        accountNumber = 0;
        interestRate = 0.0;
        ownerName = "";
    }
    
    //constructor function
    BankAccount(double b, int a, string o, float i)

    {
            balance = b;
        accountNumber = a;
            ownerName = o;
            interestRate = i;
    }
    
    int main() {
    
    return 0;
    }};
