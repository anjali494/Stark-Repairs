#include <iostream>
#include <string>
#include "../header_files/display_service.h"
using namespace std;

//setting up the services

      Disp_Services::Disp_Services()
      {
            service[0]="  Press 1 to proceed for repairment of T.V";
            service[1]="  Press 2 to procced for repairment of A.C";
            service[2]="  Press 3 to procced for repairment of refrigerator";
            service[3]="  Press 4 to procced for repairment of microwave";
            service[4]="  Press 5 to procced for repairment of computer";
      }

//Choose service title bar

      void Disp_Services::title_bar()
      {
            cout<<" Choose service:\n";
      }

//Displaying the services

      void Disp_Services::display_services()
      {
            cout<<endl;

            for(int i=0;i<5;i++)
            {
                  cout<<service[i]<<endl;
            }
      }
