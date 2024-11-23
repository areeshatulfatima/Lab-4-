#include <iostream>
using namespace std;

int main() 
{
    char services;
    double amount, balance = 10000.00, charges;

cout<< "Select a bank operation:\n";
cout<< "D = Deposit";
cout<<"\nW = Withdraw\n";
cout<<"T = Transfer\n";
cout<<"Enter your choice: ";
cin>>services;
cout<<"Enter the amount: ";
cin>>amount;


    switch (services) 
	{
        case 'D':
        case 'd':
            charges = 0.005 * amount;
            balance += (amount - charges);
            cout << "Deposited: "<<amount - charges;
            cout << "\nCharges: "<<charges;
            break;
            
            
        case 'W':
        case 'w':
            charges = 0.015 * amount;
            if (amount + charges <= balance) 
			{
                balance -= (amount + charges);
                cout << "\nWithdrawn: "<<amount;
                cout << "\nCharges: "<<charges;
            } 
            
			else
			 {
                cout << "Insufficient balance.";
            }
            break;
            
            
        case 'T':
        case 't':
            charges = 0.025 * amount;
            if (amount + charges <= balance)
			 {
                balance -= (amount + charges);
                cout << "Transferred: "<<amount;
                cout << "\nCharges: "<<charges;
            } 
			else
			 {
                cout << "Insufficient balance.";
            }
            break;
            
            
default:
cout << "Invalid operation.";
return 0;
}

cout<<"Remaining balance: "<<balance;

    return 0;
}
