#ifndef SCHOOL_
#define SCHOOL_
#include <iostream>
#include <Person.h>
#include <Course.h>
#include <Classroom.h>


using namespace std;


class School
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffs[30];
    Course courses[6];
    Classroom classrooms[30];
   int studentCounter=0;
   int TeacherCounter=0;
   int StaffCounter=0;
   int CourseCounter=0;
   int ClassroomCounter=0;
public:
    void addStudent(Student stud)
    {
        students[studentCounter]=stud;
        studentCounter++;
    }
    void addTeacher(Teacher t)
    {
        teachers[TeacherCounter]=t;
        TeacherCounter++;
    }
    void addStaff(Staff s)
    {
        staffs[StaffCounter]=s;
        StaffCounter++;
    }
    void addCourse(Course c)
    {
        courses[CourseCounter]=c;
        CourseCounter++;
    }
    void addClassroom(Classroom cl)
    {
        classrooms[ClassroomCounter]=cl;
        ClassroomCounter++;
    }
    void printStudents()
    {
        for(int i=0; i<studentCounter;i++)
        {
            students[i].print();
            cout<<endl;
        }
    }


     void printTeachers()
    {
        for(int i=0; i<TeacherCounter;i++)
        {
            teachers[i].print();
            cout<<endl;
        }
    }
     void printStaffs()
    {
        for(int i=0; i<StaffCounter;i++)
        {
            staffs[i].print();
            cout<<endl;
        }
    }
     void printCourses()
    {
        for(int i=0; i<CourseCounter;i++)
        {
            courses[i].print();
            cout<<endl;
        }
    }
     void printclassrooms()
    {
        for(int i=0; i< ClassroomCounter;i++)
        {
             classrooms[i].print();
            cout<<endl;
        }
    }

};

#endif // SCHOOL_
