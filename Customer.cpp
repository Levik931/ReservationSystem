//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Customer.h"

Customer::Customer()
{
    flightNums = 0;
    rewardsPerFlight = 10 ;
    totalRewards = 0;
}
 void Customer::setRewards()
{
     totalRewards = rewardsPerFlight + totalRewards;
     
 }

void Customer::showRewards()
{
    if ( totalRewards >= 50 )
    {
        cout<<" Congratulations You've earned a free fight. "<<endl;
    }
}
