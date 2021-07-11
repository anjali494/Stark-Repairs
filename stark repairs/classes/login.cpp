#include <iostream>
#include <string>
#include "../header_files/login.h"
using namespace std;

//Login title bar

      void Login::title_bar()
      {
            cout<<" Login Page:\n";
      }

//Taking input from the user

      void Login::input_details_log()
      {
            cout<<"\n  Enter your email id: ";
            cin>>Email;

            cout<<"  Enter your password: ";
            cin>>check_passwrd;
      }

//checking the email and password from signup class

      int Login::check_both()
      {
            if(((check_passwrd.compare(conf_password))==0) && (Email_id.compare(Email))==0 && check_email()==0)
            {
                  return 0;
            }
            else
            {
                  return 1;
            }
      }
