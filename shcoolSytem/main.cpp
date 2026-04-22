#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <School.h>
#include <Exam.h>
#include <Classroom.h>
#include <Course.h>




using namespace std;

int main()
{
    School sh;
    int n;
    do
    {
        cout<<"Press 0 To Exit"<<endl;
        cout<<"Press 1 To Add Student"<<endl;
        cout<<"Press 2 To Add Teacher"<<endl;
        cout<<"Press 3 To Add Staff"<<endl;
        cout<<"Press 4 To Add Course"<<endl;
        cout<<"Press 5 To Add Room"<<endl;
        cout<<"press 6 To Print All Students"<<endl;
        cout<<"press 7 To Print All Teachers"<<endl;
        cout<<"press 8 To Print All Staffs"<<endl;
        cout<<"press 9 To Print All Courses"<<endl;
        cout<<"press 10 To Print All Rooms"<<endl;
        cin>>n;
        system("cls");
        switch(n)
        {
        case 0:
            return 0;
        case 1:
            {
                Student s;
                s.information();
                sh.addStudent(s);
                break;
            }

             case 2:
            {
                Teacher t;
                t.information();
                sh.addTeacher(t);
                break;
            }
             case 3:
            {
                Staff s;
                s.information();
                sh.addStaff(s);
                break;
            }
             case 4:
            {
                Course c;
                c.information();
                sh.addCourse(c);
                break;
            }
        case 5:
            {
                Classroom cl;
                cl.information();
                sh.addClassroom(cl);
                break;
            }
        case 6:
            sh.printStudents();
            break;
             case 7:
            sh.printTeachers();
            break;
            case 8:
            sh.printStaffs();
            break;
            case 9:
            sh.printCourses();
            break;
            case 10:
            sh.printclassrooms();
            break;




        }

    }
    while(n!=0);

    Student s;
    Student s1;
    s.information();
    s1.information();
    sh.addStudent(s);
    sh.addStudent(s1);


}
