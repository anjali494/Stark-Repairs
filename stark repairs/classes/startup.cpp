#include <iostream>
#include <fstream>
#include <string>
#include "../header_files/startup.h"
using namespace std;


      ofstream w1;

//startup constructor

      Startup::Startup()
      {
            num=0;
      }

//startup title bar

      void Startup::title_bar()
      {
            cout<<" Home Page:\n";
      }
     
//feedback window title bar

      void Startup::feedback_title_bar()
      {
            cout<<" Feedback:\n";
      }

//Welcome message

      void Startup::Welcome_message()   
      {
            cout<<"\n  Welcome to Stark Repairs !!\n\n";
      }

//adding the feedback to Feedback.txt

      void Startup::add_feedback()
      {
            cout<<"\n  Enter the number of lines: ";
            cin>>num;

            cout<<"\n  Enter your feedback here:\n ";
            cout<<endl;

            for(int i=0;i<num+1;i++)
            {
                  str[i]=fgets(str1,100,stdin);
                  cout<<"  ";
            }

            w1.open("text_files/Feedback.txt",ios::app);
            cout<<endl;

            for(int i=0;i<num+1;i++)
            {
                  w1<<str[i];
            }

            w1.close();

            cout<<"  Your feedback has been successfully submitted"; 
      }

//displaying choice

      void Startup::display_choice()
      {
            cout<<"  Press 1 for Signup\n";
            cout<<"  Press 2 for Login\n";
            cout<<"  Press 3 to give feedback\n";
            cout<<"  Press 4 to exit\n";
      }
                       
//Taking choice from the user

      int Startup::choice()
      {
            cout<<"\n  Enter your choice: ";
            cin>>ch;
                  
            return ch;
      }
                                             
