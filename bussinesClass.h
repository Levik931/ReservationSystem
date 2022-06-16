//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Ticket.h"
#ifndef bussinesClass_h
#define bussinesClass_h


class Bussines : public Ticket
{
    
private:
    double bussinesRate =0.0;
public:
    Bussines();
    void setRate();
    double getRate() const;
    double calcTicketPrice() const;
    friend ostream &operator<<(ostream& out,const Bussines&);
};




#endif
