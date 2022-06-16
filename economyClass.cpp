//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "economyClass.h"
#include <iostream>
#include <string>
#include <stdio.h>

Economy::Economy()
{
    economyRate = 0.0;
    
}
void Economy::setRate()
{
    cout<<"Please enter the EconomyRate: "<<endl;
    
    cin >> economyRate;
    
    while (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Please only enter numeric values ." << endl;
                cin >> economyRate;
            };
    
}

double  Economy::getRate() const
{
    return economyRate;
}

double  Economy::calcTicketPrice() const
{
    
   return getRate() * Ticket::getMiles();
    
}


ostream & operator<<(ostream& out,const Economy& Obj) {
    
    out <<"========================================="<<endl;
    out <<"Your Ticket number is: "<<Obj.Ticket::getTicketNumber()<<endl;
    out <<"Your flight is from "<<Obj.Ticket::getDeparture()<<" to "<<Obj.Ticket::getDestination()<<endl;
    out <<"Your seat number is: "<<Obj.Ticket::getSeatNumber()<<endl;
    out <<"Your flight is at: "<<Obj.Ticket::getTime()<<" Pacific time."<<endl;
    out <<"Your flight is about "<<Obj.Ticket::getMiles()<<" Miles"<<endl;
    out <<"The Price of your ticket is "<<Obj.calcTicketPrice()<<endl;
    return out;
    
}

