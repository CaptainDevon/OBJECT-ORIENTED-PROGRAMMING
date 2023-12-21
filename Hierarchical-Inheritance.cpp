#include <iostream>
using namespace std;
class even_number
{
    public:
    void write_even(int x)
    {
        cout<<"it is an even number"<<endl;
    }
};

class odd_number
{
    public:
    void write_odd(int x)
    {
        cout<<"it is an odd number"<<endl;
    }
};
class number: public even_number, public odd_number
{
    public:
    void write_zero(int x)
    {
        cout<<"0 is neither even nor odd"<<endl;
    }
};
int main()
{
    int n;
    number number;
    for(int i=0;i<3;i++)
    {
        cout<<"enter the number: ";
        cin>>n;
        if(n%2==0 && n!=0)
        {
            number.write_even(n);
        }
        else if(n%2!=0)
        {
            number.write_odd(n);
        }
        else
        {
            number.write_zero(n);
        }
    }
    return 0;
}