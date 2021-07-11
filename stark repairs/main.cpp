#include <iostream>
#include <ctype.h>
#include <string>
#include <string.h>
#include "header_files/startup.h"
#include "header_files/signup.h"
#include "header_files/login.h"
#include "header_files/choose_service.h"
#include "header_files/display_service.h"
#include "header_files/service_details.h"
#include "header_files/query.h"
#include "header_files/payment.h"
#include "header_files/logout.h"
#include "header_files/invoice.h"
#include "header_files/clean_stdin.h"
using namespace std;


int main()
{
      system("clear");

//Initilization of variables

      int flow=1,count=0,forward=0,forward2=0,forward3=0;
      int c,c2,c3,c5,c6;
      char c4;
      int count2=0;
      char wait;

//Assigning object of classes

      Startup start;
      Signup sign;
      Login log;
      Disp_Services disp;
      Choose_Service choose;
      Service_Details sd;
      Query q;
      Payment pay;
      Logout end;

      while(flow=1)
      {
	//startup

                  if(count==0)
                  {
                        system("clear");

                        start.title_bar();
                        start.Welcome_message();
                        start.display_choice();
                        c=start.choice();
                  }
                  else
                  {
                        system("clear");

                        start.title_bar();
                        cout<<endl;
                        start.display_choice();
                        c=start.choice();
                  }


                  if(c==1)
                  {
                        Signup_checkpoint:

                              system("clear");

      			//signup

                              sign.title_bar();
                              clean_stdin();

                              sign.display();
                              sign.input_details_sign_1();
                              log.input_details_sign_2();

			//checking email id and password format
                 
                              if(log.check_password()==0 && log.check_length()==0 && log.check_email()==0)
                              {
                                    system("clear");

                                    log.title_bar();
                                    log.input_details_log();

                                                                  
                                    if(log.check_both()==0)
                                    {
                                          forward=1;
                                          count++;
                                    }
                                    else
                                    {
                                          system("clear");

                                          cout<<"\n  Please enter registered email id and password !!";
                                          cout<<"\n\n  Press a key to return to home page: ";
                                          cin>>wait;
                        
                                          count++;
                                    }                               
                              
                              }
                              else if(log.check_length()==1 && log.check_email()==0)
                              {
                                    system("clear");
                        
                                    cout<<"\n  Password should be minimum 6 characters long !!";
                                    cout<<"\n\n  Press a key to return to signup page: ";
                                    cin>>wait;

                                    count ++;
                        
                                    goto Signup_checkpoint;
                              }
                              else if(log.check_password()==1 && log.check_length()==0 && log.check_email()==0)
                              {
                                    system("clear");

                                    cout<<"\n  Password and confirm password do not match !!";
                                    cout<<"\n\n  Press a key to return to signup page: ";
                                    cin>>wait;

                                    count++;

                                    goto Signup_checkpoint;
                              }
                              else if(log.check_password()==0 && log.check_length()==0 && log.check_email()==1)
                              {
                                    system("clear");
                              
                                    cout<<"\n  Please enter a valid email ID !!";
                                    cout<<"\n\n  Press a key to return to signup page: ";
                                    cin>>wait;

                                    count++;

                                    goto Signup_checkpoint;
                              }
                              else if(log.check_length()==1 && log.check_email()==1)
                              {
                                    system("clear");

                                    cout<<"\n  Please enter a valid email ID !!";
                                    cout<<"\n  Password should be minimum 6 characters long !!";
                                    cout<<"\n\n  Press a key to return to signup page: ";
                                    cin>>wait;

                                    count++;

                                    goto Signup_checkpoint;
                              }
                              else if(log.check_password()==1 && log.check_length()==0 && log.check_email()==1)
                              {
                                    system("clear");

                                    cout<<"\n  Please enter a valid email ID !!";
                                    cout<<"\n  Password and confirm password do not match !!";
                                    cout<<"\n\n  Press a key to return to signup page: ";
                                    cin>>wait;

                                    count++;
                              
                                    goto Signup_checkpoint;
                         
                              }

                  }
                  else if(c==2)
                  {
                        system("clear");

		  //Login
      
                        log.title_bar();
                        log.input_details_log();

		 //checking email id and password
                              
                        if(log.check_both()==0)
                        {
                              forward=1;
                              count++;
                        }
                        else
                        {
                              system("clear");

                              cout<<"\n  Please enter registered email id and password !!";
                              cout<<"\n\n  Press a key to return to home page: ";
                              cin>>wait;
                        
                              count++;
                        }                             
                  } 
                  else if(c==3)
                  {
                        system("clear");

		  //Feedback

                        start.feedback_title_bar();
                        start.add_feedback();

                        cout<<"\n\n  Press a key to return to home page: ";
                        cin>>wait;

                        count++;
                     
                  }
                  else if(c==4)
                  {
                        system("clear");

		  //exit
            		cout<<"\n  Thank you, have a nice day !!";
                        break;
                  }
                  else
                  {
                        system("clear");

		  //wrong choice

                        cout<<"\n  Wrong choice !!";
                        cout<<"\n\n  Press a key to return to home page: ";
                        cin>>wait;
                  }


                  if(forward==1)
                  {
                        Service_checkpoint:

                              system("clear");

			//displaying services       
           
                              disp.title_bar();
                              disp.display_services();

			//choosing service

                              c2=choose.choice();

                              if(c2==1)
                              {
				    //T.V
                                    sd.opted_service("T.V");
                                    sd.fees(500);
                              }
                              else if(c2==2)
                              {
			            //A.C
                                    sd.opted_service("A.C");
                                    sd.fees(600);
                              }
                              else if(c2==3)
                              {
				    //Refrigerator
                                    sd.opted_service("Refrigerator");
                                    sd.fees(500);
                              }
                              else if(c2==4)
                              {
				    //Microwave
                                    sd.opted_service("Microwave");
                                    sd.fees(650);
                              }
                              else if(c2==5)
                              {
				    //Computer
                                    sd.opted_service("Computer");
                                    sd.fees(550);
                              }
                              else
                              {
                                    system("clear");
                                    
				    //Wrong choice
                                    cout<<"\n  Wrong choice !!";
                                    cout<<"\n\n  Press a key to return to choose service: ";
                                    cin>>wait;

                                    goto Service_checkpoint;
                              }

                              Service_Details_checkpoint:
                        
                                    system("clear");

                                    clean_stdin();

			      //Service details

                                    sd.title_bar();
                                    sd.service_details();
                                    sd.display_choice();

                                    c3=sd.choice();

                                    if(c3==1)
                                    {
                                          system("clear");
                                          forward2=1;
                                    }
                                    else if(c3==2)
                                    {
                                          system("clear");
                                          goto Service_checkpoint;
                                    }
                                    else if(c3==3)
                                    {
                                          system("clear");
                                          continue;
                                    }
                                    else
                                    {
                                          system("clear");
                                          
                                          cout<<"\n  Wrong choice !!";
                                          cout<<"\n\n  Press a key to continue: ";
                                          cin>>wait;

                                          goto Service_Details_checkpoint;
                                    }
                                          
                        }


                        if(forward2==1)
                        {     
                              clean_stdin(); 

                              cout<<"\n  Your Amount is: ";
                              sd.display_fees();

                              cout<<"\n\n  Press (q - submit query) or (p - give payment): ";
                              cin>>c4;

                              if(c4=='q')
                              {
                                    query_checkpoint:
		
				    //Query

                                          system("clear");
                  
                                          q.title_bar();
                                          q.add_query();

                                          q.display_choice();
                                          c5=q.choice();

                                          if(c5==1)
                                          {
                                                cout<<"\n  Your Query has been successfully submitted";
                                                cout<<"\n\n  Press a key to proceed for payment: ";
                                                cin>>wait;

                                                c4='p';
                                          }
                                          else if(c5==2)
                                          {
                                                goto query_checkpoint;
                                          }
                                          else if(c5==3)
                                          {
                                                //Do Nothing
                                          }
                                          else
                                          {
                                                system("clear");
                                          
                                                cout<<"\n  Wrong choice !!"; 
                                                cout<<"\n\nPress a key to go to Home page: ";
                                                cin>>wait;
                                          }
                              }
                              if(c4=='p')
                              {
                                    Payment_checkpoint:

                                          system("clear");
                                          clean_stdin();

				    //Payment

                                          pay.title_bar();
                                          pay.display_choice();
                                          c6=pay.choice();

                                          if(c6==1)
                                          {
                                                system("clear");
						
						//cash
                                                pay.title_bar_cash();
                                                pay.mop("cash");
                                                pay.cash();

                                                cout<<"\n\n  Press a key to show invoice: ";
                                                cin>>wait;
                                          }
                                          else if(c6==2)
                                          {
                                                system("clear");

						//credit card
                                                pay.title_bar_credit_card();
                                                pay.mop("credit card");
                                                pay.credit_card();

                                                cout<<"\n  Press a key to pay the amount: ";
                                                cin>>wait;

                                                system("clear");
                  
                                                pay.transaction_message();
                                          
                                                cout<<"\n\n  Press a key to show invoice: ";
                                                cin>>wait;
                                          }
                                          else if(c6==3)
                                          {            
                                                system("clear");
						
						//debit card
                                                pay.title_bar_debit_card();
                                                pay.mop("debit card");
                                                pay.debit_card();

                                                cout<<"\n  Press a key to pay the amount: ";
                                                cin>>wait;

                                                system("clear");
                  
                                                pay.transaction_message();
                                          
                                                cout<<"\n\n  Press a key to show invoice: ";
                                                cin>>wait;
                                          }
                                          else if(c6==4)
                                          {
                                                system("clear");
						
						//net banking
                                                pay.title_bar_netbanking();
                                                pay.mop("net banking");
                                                clean_stdin();
                                                pay.netbanking();

                                                cout<<"\n  Press a key to pay the amount: ";
                                                cin>>wait;

                                                system("clear");

                                                pay.transaction_message();

                                                cout<<"\n\n  Press a key to show invoice: ";
                                                cin>>wait;
                                          }
                                          else
                                          {
                                                system("clear");

						//Wrong choice
                                                cout<<"\n  Wrong choice, Transaction failed !!";

                                                cout<<"\n\n  Press a key to return to payment page: ";
                                                cin>>wait;

                                                goto Payment_checkpoint;
                                          }

                                    system("clear");

				//Invoice

                                    cout<<" Invoice:\n";

				//displaying invoice

                                    display_invoice(sign,sd,pay);
                                    cout<<"\n\n  Press a key to logout: ";
                                    cin>>wait;


                                    system("clear");

				//logout

                                    end.Logout_message();

                                    break;
                              }

			//Wrong choice of 'p' and 'q' page

                              if(c4!='p' && c4!='q')
                              {
                                    system("clear");

                                    cout<<"\n  Wrong choice !!";
                                    cout<<"\n\n  Press a key to return to home page: ";

                                    cin>>wait;

                              }              
                        }
                  
            }

            return 0;
}                
