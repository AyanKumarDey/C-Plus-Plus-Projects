//Virtual Function.
#include<iostream>
using namespace std;
class A
{
  public:
  virtual void display()
  {
    cout<<"In A Class"<<endl;
  }
};
class B: public A
{
  public:
  int x;
  void display()
  {
    cout<<"In B Class"<<endl;
    cout<<"X="<<x<<endl;
  }
};
int main()
{
    B ob;
    ob.x=10;
    A *ptr;
    ptr=&ob;
    ptr->display();
    ob.display();
    return 0;
}
