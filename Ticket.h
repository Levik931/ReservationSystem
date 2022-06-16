//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Person.h"
#ifndef Ticket_h
#define Ticket_h
#include <string>
#include <iostream>
using namespace std;
class Ticket
{
private:
  string departure = "NUll";
  string destination = "NUll" ;
  int seatNumber = 0;
  int ticketNumber = -1;
  string time = "NUll";
  int miles = 0;
  string date = "NUll";
  double rate = 0.0;
  int valid = 0;
   
  
  
public:

void setDestination();
void setDeparture();
void setSeatNumber(int);
void setTicketNumber();
void setTime();
string getDeparture() const ;
string getDestination() const;
int getPrice();
int getSeatNumber()const;
int getTicketNumber()const;
string getTime()const;
    
    void setMiles();
    int getMiles()const;
    void setDate();
    string getDate()const;
    virtual void setRate() = 0;
    virtual double getRate() const = 0;
    virtual double calcTicketPrice () const = 0 ;
    bool isValid ();
    void valicate();
    void canceling();

   friend ostream & operator<<(ostream& out, const Ticket&);
};

#endif
