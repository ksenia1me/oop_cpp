#include <oop.h>

class BaseClass
{
public:
    BaseClass(){ print_it(); }
    virtual void print_it(){
     cout<<"BaseClass print_it"<<endl;
     }
};
