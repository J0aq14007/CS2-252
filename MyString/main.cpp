#include <iostream>
#include "IamString.h"
using namespace std;

int main()
{
    IamString ms("ciencia");
    cout<<ms.getSize()<<endl;
    cout<<ms.ToUpper()<<endl;
    cout<<ms.Tolower()<<endl;
    return 0;
}
