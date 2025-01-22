//
// Created by Hyacinthe Chemasle on 10/01/2025.
//






#include "Dashboard.h"
#include "Expense.h"
#include "User.h"
#include <string>
#include <sstream>
#include <iostream>

//QT Widget Imports


using namespace std;




Dashboard::Dashboard(QWidget *parent) : QWidget(parent) {
    button = new QPushButton("Create new Expense");
    button->setDefault(true);

    QObject::connect(button, &QPushButton::clicked,this, Dashboard::onAddExpenseButtonClicked); //the instantiated event listener
    //passes parameters like the button and QPUshButton method being signalled as clicked. defined within this class. and using the onAddExepenseButton as the slot method

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(button);
    setLayout(layout);

}

void Dashboard::onAddExpenseButtonClicked() {

}

void Dashboard::login() {
    string username;
    string password;
    cout<<"Enter username: ";
    std::getline(cin, username);
    cout<<"Enter password";
    std::getline(cin, password);
    for(auto user : allUsers) {
        if(user.getName()==username && user.getPassword()==password) {
            cout<<"User Logged in"<<endl;
            uploadNewExpense(user);
        }
    }

}



void Dashboard::uploadNewExpense(User user) {
    string title;
    string description;
    string dateOfPurchase;
    double amountSpent;

    double balance;

    std::cout<<"Title of Expense: "<<endl;
    std::getline(std::cin, title);


    std::cout<<"Description of Expense: "<<endl;
    std::getline(std::cin, description);
    std::cout<<"Date of purchase: "<<endl;
    std::getline(std::cin, dateOfPurchase); //avoids whitespace error
    std::cout<<"Amount of Expense: ";
    std::cin>>amountSpent;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //getline only works with strings so we use cin.ignore


    Expense expense(title,description,dateOfPurchase,amountSpent);
    user.getAllExpenses().push_back(expense);
    balance = user.getBalance();
    user.updateBalance(amountSpent);

    cout<<"Balance Before: "<<balance<<" Balance After: "<<user.getBalance()<<endl;
    cout<<"----------------"<<endl;
    cout<<"Expense Summary: "<<expense.toString()<<endl;
    cout<<"---------------"<<endl;
    cout<<"Total Expenses: "<<user.getTotalExpenses()<<endl;
}


void Dashboard::loadData() {
    User user("Lamine Yamal","LamineYamal@gmail.com","password");
    user.setBalance(250000);
    allUsers.push_back(user);
    login();
}

