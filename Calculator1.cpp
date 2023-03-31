//C++ program to develop a menu based calculator.
#include<iostream>
using namespace std;
class calculator
{  
   private:
   int add,sub,multi,div;
   int choice;
   public:
   void calcu(int num1,int num2)
   {
     int a,b,c,d,e;
     c=choice;
     a=add;
     b=sub;
     e=multi;
     d=div;
     a=num1+num2;
     b=num1-num2;
     e=num1*num2;
     d=num1/num2;
     cout<<"Enter the choice:"<<endl;
     cin>>c;
     switch(c)
     {
        case 1:
        cout<<"Addition:"<<a;
        break;
        case 2:
        cout<<"Subtraction:"<<b;
        break;
        case 3:
        cout<<"Multiplictaion:"<<e;
        break;
        case 4:
        cout<<"Division:"<<d;
        break;
        default:
        cout<<"Wrong Output";
     }
   }
};
int main()
{
    calculator ob;
    int num1,num2;
    cout<<"Enter the first number:"<<endl;
     cin>>num1;
     cout<<"Enter the second number:"<<endl;
     cin>>num2;
     ob.calcu(num1,num2);
    return 0;
}
