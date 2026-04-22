#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <Person.h>

using namespace std;


class Course:public Person
{
   private:
       string courseCode;
       string courseName;
       string teacherName;
   public:
    Course ()
    {

    }
    Course(string courseCode, string courseName, string teacherName)
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName=courseName;
    }
     void setTeacherName(string teacherName)
    {
        this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void print()
    {
        Person::print();
        cout<<"This CourseCode Is "<<courseCode<<endl;
        cout<<"This CourseName Is "<<courseName<<endl;
        cout<<"This TeacherName Is "<<teacherName<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"Please Inter Your CourseCode "<<endl;
        cin>>courseCode;
        cout<<"Please Inter Your CourseName "<<endl;
        cin>>courseName;
        cout<<"Please Inter Your TeacherName "<<endl;
        cin>>teacherName;
    }
};

#endif // COURSE_H
