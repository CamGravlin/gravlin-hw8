/*  File name: bankApp.cpp 

*/



#include<iostream>
#include"bankAccount.h"
using namespace std;

int main() {


BankAccount jackAccount;
jackAccount.setName("Jack Smith");
jackAccount.setBalance(50.00);
jackAccount.deposit(30.00);
jackAccount.withdraw(20.00);

BankAccount jillAccount;
jillAccount.setName("Jill Brian");
jillAccount.setBalance(100.00);
jillAccount.deposit(30.00);
jillAccount.withdraw(20.00);

BankAccount bankArray[3];
bankArray[0].setName("Ralph Kramden");
bankArray[0].setBalance(10.00);
bankArray[0].deposit(30.00);
bankArray[0].withdraw(20.00);
bankArray[1].setName("Alice Kramden");
bankArray[1].setBalance(30.00);
bankArray[1].deposit(30.00);
bankArray[1].withdraw(20.00);
bankArray[2].setName("Ed Norton");
bankArray[2].setBalance(20.00);
bankArray[2].deposit(30.00);
bankArray[2].withdraw(20.00);

cout << jackAccount.getName() << " has: $" << jackAccount.getBalance() << endl;
cout << jillAccount.getName() << " has: $" << jillAccount.getBalance() << endl;
cout << bankArray[0].getName() << " has: $" << bankArray[0].getBalance() << endl;
cout << bankArray[1].getName() << " has: $" << bankArray[1].getBalance() << endl;
cout << bankArray[2].getName() << " has: $" << bankArray[2].getBalance() << endl;

return 0;
}
