#include <iostream>
#include "../header_files/invoice.h"
#include "../header_files/signup.h"
#include "../header_files/service_details.h"
#include "../header_files/payment.h"
using namespace std;

void display_invoice(Signup S,Service_Details SD,Payment p)
{
      cout<<"\n  "<<"Dear Customer please find your invoice here:";

      cout<<"\n\n  Customer and Service Details";

      cout<<"\n\n  Name: "<<S.Cust_Name;
      cout<<"\n  Phone Number: "<<S.PhoneNo;
      cout<<"\n  Country: "<<SD.country;
      cout<<"\n  State: "<<SD.state;
      cout<<"\n  City: "<<SD.city;
      cout<<"\n  Postal Code: "<<SD.postal_code;
      cout<<"\n  Service opted for repairment of: "<<SD.srvice;
      cout<<"\n  Servicing Address: "<<SD.servicing_address;
      cout<<"\n  Servicing Date: "<<SD.servicing_date;
      cout<<"\n  Servicing time: "<<SD.servicing_time;
      cout<<"\n  Amount: "<<SD.service_fees;

      cout<<"\n\n  Transaction details";

      cout<<"\n\n  Mode of payment: "<<p.mode_of_payment;

      if(p.mode_of_payment=="cash")
      {
            cout<<"\n  Amount due: "<<SD.service_fees;
            cout<<"\n  Transaction status: pending";
      }
      else
      {
            cout<<"\n  Amount paid: "<<SD.service_fees;
            cout<<"\n  Transaction status: successfull";
      }
}
