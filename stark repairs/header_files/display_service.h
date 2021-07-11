#ifndef display_service_h
#define display_service_h

#include <string>
using namespace std;

class Disp_Services
{
      private:
            string service[5];
      public:
            Disp_Services();

            void title_bar();
            void display_services();
};

#endif
