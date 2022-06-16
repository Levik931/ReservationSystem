//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Ticket.h"
#include <stdio.h>

void Ticket::setDestination()
{
    cout<<"Please enter the desntination: "<<endl;
    cin.ignore();
    getline(cin, destination);
    
}
string Ticket::getDestination() const
{
    return destination;
}
string Ticket::getDeparture() const
{
    return destination;
}
void Ticket::setDeparture()
    
{
    cout<<"Please enter the departure from: "<<endl;
    cin.ignore();
    getline(cin, departure);
    
}

void Ticket::setTime()
{
    cout<<"Please enter the time of the flight: "<<endl;
    cin.ignore();
    getline(cin, time);
}
string Ticket::getTime() const
{
    return time;
}

void Ticket::setTicketNumber()
{
    cout<<"Please enter the Ticket number : "<<endl;
    cin >> ticketNumber;
    while (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Please only enter numeric values ." << endl;
                cin >> ticketNumber;
            }
}
int Ticket::getSeatNumber() const
{
    return seatNumber;
}

int Ticket::getTicketNumber() const
{
    return ticketNumber;
}
void Ticket::setSeatNumber(int seat)
{
    
    seatNumber = seat;
}

void Ticket::setMiles()
{
    cout<<"Please enter the total miles of the flight"<<endl;
    
    while (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Please only enter numeric values ." << endl;
                cin >> ticketNumber;
            }
    cin >> miles;
 }

int Ticket::getMiles() const
{
    return miles;
    
}

void Ticket::valicate()
{
    valid = 1;
}
void Ticket::canceling()
{
    valid = 0;
}

bool Ticket::isValid()
{
    if ( valid == 1 ){
        return true;
    }
    else
        return false;
}

void Ticket::setDate()
{
    cout<<"Please enter the date of the flight"<<endl;
    cin.ignore();
    getline( cin , date);
}
string Ticket::getDate() const
{
    return date;
}





