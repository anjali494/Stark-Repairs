#ifndef login_h
#define login_h

#include <string>
#include "signup.h"
using namespace std;

class Login:public Signup
{
      private:
            string Email;
            string check_passwrd;

      public:
            void login_default(string email,string passwrd);
            void title_bar();
            void input_details_log();
            int check_both();
};

#endif

