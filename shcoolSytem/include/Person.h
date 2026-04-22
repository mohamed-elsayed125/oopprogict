#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;


class Person
{
protected:
    string name;
    int age;
    string gander;
    string address;
    string phoneNumber;
    string email;
    int id;
public:
    Person()
    {

    }
    person(string name,int age,string gander,string address,
string phoneNumber,string email,int id
           )
    {
        this->name=name;
        this->age=age;
        this->gander=gander;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
    }

    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setGander(string gander)
    {
        this->gander=gander;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    void setId(int id)
    {
        this->id=id;
    }
    string getName()
    {
        return name;
    }
    int  getAge()
    {
        return age;
    }
    string getGander()
    {
        return gander;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getId()
    {
        return id;
    }
    void print()
    {
        cout<<"The Name Is"<<name<<endl;
        cout<<"The Age Is"<<age<<endl;
        cout<<"The Gander is"<<gander<<endl;
        cout<<"The Address Is "<<address<<endl;
        cout<<"The Is PhoneNamber"<<phoneNumber<<endl;
        cout<<"The Email Is"<<email<<endl;
        cout<<"The Id is"<<id<<endl;
    }
   void information()
    {
    cout <<"Please Inter Your Name "<<endl;
    cin>>name;
    cout <<"Please Inter Your Age "<<endl;
    cin>>age;
    cout <<"Please Inter Your Gender "<<endl;
    cin>>gander;
    cout <<"Please Inter Your Address "<<endl;
    cin>>address;
    cout <<"Please Inter Your Phone Numer "<<endl;
    cin>>phoneNumber;
    cout <<"Please Inter Your Email "<<endl;
    cin>>email;
    cout <<"Please Inter Your Id "<<endl;
    cin>>id;
    }

};

#endif // PERSON_H
