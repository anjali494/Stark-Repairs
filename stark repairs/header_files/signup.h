#ifndef signup_h
#define signup_h 

#include <string>
#include "invoice.h"
#include "service_details.h"
#include "payment.h"
using namespace std;

class Service_Details;
class Payment;

class Signup
{
      protected:
 
             string Cust_Name;
             long long int PhoneNo;
             string Email_id;
             string password;
             string conf_password;

      public:

            Signup();

            friend void display_invoice(Signup S,Service_Details SD,Payment p);

            void title_bar();
            int check_email();
            void display();
            void input_details_sign_1();
            void input_details_sign_2();
            int check_password();
            int check_length();
};

#endif
                        
