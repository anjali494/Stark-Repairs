#ifndef service_details_h
#define service_details_h

#include <string>
#include "invoice.h"
#include "signup.h"
#include "payment.h"
using namespace std;

class Signup;
class Payment;

class Service_Details
{
      private:

            int ch;
            string country;
            string state;
            string city;
            string srvice;
            long int postal_code;
            int service_fees;
            string servicing_address;
            string servicing_date;
            string servicing_time;

      public:

            friend void display_invoice(Signup S,Service_Details SD,Payment p);

            void title_bar();
            void service_details();
            void opted_service(string);
            void fees(int);
            void display_fees();
            void display_choice();
            int choice();
};

#endif
