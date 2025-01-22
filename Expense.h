//
// Created by Hyacinthe Chemasle on 10/01/2025.
//

#ifndef EXPENSE_H
#define EXPENSE_H
#include <iostream>
#include <sstream>
#include <User.h>

using namespace std;

class User;

class Expense {
private:
    string title;
    string description;
    double amountSpent;
    string datePurchased;

public:
    Expense(string title, string description, string datePurchased, double amountSpent);
    void computeBalance(User user);
    string getTitle();
    string getDescription();
    double getAmountSpent() const;
    string getDatePurchased() const;
    string toString();

};



#endif //EXPENSE_H
