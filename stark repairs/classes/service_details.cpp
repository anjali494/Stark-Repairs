#include <iostream>
#include <string>
#include "../header_files/service_details.h"
#include "../header_files/clean_stdin.h"
using namespace std;

//Service Details title bar

      void Service_Details::title_bar()
      {
            cout<<" Servicing Details:\n";
      }

//Taking details from user

      void Service_Details::service_details()
      {
            cout<<"\n  Enter your country: ";
            getline(cin,country);
                  
            cout<<"  Enter your state: ";
            getline(cin,state);

            cout<<"  Enter your city: ";
            getline(cin,city);

            cout<<"  Enter your city postal code: ";
            cin>>postal_code;

            clean_stdin();
                  
            cout<<"  Enter servicing address: ";
            getline(cin,servicing_address);

            cout<<"  Enter servicing date: ";
            getline(cin,servicing_date);

            cout<<"  Enter servicing time: ";
            getline(cin,servicing_time);  
      }

//opted service

      void Service_Details::opted_service(string str)
      {
            srvice=str;
      }

//Fees of different services
 
      void Service_Details::fees(int cost)
      {
            service_fees=cost;
      }

//Displaying the fees

      void Service_Details::display_fees()
      {
            cout<<service_fees;
      }

//Displaying the choice

      void Service_Details::display_choice()
      {
            cout<<"\n  Press 1 to confirm service";
            cout<<"\n  Press 2 to modify service";
            cout<<"\n  Press 3 to cancel service";
      }

//Taking choice from user

      int Service_Details::choice()
      {
            cout<<"\n\n  Enter your choice: ";
            cin>>ch;

            return ch;
      }
