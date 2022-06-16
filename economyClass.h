//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Ticket.h"
#ifndef economyClass_h
#define economyClass_h
#include <iostream>
#include <string>
using namespace std;



class Economy : public Ticket
{
private:
    
    int economyRate = 0.0;
    
public:
    Economy();
    virtual void setRate();
    virtual double getRate() const;
    virtual double calcTicketPrice() const;


    
    friend ostream &operator<<(ostream& out,const Economy&);
        
        
    
};




#endif
