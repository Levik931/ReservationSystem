//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Ticket.h"
#ifndef firstClass_h
#define firstClass_h
#include <iostream>
#include <string>
using namespace std;



class First : public Ticket
{
private:
    
    int firstClassRate;
    
    
public:
    
    First();
    void setRate();
    double getRate() const;
    double calcTicketPrice() const;
    friend ostream &operator<<(ostream& out,const First&);
};







#endif
