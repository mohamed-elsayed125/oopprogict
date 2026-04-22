#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <Person.h>

using namespace std;


class Staff:public Person
{
private:
    string role;
    float salary;
public:
    Staff()
    {

    }
    Staff(string name,int age,string gander,string address,
          string phoneNumber,string email,int id,string role, float salary)
    {
        this->role=role;
        this->salary=salary;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float Salary)
    {
        this->salary=salary;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void print ()
    {
        Person::print();
        cout<<"The Role Is "<<role<<endl;
        cout<<"The Salary Is "<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout <<"Please Inter Your Role "<<endl;
        cin>>role;
        cout <<"Please Inter Your Salary "<<endl;
        cin>>salary;
    }
};

#endif // STAFF_H
