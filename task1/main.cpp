#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynarr d1(10);
    d1.setvalue(5,10);
    cout<<d1.getvalue(5);
    return 0;
}
