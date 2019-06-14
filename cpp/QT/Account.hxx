//
// Created by ys on 2019/6/14.
//

#ifndef OPONCPP_ACCOUNT_HXX
#define OPONCPP_ACCOUNT_HXX

#include <iostream>
#include <cstring>

using std::cout;

void testQt();

void testAcc();

class Account
{
public:
    int getID() const;

    void setID(int ID);

    float getBalance() const;

    void setBalance(float balance);

private:
    int ID;
    char Name[20];
    float balance;
public:
    Account()
    {
        ID = -1;
        strcpy(Name, "xxxxxxxx");
        balance = 0;
    };

    Account(int ID, char Name[], float balance)
    {
        this->ID = ID;
        strcpy(this->Name, Name);
        this->balance = balance;
    }

    Account(Account &other)
    {
        ID = other.ID;
        strcpy(Name, other.Name);
        balance = other.balance;
    }

    void Initial(int ID, char Name[], float balance);

    //取钱，存钱
    int withdraw(float m);

    void deposits(float m);

    void setName(char *name);

    void getName(char *);

    void showMe()
    {
        cout << Name << ":" << balance << std::endl;
    }
};

#endif //OPONCPP_ACCOUNT_HXX
