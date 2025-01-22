//
// Created by Hyacinthe Chemasle on 14/01/2025.
//

#ifndef USER_H
#define USER_H

#include <string>
#include "Expense.h"
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

class Expense;

class User {
  private:
    vector<Expense> allExpenses;
    int id;
    std::string name;
    string email;
    string password;
    bool active;
    double balance;

    public:
      User(string name,string email,string password);
      int getId();
      string getName();
      string getEmail();
      string getPassword() const;
      vector<Expense> getAllExpenses() const;
      double getTotalExpenses() const;
      bool isActive();
      double getBalance() const;
      void updateBalance(double total);
      void setBalance(double amount); //vulnerability for threat actors to set for themselves
      void setActive(bool active);
      void hashPassword(string password);


};



#endif //USER_H
