#include<bits/stdc++.h>
using namespace std;

static int accounts;

class BankAccount{
private:
    int accountNumber;
    string holderName = "";
    double balance;
    
public:
    BankAccount(){
        accountNumber = 0;
        holderName = "NA";
        balance = 0;
        accounts++;
    }

    BankAccount(int ac, string hName, double bal): accountNumber(ac), holderName(hName), balance(bal) {
        accounts++;
    }

    BankAccount(const BankAccount& b){
        accountNumber = b.accountNumber;
        holderName = b.holderName;
        balance = b.balance;
    }

    void deposit(double amount){
        if(amount<0) {
            cout<<"Deposit amount cannot be negative."<<endl;
            return;
        }
        balance += amount;
        cout<<"Successfully Deposited."<<endl;
    }

    void withdraw(int amount){
        if(amount > balance) {
            cout<<"Insufficient balance."<<endl;
            return;
        }
        balance -= amount;
        cout<<"Successfully withdrawn."<<endl;
    }

    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder Name: "<<holderName<<endl;
        cout<<"Balance: "<<balance<<endl; 
        cout<<"Total Accounts: "<<accounts<<endl;
    }
    ~BankAccount(){ 
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    int totalAccounts = 0;
    BankAccount A(123456, "Adithya", 500000); 
    BankAccount B = A;
    BankAccount C(123457, "Sunil", 600000);
    A.display();
    B.display();
    C.display();

    A.deposit(8000);
    A.display();
    B.display();

    B.withdraw(500001);
    
    BankAccount D(A);
    D.display();
    D.withdraw(10000);
    D.display();
    A.display();
    return 0;
}