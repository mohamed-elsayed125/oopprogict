#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <Person.h>

using namespace std;


class Teacher:public Person
{
private:
    string subject;
    float salary;
public:
    Teacher()
    {

    }
    Teacher(string name,int age,string gander,string address,
            string phoneNumber,string email,int id,string subject, float salary)
    {
        this->name=name;
        this->age=age;
        this->gander=gander;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->subject=subject;
        this->salary=salary;

    }
    void setSubject(string subject)
    {
        this->subject=subject;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getSubject()
    {
        return subject;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"The Subject Is"<<subject<<endl;
        cout<<"The Salary Is"<<salary<<endl;
    }
    void informathin()
    {
        Person::information();
        cout<<"Please Inter Your Subject "<<endl;
        cin>>subject;
        cout<<"Please Inter Your Salary "<<endl;
        cin>>salary;
    }


};

#endif // TEACHER_H
