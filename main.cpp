#include <iostream>

using namespace std;

class BaseClass
{
public:
    BaseClass(){ print_it(); }
    virtual void print_it(){
     cout<<"BaseClass print_it"<<endl;
     }
};

int main()
{
    DerivedClass dc;
}
