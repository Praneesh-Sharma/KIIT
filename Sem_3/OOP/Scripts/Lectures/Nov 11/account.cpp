/*Create a class which stores account number, customer name and balance. Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
minimum balance. The ‘Current’ class stores the over-due amount. Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance
Display data from each class using virtual function.*/
#include <iostream>
#include <string.h>
using namespace std;

class Account{
    protected:
        int acc_num;
        string cust_name;
        int balance;
    public:
        Account(){
            cout << "Enter account number: ";
            cin >> acc_num;
            cout << "Enter customer name: ";
            cin >> cust_name;
            cout << "Enter balance: ";
            cin >> balance;
        }
        ~Account(){}
        virtual void display(){}
};

class Savings: public Account{
    private:
        int min_bal;
    public:
        Savings(){
            cout << "Enter minimum balance: ";
            cin >> min_bal;
        }
        void withdraw(int val){
            if(balance - val >= min_bal){
                balance -= val;
                cout << "withdrawn" << endl;
            }
            else
                cout << "cannot be withdrawn";
        }
        void deposit(int val){
            balance += val;
            cout << "deposited" << endl;
        }
        void display(){
            cout << "Balance: " << balance << endl;
        }
};

class Current: public Account{
    private:
        int overdue = 0;
    public:
        void withdraw(int val){
            balance -= val;
            cout << "withdrawn" << endl;
            if(balance < 0){
                overdue = balance;
                cout << "Overdue Amount: " << overdue << endl;
            }
        }
        void deposit(int val){
            balance += val;
            cout << "deposited" << endl;
            cout << "Overdue amount: " << overdue << endl;
        }
        void display(){
            cout << "Balance: " << balance << endl;
        }
};

int main(){
    Account *A;

    Savings S;
    A = &S;
    S.deposit(100);
    A->display();
    S.withdraw(50);
    A->display();
    
    Current C;
    A = &C;
    C.withdraw(500);
    A->display();
    C.deposit(300);
    A->display();
    return 0;
}