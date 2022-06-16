//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Person.h"
#include <stdio.h>

Person::Person()
{
    name = "NULL";
    lastName ="NULL";
    phoneNumber = "NULL";
   address = "NULL";
    position = 0;
 }

void Person::setName()
{
    cout<<"Please enter the name of the person: "<<endl;
    cin.ignore();
    getline (cin , name);
}
void Person::setLastName()
{
    cout<<"Please enter the last name of the person: "<<endl;
    cin.ignore();
    getline(cin, lastName);
}
void Person::setPhoneNumber()
{
    cout<<"Please enter the phone number of the person: "<<endl;
    cin.ignore();
    getline(cin, phoneNumber);
}

void Person::setAddress()
{
    cout<<"Pleser enter the address of the person: "<<endl;
    cin.ignore();
    getline(cin, address);
}
string Person::getName() const
{
    return name;
}
string Person::getLastName() const
{
    return lastName;
}
string Person::getPhoneNumber() const
{
    return phoneNumber;
}
string Person::getAddress() const
{
    return address;

}


void Person::setPosition(int Obj)
{
    position = Obj;
}
int Person::getPosition() const
{
    return position;
}
