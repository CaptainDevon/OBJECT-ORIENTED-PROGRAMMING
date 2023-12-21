#include <iostream>
using namespace std;
class parent
{
    private:
    int a,b;
    public:
    void display()
    {
        cout<<"hello the text is from parent class"<<endl;
    }
    int sum(int x,int y)
    {
        cout<<"the sum of two numbers is="<<x+y<<endl;
    }
};
class child:public parent
{
    public:
    void display()
    {
        cout<<"this text is from child class"<<endl;

        parent::display(); //this text will be calling the function from the parent class
    }
    int minus(int x, int y)
    {
        cout<<"the difference between two numbers is="<<x-y<<endl;
    }
};
int main()
{
    //making an object from the child class
    child c1;
    c1.display();  //"this text is from child class"
    c1.minus(4,5); //calls the minus function in child class
    c1.sum(5,5); //calls the sum function from the parent class
}