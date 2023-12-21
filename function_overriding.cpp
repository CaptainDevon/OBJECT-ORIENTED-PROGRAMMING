#include <iostream>
using namespace std;
class parent
{
    public:
    void display()
    {
        cout<<"this message is coming from the parent class"<<endl;
    }
};
class child:public parent
{
    public:
    void display()
    {
        cout<<"this message is coming from the child class"<<endl;
    }
};
int main()
{   
    child c;
    c.display();
    return 0;
}