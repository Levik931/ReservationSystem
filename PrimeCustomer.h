#include "Customer.h"
#include <iostream>
#ifndef PrimeCustomer_h
#define PrimeCustomer_h

class PrimeCustomer : public Customer
{
  private:
    int primeRewardsRate = 0;
    int totalRewardsPrime = 0;
public:
    void makePrime();
    bool isPrime();
    //  void setPrimeRewardsRate();
    virtual void setRewards();
    virtual int getRewards();
     
    
};




#endif
