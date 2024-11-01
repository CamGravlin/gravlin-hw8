/*  File name: bankAccount.cpp

*/

#include<string>
#include<iostream>
#include "bankAccount.h"
using namespace std;

BankAccount::BankAccount(){
}

BankAccount::BankAccount(string n, float bal) {
  customerName = n;
  balance = bal;
}

void BankAccount::setName(string n) {
  customerName = n;
}

void BankAccount::setBalance(float bal) {
  balance = bal;
}

string BankAccount::getName() {
  return customerName;
}

float BankAccount::getBalance() {
  return balance;
}

float BankAccount::deposit(float dep) {
  return balance = balance + dep;
}

float BankAccount::withdraw(float draw) {
  return balance = balance - draw;
}

BankAccount::~BankAccount() {
}
