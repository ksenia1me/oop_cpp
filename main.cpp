#include <iostream>

using namespace std;

class BaseClass1
{
public:
    BaseClass1() { cout << "BaseClass1 contructor."<<endl;
     }

};
class BaseClass2
{
public:
    BaseClass2() { cout<< "BaseClass2 contructor."<<endl;
    }
};
int main()
{
    DerivedClass dc;
}
