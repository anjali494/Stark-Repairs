#include <iostream>
#include <string>
#include "../header_files/payment.h"
#include "../header_files/clean_stdin.h"
using namespace std;

//Payment title bar

      void Payment::title_bar()
      {
            cout<<" Payment mode:\n";
      }

//Title bar of cash

      void Payment::title_bar_cash()
      {
            cout<<" Mode of payment: cash\n";
      }

//Title bar of credit card

      void Payment::title_bar_credit_card()
      {
            cout<<" Mode of payment: credit card\n";
      }

//Title bar of debit card

      void Payment::title_bar_debit_card()
      {
            cout<<" Mode of payment: debit card\n";
      }

//Title bar of net banking

      void Payment::title_bar_netbanking()
      {
            cout<<" Mode of payment: net banking\n";
      }

//cash

      void Payment::cash()
      {
            cout<<"\n  Please handover the cash to our service agent";
      }

//credit card

      void Payment::credit_card()
      {
            cout<<"\n  Enter your credit card number: ";
            cin>>credit_card_no;

            cout<<"  Enter your credit card expiry date: ";
            cin>>credit_card_expiry_date;

            cout<<"  Enter your credit card cvv: ";
            cin>>credit_card_cvv;
      }

//debit card
             
      void Payment::debit_card()
      {
            cout<<"\n  Enter your debit card number: ";
            cin>>credit_card_no;

            cout<<"  Enter your debit card expiry date: ";
            cin>>credit_card_expiry_date;

            cout<<"  Enter your debit card cvv: ";
            cin>>credit_card_cvv;
      }

//net banking

      void Payment::netbanking()
      {
            cout<<"\n  Enter your bank name: ";
            getline(cin,bank_name);

            cout<<"  Enter your bank code: ";
            cin>>bank_code;
                  
            clean_stdin();
      
            cout<<"  Enter your net banking email id: ";
            getline(cin,email);

            cout<<"  Enter your net banking password: ";
            getline(cin,password);

            cout<<"  Enter your account number: ";
            cin>>account_no;

            cout<<"  Enter your IFSC Code: ";
            cin>>IFSC_code;
      }

//mode of payment

      void Payment::mop(string str)
      {
            mode_of_payment=str;
      }

//Displaying transaction message

      void Payment::transaction_message()
      {
            cout<<"\n  Transaction successsful, Thank you for the payment";
      }

//Displaying choice

      void Payment::display_choice()
      {
            cout<<"\n  Press 1 to make payment through cash";
            cout<<"\n  Press 2 to make payment through credit card";
            cout<<"\n  Press 3 to make payment through debit card";
            cout<<"\n  Press 4 to make payment through net banking";
      }

//Taking choice from user

      int Payment::choice()
      {
            cout<<"\n\n  Enter your choice: ";
            cin>>ch;

            return ch;
      }
