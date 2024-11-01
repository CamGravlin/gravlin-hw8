/*  File name: bankAccount.h

*/

#include<string>
using namespace std;

class BankAccount {
  private:
    string customerName;
    float balance;

  public:
    BankAccount();
    BankAccount(string n, float bal);

    void setName(string n);
    void setBalance(float bal);
    string getName();
    float getBalance();
    float deposit(float dep);
    float withdraw(float draw);
    ~BankAccount();
};
