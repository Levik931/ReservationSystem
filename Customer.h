//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#ifndef Customer_h
#define Customer_h
#include <iostream>
#include "Person.h"
#include "economyClass.h"
#include "bussinesClass.h"
#include "firstClass.h"

using namespace std;



class Customer : public Person {
  private:
    
    int flightNums = 0;
    int rewardsPerFlight;
    int totalRewards = 0;

  public:
    
    Economy E1;
    Bussines B1;
    First F1;
    Customer();
    
    int getFlightCounter() const;
    
    void setRewards();
    
    void showRewards();
    
   
   
};


#endif
