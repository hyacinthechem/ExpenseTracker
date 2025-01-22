//
// Created by Hyacinthe Chemasle on 10/01/2025.
//

#include "Expense.h"
#include <string>
#include <sstream>
#include <iostream>

#include "User.h"

using namespace std;

Expense::Expense(string title, string description, string datePurchased, double amountSpent) {
    this->title = title;
    this->description = description;
    this->datePurchased = datePurchased;
    this->amountSpent = amountSpent;
}

void Expense::computeBalance(User user) {
    int totalBalance = user.getBalance();
    user.updateBalance(totalBalance - amountSpent);
}


string Expense::getTitle() {
    return title;
}

string Expense::getDescription() {
  return description;
}

string Expense::getDatePurchased() const {
    return datePurchased;
}

double Expense::getAmountSpent() const {
    return amountSpent;
}

string Expense::toString() {
    return "Title: " + title + " Description: " + description + " AmountSpent: " + to_string(amountSpent) + "\n" + "Date Purchased: " + datePurchased;
}




