#include <iostream>
using namespace std;
//making of a class
class person
{   
    //making of privates members or private variables 
    private:
    string name;
    string collage_id;

    public:
    //making of member functions
    void print()
    {   
        cout<<"enter your name:";
        cin>>name;
        cout<<"your name is: "<<name<<endl;
    }
    string get_collage_id()
    {
        cout<<"enter your collage id:";
        cin>>collage_id;
        cout<<"your collage id is: "<<collage_id<<endl; 
    }

};
int main()
{
    //declaration of an object1
    person p1,p2;
    p1.print();
    p1.get_collage_id();
    p2.print();
    p2.get_collage_id();
    return 0;
}