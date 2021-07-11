#ifndef payment_h
#define payment_h

#include <string>
#include "invoice.h"
#include "signup.h"
#include "service_details.h"
using namespace std;

class Signup;
class Service_Details;

class Payment
{
      private:

            int ch;

            long int credit_card_no;
            long int credit_card_expiry_date;
            int credit_card_cvv;
            
            long int debit_card_no;
            long int debit_card_expiry_date;
            int debit_card_cvv;

            string mode_of_payment;

            string bank_name;
            int bank_code;
            string email;
            string password;
            long long int account_no;
            long long int IFSC_code;

      public:

            friend void display_invoice(Signup S,Service_Details SD,Payment p);

            void title_bar();
            void title_bar_cash();
            void title_bar_credit_card();
            void title_bar_debit_card();
            void title_bar_netbanking();

            void cash();
            void credit_card();
            void debit_card();
            void netbanking();

            void mop(string);
            void transaction_message();
            
            void display_choice();
            int choice();
};

#endif
