//Function Overriding.
#include<iostream>
using namespace std;
class A
{
   public:
   int x;
   void display()
   {
      cout<<"In Class A"<<endl;
      cout<<"X="<<x<<endl;
   }
};
class B : public A
{
    public:
    int y;
    void display()
    {
        cout<<"In Class B"<<endl;
        cout<<"Y="<<y<<endl;
    }
};
int main()
{
    B ob;
    ob.x=10;
    ob.y=20;
    A *ptr;
    ptr=&ob;
    ptr->display();
    ob.display();
    return 0;
}
