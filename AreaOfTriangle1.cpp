//Finding Area of three triangle using paramaterised method.
#include <iostream>
#include <cmath>
using namespace std;
class triangle
{
    public:
    void area(int a)
    {
        cout<<"Area of Equilateral trinagle is:"<<(sqrt(3)/4)*a*a<<endl;
    }
    void area(int x,int y)
    {
        cout<<"Area of Isocelius triangle is:"<<(1/2)*x*y<<endl;
    }
    void area(int a,int b,int c)
    {
        float s;
        s=(a+b+c)/2;
        cout<<"Area of Scaler triangle is:"<<(s*(s-a)*(s-b)*(s-c))<<endl;
    }
};
int main()
{
    triangle ob;
    ob.area(5);
    ob.area(5,10);
    ob.area(5,10,20);
    return 0;
}
