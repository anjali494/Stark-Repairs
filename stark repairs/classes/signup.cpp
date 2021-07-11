#include <iostream>
#include <string>
#include "../header_files/signup.h"
using namespace std;

//Signup constructor

      Signup::Signup()  
      { 
            Cust_Name="admin";
            PhoneNo=123456;
            Email_id="stark_repairs@iiitl.ac.in";
            conf_password="administrator";
      }

//Signup title bar

      void Signup::title_bar() 
      {
            cout<<" Signup Page:\n";
      }

//checking the Email ID format

      int Signup::check_email()  
      {
            for(int i=0;i<Email_id.length();i++)
            {
                  if(Email_id[i]=='@')
                  {
                        for(int j=i+1;j<Email_id.length();j++)
                        {
                              if(Email_id[j]=='.' && j!=i+1)
                              {
                                    for(int k=j+1;j<Email_id.length();k++)
                                    {
                                          if(Email_id[k]=='.' && k!=j+1)
                                          {
                                                return 0;
                                          }
                                          else if(Email_id[k]=='.' && k==j+1)
                                          {
                                                return 1;
                                          }
                                    }
                  
                                    return 0;
                              }
                        }
                  }
            }

            return 1;
      }

//Displaying the rules while user is signing up

      void Signup::display()  
      {
            cout<<"\n  Note:";
            cout<<"\n\n  1) Email id should be a valid email id";
            cout<<"\n  2) Password must be minimum 6 characters long";
      }

//Inputting user details

      void Signup::input_details_sign_1() 
      {
            cout<<"\n\n  Enter your details:"; 
            cout<<"\n\n  Enter your Name: ";          
            getline(cin,Cust_Name);

            cout<<"  Enter your phone number: ";
            cin>>PhoneNo;
      }

//Inputting user important details   
       
      void Signup::input_details_sign_2() 
      {
            cout<<"  Enter your email id: ";
            cin>>Email_id;          

            cout<<"  Enter your password: ";
            cin>>password;

            cout<<"\n  Confirm your password: ";
            cin>>conf_password;
      }

//checking that the password matches the confirm password

      int Signup::check_password()  
      {
            if(password!=conf_password)
            {
                  return 1;
            }
            else
            {
                  return 0;
            }
      }

//checking the length of the password (i.e min 6 characters)

      int Signup::check_length()  
      { 
            if(password.length()>5 && conf_password.length()>5)
            {
                  return 0;
            }
            else
            {
                  return 1;
            }
      }
