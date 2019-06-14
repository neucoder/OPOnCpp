//
// Created by ys on 2019/6/14.
//

#include "Account.hxx"
#include <iostream>
#include <cstring>

using namespace std;


void Account::Initial(int ID, char *Name, float balance)
{
    this->ID = ID;
    strcpy(this->Name, Name);
    this->balance = balance;
}


int Account::withdraw(float m)
{
    if (balance > m)
    {
        balance = balance - m;
        return 1;
    }
    else
    {
        return -1;
    }
}


void Account::deposits(float m)
{
    balance += m;
}

void Account::setName(char *name)
{
    strcpy(Name, name);
}

void Account::getName(char *res)
{
    strcpy(res, Name);
}

int Account::getID() const
{
    return ID;
}

void Account::setID(int ID)
{
    Account::ID = ID;
}

float Account::getBalance() const
{
    return balance;
}

void Account::setBalance(float balance)
{
    Account::balance = balance;
}

void testAcc()
{
    Account my;
    char name[] = "Jack";
    my.Initial(10112, name, 600.0);
    my.withdraw(500);
    my.showMe();
    Account other(my);
    other.deposits(200);
    other.showMe();
    Account d;
    d.showMe();
    char dname[] = "abc";
    Account dd(110, dname, 900);
    dd.showMe();
    Account C[3];
    Account *pa = new Account();
    Account *pb = new Account(111, dname, 1000);
    cout << pb->getID() << " " << pb->getBalance() << endl;
    pb->setID(122);
    pb->setBalance(12222);
    cout << pb->getID() << " " << pb->getBalance() << endl;
    pb->showMe();

}

void testQt()
{
    cout << "test QT_Acc lib" << endl;
}
