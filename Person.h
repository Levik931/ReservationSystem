//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT


#ifndef Person_h
#define Person_h
#include <iostream>
#include <string>

using namespace std;




class Person
{
private:
    
    string name;
    string lastName;
    string phoneNumber;
    string address;
    int position;
    
public:
    Person();
    
    void setName();
    void setLastName();
    void setPhoneNumber();
    void setAddress();
    void setPosition(int);
    
    int getPosition() const;
    string getName() const;
    string getLastName() const;
    string getPhoneNumber() const;
    string getAddress() const;
   
    
};
    
    
    
    
    
    
#endif 
