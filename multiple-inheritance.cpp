#include <iostream>
using namespace std;
class fruit
{
    public:
    void fruit_display()
    {
        string fruit;
        cout<<"enter your favourite fruit: ";
        cin>>fruit;
        cout<<"the first letter of your fruit is: "<<fruit[0]<<endl;
    }
};
class vegetable
{
    public:
    void vegetable_display()
    {
        string vegetable;
        cout<<"enter your favorite vegetable: ";
        cin>>vegetable;
        cout<<"the first letter your vegetable is: "<<vegetable[0]<<endl;
    }
};
class child:public fruit, public vegetable
{
    public:
    //if I dont make any member functions in this class 
    //I can access the member functions of the "fruit" and "vegetable" class
};
int main()
{
    child c;
    c.fruit_display();
    c.vegetable_display();
    return 0;
}