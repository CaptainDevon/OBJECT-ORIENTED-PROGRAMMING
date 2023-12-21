#include <iostream>
using namespace std;
class state
{
    public:
    void state_info()
    {
        string state;
        cout<<"enter your hometown: ";
        cin>>state;
        cout<<"yout state is "<<state.length()<<" letters word"<<endl;
    }
};
class city:public state
{
    public:
    void city_info()
    {
        string city;
        cout<<"which city do you live in: ";
        cin>>city;
        cout<<"your city is "<<city.length()<<" letter word"<<endl;
    }
};
class residence: public city
{
    public:
    void colony_info()
    {
        string colony_name;
        cout<<"colony name in abbreviation: ";
        cin>>colony_name;
        cout<<"so your sweet home is in "<<colony_name<<"!!"<<endl;
    }
};
int main()
{
    city c;
    c.state_info();  //from state class
    c.city_info();   //from city class
    residence r;
    r.state_info();  //from state class
    r.city_info();   //from city class
    r.colony_info(); //from residence class
    return 0;
}