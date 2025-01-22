//
// Created by Hyacinthe Chemasle on 14/01/2025.
//

#include "User.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Expense.h"

using namespace std;

User::User(string name, string email, string password) {
    this->name = name;
    this->email = email;
    this->password = password;
    bool active = true;
}

string User::getName() {
    return name;
}

string User::getEmail() {
    return email;
}

string User::getPassword() const {
    return password;
}

bool User::isActive() {
    return active;
}

vector<Expense> User::getAllExpenses() const {
    return allExpenses;
}

double User::getTotalExpenses() const {
    return allExpenses.size();
}

double User::getBalance() const {
    return balance;
}

void User::updateBalance(double total) {
    balance = balance - total;
}

void User::setBalance(double balance) {
    this -> balance = balance;
}

/*
void User::hashPassword(string password) {

}
*/

void User::setActive(bool active) {
    this->active = active;
}