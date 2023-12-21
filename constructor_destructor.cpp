#include <iostream>
using namespace std;
class my_class
{
    public:
    my_class()
    {
        cout<<"constructor function called"<<endl;
    }
    ~my_class()
    {
        cout<<"destructor function called"<<endl;
    }
};
int main()
{
    my_class mc;
    return 0;
}
