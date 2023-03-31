//Single Inheritance.
#include<iostream>
using namespace std;
class A
{
   public:
   int x;
   int y;
   void displayA()
   {
      cout<<"In Class A"<<endl;
      cout<<"X="<<x<<endl;
      cout<<"Y="<<y<<endl;
   }
};
class B: public A 
{
  public:
  int z;
  void display()
  {
    cout<<"In Class B"<<endl;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    cout<<"Z="<<z<<endl;
  }
};
int main()
{
    B ob;
    int a,b,c;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    ob.x=a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    ob.y=b;
    cout<<"Enter the third number:"<<endl;
    cin>>c;
    ob.z=c;
    ob.displayA();
    ob.display();
    return 0;
}
