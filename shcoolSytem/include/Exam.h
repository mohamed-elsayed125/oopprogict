#ifndef EXAM_H
#define EXAM_H
#include <iostream>
#include <Person.h>

using namespace std;

class Exam:public Person
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam()
    {

    }
    Exam(string examName,string courseCode ,string examDate)
    {
        this->examName=examName;
        this->courseCode=courseCode;
        this->examDate=examDate;
    }
    void setExamName(string examName)
    {
         this->examName=examName;
    }
    void setCourseCode(string courseCode)
    {
         this->courseCode=courseCode;
    }
    void setExamDate(string examDate)
    {
         this->examDate=examDate;
    }
    string getExamName()
    {
        return examName;
    }
     string getCourseCode()
    {
        return courseCode;
    }
     string getExamDate()
    {
        return examDate;
    }
     void print()
    {
        Person::print();
        cout<<"The ExamName Is"<<endl;
        cout<<"The CourseCode Is"<<endl;
        cout<<"The ExamDate Is"<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"PLease Inter Your ExamName"<<endl;
        cin>>examName;
        cout<<"PLease Inter Your CourseCode"<<endl;
        cin>>courseCode;
        cout<<"PLease Inter Your ExamDate"<<endl;
        cin>>examDate;
    }
};

#endif // EXAM_H
