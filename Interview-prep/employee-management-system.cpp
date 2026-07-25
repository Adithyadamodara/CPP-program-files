#include<bits/stdc++.h>
using namespace std;


class Employee{
protected:
    string name;
    int id;
    double salary=0;
public:
    Employee(){
        name = "";
        id = 0;
        salary = 0;
    }
    Employee(string name, int id): name(name), id(id){
        salary = 0;
    }

    virtual double calculateSalary() = 0;

    virtual void display() = 0;
};


class FullTimeEmployee: public Employee{
public:
    FullTimeEmployee(): Employee() {}
    FullTimeEmployee(string name, int id): Employee(name, id){}
    double calculateSalary(){
        cout<<"Enter amount: ";
        cin>>salary;
        return salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class PartTimeEmployee: public Employee{
private:
    int hours;
    int rate;
public:
    PartTimeEmployee(): Employee() {}
    PartTimeEmployee(string name, int id): Employee(name, id){}
    double calculateSalary(){
        cout<<"Enter hours: ";
        cin>>hours;
        cout<<"Enter rate: ";
        cin>>rate;
        salary = hours * rate;
        return salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Intern: public Employee{
private:
    double stipend;
public:
    Intern(): Employee() {}
    Intern(string name, int id): Employee(name, id) {}
    double calculateSalary(){
        cout<<"Enter Stipend: ";
        cin>>stipend;
        salary = stipend;
        return salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    // FullTimeEmployee e("Adithya", 123);
    // e.display();
    // cout<<e.calculateSalary();
    // PartTimeEmployee e1("Rob", 122);
    // e1.display();
    // cout<<e1.calculateSalary();

    Employee* emp = new FullTimeEmployee("ADi", 123);
    emp->display();

    Employee e = FullTimeEmployee("A",1234);
    e.display();
    return 0;
}