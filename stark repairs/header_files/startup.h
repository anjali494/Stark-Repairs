#ifndef startup_h
#define startup_h

#include <string>
using namespace std;

class Startup
{
      private:
 
            int ch,num;
            string str[100];
            char str1[100];

      public:

            Startup();
            void title_bar();
            void feedback_title_bar();
            void Welcome_message();
            void add_feedback();
            void display_choice();
            int choice();
};

#endif     
