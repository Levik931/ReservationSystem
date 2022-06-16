//Levik Khachadoorian
//CS/IS 137 12/13/2021
//FINAL PROJECT

#include "Person.h"
#include "Ticket.h"
#include "economyClass.h"
#include "bussinesClass.h"
#include "firstClass.h"
#include "Customer.h"
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    
    Customer* Ptr[100];
    char choice;
    int i = 0;
    int seatNumber1 = 0;
    int seat[4][25];
    int g=1;
    for ( int n=0; n < 4; n++)
    {
        for ( int m =0 ; m < 25 ;m++)
        {
            seat[n][m]= g ;
            g++;
        }
    }
    
do {
    
    cout<<"-------------------------------------------------------";
    cout<<endl;
    cout<<endl;
    cout<<"~~~Welcome To The 137 Flight Reservation System~~~"<<endl;
    cout<<" Please select one of the following:"<<endl;
    cout<<"================================================="<<endl;
    cout<<" a. Make a Reservation."<<endl;
    cout<<" b. Cancel a Reservation."<<endl;
    cout<<" c. View Ticket Details."<<endl;
    cout<<" d. Change the Date of a ticket."<<endl;
    cout<<" q. Exit the system."<<endl;
    cout<<endl;
    cin >> choice;
    while (choice !='a' && choice !='A' && choice !='b' && choice !='B' && choice !='c' && choice !='C' && choice !='d' && choice !='D' && choice !='q' && choice != 'Q') {
        cout<<"INVALID SELECTION - Please enter one of the above: "<<endl;
        cin >> choice;
    }
    switch (choice) {
  
        case 'A':
        case 'a':
            
            int tChoice;
            cout<<"====================================================="<<endl;
            cout<<"Please select the type of ticket that you want to get: "<<endl;
            cout<<"1. Ecnomoy Ticket."<<endl;
            cout<<"2. Bussines Ticket."<<endl;
            cout<<"3. First Class Ticket."<<endl;
            cin >> tChoice;
            while (tChoice != 1 && tChoice !=2 && tChoice !=3) {
                cout<<"INVALID SELECTION - Please enter one of the above: "<<endl;
                cin >> tChoice;
            }
            switch (tChoice) {
                case 1:
                    
                    Ptr[i] = new Customer();
                    Ptr[i]->setName();
                    Ptr[i]->setLastName();
                    Ptr[i]->setAddress();
                    Ptr[i]->setPhoneNumber();
                    Ptr[i]->setRewards();
                    Ptr[i]->setPosition(i);
                    Ptr[i]->E1.setDeparture();
                    Ptr[i]->E1.setDestination();
                    Ptr[i]->E1.setTicketNumber();
                    Ptr[i]->E1.setTime();
                    Ptr[i]->E1.setMiles();
                    Ptr[i]->E1.setRate();
                    Ptr[i]->setRewards();
                    Ptr[i]->showRewards();
                    cout<<"Please enter the seat number :"<<endl;

                    for ( int i = 0 ; i < 4 ; i++)
                                        {
                            for ( int j = 0 ; j < 25 ; j++)
                                                 {
                                                     cout << setw(3)<<left<<seat[i][j] <<" ";
                                }
                                        cout<<endl;
                                    }
                                
                                    cin >> seatNumber1;
                    
                           while (cin.fail())
                              {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> seatNumber1;
                                }
                                       for ( int i = 0 ; i < 4 ; i++)
                                       {
                                        for ( int j = 0 ; j < 25 ; j++)
                                            {
                                            while( seat[i][j] == seatNumber1 && seat[i][j] == 0)
                                            {
                                            
                                                    cout<<"This seat is occupied please select a different seat: "<<endl;
                                                    cin >> seatNumber1;
                                                
                                                }
                                                seat[i][j] = 0;
                                         }
                                         }
                    Ptr[i]->E1.setSeatNumber(seatNumber1);
                    cout<<"Thanks, you are all set. "<<endl;
                    cout<<"Please lookup your flight information if you would like by selecting Option C ."<<endl;
                    i++;
                    break;
                case 2:
                    Ptr[i] = new Customer;
                    Ptr[i]->setName();
                    Ptr[i]->setLastName();
                    Ptr[i]->setAddress();
                    Ptr[i]->setPhoneNumber();
                    Ptr[i]->setRewards();
                    Ptr[i]->setPosition(i);
                    Ptr[i]->B1.setDeparture();
                    Ptr[i]->B1.setDestination();
                    Ptr[i]->B1.setTicketNumber();
                    Ptr[i]->B1.setTime();
                    Ptr[i]->B1.setMiles();
                    Ptr[i]->B1.setRate();
                    Ptr[i]->setRewards();
                    Ptr[i]->showRewards();
                    for ( int i = 0 ; i < 4 ; i++)
                                         {
                             for ( int j = 0 ; j < 25 ; j++)
                                                  {
                                                      cout << setw(3)<<left<<seat[i][j] <<" ";
                                 }
                                         cout<<endl;
                                     }
                                 
                                     cin >> seatNumber1;
                    
                        while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> seatNumber1;
                            }
                                         
                                        for ( int i = 0 ; i < 4 ; i++)
                                        {
                                         for ( int j = 0 ; j < 25 ; j++)
                                             {
                                                 while( seat[i][j] == seatNumber1 && seat[i][j] == 0)
                                                 {
                                                 
                                                         cout<<"This seat is occupied please select a different seat: "<<endl;
                                                         cin >> seatNumber1;
                                                     
                                                     }
                                                 seat[i][j] = 0;
                                          }
                                          }
                     Ptr[i]->B1.setSeatNumber(seatNumber1);
                    cout<<"Thanks, you are all set. "<<endl;
                    cout<<"Please lookup your flight information if you would like by selecting Option C ."<<endl;
                    i++;
                    break;
                case 3:
                    Ptr[i] = new Customer;
                    Ptr[i]->setName();
                    Ptr[i]->setLastName();
                    Ptr[i]->setAddress();
                    Ptr[i]->setPhoneNumber();
                    Ptr[i]->setRewards();
                    Ptr[i]->setPosition(i);
                    Ptr[i]->F1.setDeparture();
                    Ptr[i]->F1.setDestination();
                    Ptr[i]->F1.setTicketNumber();
                    Ptr[i]->F1.setTime();
                    Ptr[i]->F1.setMiles();
                    Ptr[i]->F1.setRate();
                    Ptr[i]->setRewards();
                    Ptr[i]->showRewards();
                    for ( int i = 0 ; i < 4 ; i++)
                                         {
                             for ( int j = 0 ; j < 25 ; j++)
                                                  {
                                                      cout << setw(3)<<left<<seat[i][j] <<" ";
                                 }
                                         cout<<endl;
                                     }
                                 
                                     cin >> seatNumber1;
                    
                      while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> seatNumber1;
                            }
                                         
                                        for ( int i = 0 ; i < 4 ; i++)
                                        {
                                         for ( int j = 0 ; j < 25 ; j++)
                                             {
                                                 while( seat[i][j] == seatNumber1 && seat[i][j] == 0)
                                                 {
                                                 
                                                         cout<<"This seat is occupied please select a different seat: "<<endl;
                                                         cin >> seatNumber1;
                                                     
                                                     }
                                                 seat[i][j] = 0;
                                          }
                                          }
                     Ptr[i]->F1.setSeatNumber(seatNumber1);
                    cout<<"Thanks, you are all set. "<<endl;
                    cout<<"Please lookup your flight information if you would like by selecting Option C ."<<endl;
                    i++;
                    break;
            }
            
        break;
        case 'B':
        case 'b': {
            int j = 0;
            cout<<"Please enter the flight class and ticket number to cancel: "<<endl;
            cout<<"1. Ecnomomy Class"<<endl;
            cout<<"2. Bussines Class"<<endl;
            cout<<"3. First Class"<<endl;
            cin >> j;
            while (j != 1 && j !=2 && j !=3) {
                cout<<"INVALID SELECTION - Please enter one of the above unmbers: "<<endl;
                cin >> j;
            }
            switch (j)
            {
                case 1: {
                    int num = 0;
                    cout<<"Please enter the ticket number: "<<endl;
                    cin >> num;
                    
                    while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> num;
                            }
                    for ( int p=0 ; p < i ; p++)
                    {
                        if ( num == Ptr[p]->E1.getTicketNumber())
                        {
                            Ptr[p]->E1.canceling();
                            cout<<"You ticket has been canceled."<<endl;
                        }
                    }
                    
                    
                }
                    break;
                case 2: {
                    int p =0;
                    cout<<"Please enter the ticket number: "<<endl;
                    cin >> p;
                    
                    while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> p;
                            }
                    for ( int p=0 ; p < i ; p++)
                    {
                        if ( p == Ptr[p]->B1.getTicketNumber())
                        {
                            Ptr[p]->B1.canceling();
                            cout<<"You ticket has been canceled."<<endl;
                        }
                    }
                    
                    
                }
                    break;
                case 3: {
                    int t=0;
                    cout<<"Please enter the ticket number: "<<endl;
                    cin >> t;
                    
                    while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> t;
                            }
                    for ( int p=0 ; p < i ; p++)
                    {
                        if ( t == Ptr[p]->F1.getTicketNumber())
                        {
                            Ptr[p]->F1.canceling();
                            cout<<"You ticket has been canceled."<<endl;
                        }
                    }
                    
                
                }
                    break;
            }
            break;
        }
  break;
        case 'C':
        case 'c': {
            int num = 0 ;
            cout<<"Plase enter the ticket class for information."<<endl;
            cout<<"1. Ecnomomy Class"<<endl;
            cout<<"2. Bussines Class"<<endl;
            cout<<"3. First Class"<<endl;
            cin >> num;
            switch (num) {
                case 1: {
                    int num1 = -1;
                    cout<<"Please enter the ticket number :"<<endl;
                    cin >> num1;
                    
                    while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> num1;
                            }
                    for ( int p=0 ; p < i ; p++)
                    {
                        if (num1 == Ptr[p]->E1.getTicketNumber())
                        {
                            num1 = p;
                            
                        }
                    
                    }
                    
                    cout<<"      Your Ticket information   "<<endl;
                    cout<<"First and last name: ";
                    cout<< Ptr[num1]->getName()<<"  ";
                    cout<< Ptr[num1]->getLastName()<<endl;
                    cout<< Ptr[num1]->E1;
                    cout<<endl;
                    
                    
                    
                    
                  }
                    break;
                   
            
                  case 2: {
                    int num2;
                    cout<<"Please enter the ticket number :"<<endl;
                    cin >> num2;
                      
                      while (cin.fail())
                              {
                                  cin.clear();
                                  cin.ignore();
                                  cout << "Please only enter numeric values ." << endl;
                                  cin >> num2;
                              }
                      for ( int p=0 ; p < i ; p++)
                      {
                          if ( num2 == Ptr[p]->B1.getTicketNumber())
                          {
                              num2 = p;
                          }
                      
                    cout<<"      Your Ticket information   "<<endl;
                    cout<<"Fist and last name: ";
                    cout<< Ptr[num2]->getName();
                    cout<< Ptr[num2]->getLastName();
                    cout<< Ptr[num2]->B1;
                    cout<< endl;
                      }
                      
                    }
                    break;
                    
                  case 3: {
                    int num3;
                    cout<<"Please enter the ticket number :"<<endl;
                    cin >> num3;
                      
                      while (cin.fail())
                              {
                                  cin.clear();
                                  cin.ignore();
                                  cout << "Please only enter numeric values ." << endl;
                                  cin >> num3;
                              }
                      for ( int p=0 ; p < i ; p++)
                      {
                          while ( num3 == Ptr[p]->F1.getTicketNumber())
                          {
                              num3 = p;
                          }
                      
                    cout<<"      Your Ticket information   "<<endl;
                    cout<<"Fist and last name: ";
                    cout<< Ptr[num3]->Person::getName();
                    cout<< Ptr[num3]->Person::getLastName();
                    cout<< Ptr[num3]->F1;
                    cout<<endl;
                          }
                      
                       }
                    break;
                    }
            break;
     }
    break;
        case 'D':
        case 'd': {
            
            int num4 =0 ;
            cout<<"Please enter the class of the ticket you want to change the date of: "<<endl;
            
            cout<<"1. Ecnomomy Class"<<endl;
            cout<<"2. Bussines Class"<<endl;
            cout<<"3. First Class"<<endl;
            cin >> num4;
            switch (num4) {
                case 1: {
                    int num5 = -1;
                    cout<<"Please enter the ticket number :"<<endl;
                    cin >> num5;
                    
                    while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> num5;
                            }
                    for ( int p=0 ; p < i ; p++)
                    {
                        if (num5 == Ptr[p]->E1.getTicketNumber())
                        {
                            num5 = p;
                        }
                    Ptr[num5]->E1.setDate();
                    }
                }
                    break;
                case 2:{
                    int num6 = -1;
                    cout<<"Please enter the ticket number :"<<endl;
                    cin >> num6;
                    
                    while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> num6;
                            }
                    for ( int p=0 ; p < i ; p++)
                    {
                        if (num6 == Ptr[p]->E1.getTicketNumber())
                        {
                            num6 = p;
                        }
                    Ptr[num6]->B1.setDate();
                    
                       }
                }
                    break;
                case 3: {
                    int num7 = -1;
                    cout<<"Please enter the ticket number :"<<endl;
                    cin >> num7;
                    
                    while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore();
                                cout << "Please only enter numeric values ." << endl;
                                cin >> num7;
                            }
                    for ( int p=0 ; p < i ; p++)
                    {
                        if (num7 == Ptr[p]->E1.getTicketNumber())
                        {
                            num7 = p;
                        }
                    Ptr[num7]->F1.setDate();
                    
                      }
                   }
                    break;
            }
           
           
        }
            break;
}
}
    while ( choice != 'q' && choice != 'Q');
    cout<<"Thank you for using the 137 reservation system, Have a great day!"<<endl;
    cout<<endl;
   
    return 0;
}


