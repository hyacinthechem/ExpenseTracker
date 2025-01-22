//
// Created by Hyacinthe Chemasle on 10/01/2025.
//

#ifndef DASHBOARD_H
#define DASHBOARD_H
#include "Expense.h"
#include "User.h"
#include <vector>
#include <QWidget> //mainClass
#include <QPushButton> //for the physical button
#include <QVBoxLayout> // for layout management ( like with JPane )
#include <QDialog> //For Dialog windows ( JPane.OptionDialog )
#include <QLineEdit> //textfields


using namespace std;

class Dashboard : public QWidget {
Q_OBJECT //Interpreter Helper

//constructor
public:
    explicit Dashboard(QWidget *parent = nullptr);

private slots: //slots can be attributed to eventListeners
    void onAddExpenseButtonClicked(); //event action listener method

private:
    QPushButton *button;
    vector<User> allUsers;

//methods
public:
    void viewBalance(User user);
    void uploadNewExpense(User user);
    void login();
    void loadData();


};



#endif //DASHBOARD_H
