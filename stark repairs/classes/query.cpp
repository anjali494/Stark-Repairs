#include <iostream>
#include <fstream>
#include "../header_files/query.h"
using namespace std;


      ofstream w2;

//Query title bar

      void Query::title_bar()
      {
            cout<<" Query:\n";
      }

//Adding the query to Query.txt

      void Query::add_query()
      {
            w2.open("text_files/Query.txt",ios::app);
            
            cout<<"\n  Enter number of lines: ";
            cin>>n;

            cout<<"\n  Write your query here:\n";

            cout<<endl;

            for(int i=0;i<n+1;i++)
            {
                  fgets(str,100,stdin);
                  cout<<"  ";
                  w2<<str;
            }

            w2.close();
      }

//Displaying choice

      void Query::display_choice()
      {
            cout<<"\n  Press 1 to submit query and proceed for payment";
            cout<<"\n  Press 2 to modify query";
            cout<<"\n  Press 3 to delete query and go to home page";
      }

//Taking choice from user

      int Query::choice()
      {
            cout<<"\n\n  Enter your choice: ";
            cin>>ch;

            return ch;
      }


