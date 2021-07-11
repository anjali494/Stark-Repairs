#include <iostream>
#include "../header_files/clean_stdin.h"
using namespace std;

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
