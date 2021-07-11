#ifndef query_h
#define query_h

using namespace std;

class Query
{
      private:
            int n;
            int ch;
            char str[100];
      public:

            void title_bar();
            void add_query();
            void display_choice();
            int choice();
};

#endif
