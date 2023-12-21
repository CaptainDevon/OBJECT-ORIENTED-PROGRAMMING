#include <iostream>
#include <math.h>
using namespace std;
class Myclass
{
    public:
    int area(int x)
    {
        cout<<"the area of the square is= "<<x*x<<endl;
        return 0;
    }
    int area(int l,int b)
    {
        cout<<"area of the rectangle is= "<<l*b<<endl;
        return 0;
    }
    float area(int a,int b, int c)
    {
        int s=(a+b+c)/2;
        cout<<"area of the triangle is= "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
        return 0;
    }
};
int main()
{   
    Myclass m;
    m.area(5);
    m.area(4,5);
    m.area(6,8,10);
    return 0;
}