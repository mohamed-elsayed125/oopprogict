#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
#include <Person.h>

using namespace std;


class Classroom:public Person
{
  private:
      int roomNumber;
      int capacity;
  public:
    Classroom()
    {

    }
    Classroom(int roomNumber,int capacity)
    {
        this->roomNumber=roomNumber;
        this->capacity=capacity;
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    void print()
    {
        Person::print();
        cout<<"The RoomNumber Is"<<roomNumber<<endl;
        cout<<"The Capacity Is"<<capacity<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"PLease Inter Your RoomNumber"<<endl;
        cin>>roomNumber;
        cout<<"PLease Inter Your Capacity"<<endl;
        cin>>capacity;
    }

};

#endif // CLASSROOM_H
