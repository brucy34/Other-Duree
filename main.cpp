#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{
     Duree a(0,7,10,9),b(0,7,8,9);

    if(a==b)
    {
        cout <<"Les durees  sont egales!"<<endl;
    }
    else
    {
        cout <<"Les durees ne sont pas egales"<<endl;
    }
    return 0;
}
