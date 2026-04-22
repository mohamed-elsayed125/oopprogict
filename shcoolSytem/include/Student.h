#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <Person.h>

using namespace std;

class Student:public Person
{
private:
    string gradeLevel;
    float gpa;
public:
    Student()
    {

    }
    Student(string name,int age,string gander,string address,
            string phoneNumber,string email,int id,string gradeLevel,float gpa )
    {
        this->name=name;
        this->age=age;
        this->gander=gander;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGpa(float gpa)
    {
        this->gpa=gpa;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGpa()
    {
        return gpa;
    }
    void print()
    {
       Person::print();
        cout<<"The GradeLevel Is"<<gradeLevel<<endl;
        cout<<"The Age Is"<<gpa<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"Please Inter Your Grade Level"<<endl;
        cin>>gradeLevel;
        cout<<"Please Inter Your Apa"<<endl;
        cin>>gpa;
    }

};

#endif // STUDENT_H
