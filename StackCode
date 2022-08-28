//Stack in C++.
#include<iostream>
using namespace std;
int top=-1;
int arr[5];
class stack
{
   public:
   void push(int);
   void pop();
};
    void stack::push(int value)
   {
      if(top==4)
      {
        cout<<"Stack Overflow"<<endl;
      }
      else
      {
         top++;
         arr[top]=value;
      }
   }
   void stack::pop()
   {
      if(top==-1)
      {
         cout<<"Stack Underflow"<<endl;
      }
      else
      {
         cout<<"The popped element is:"<<arr[top]<<endl;
         top--;
      }
   }
int main()
{
    stack ob;
    int data;
    int choice;
    while(1)
    { 
       cout<<"Enter the choice(push|pop):";
       cin>>choice;
       switch(choice)
       {
          case 1:
          cout<<"Enter the value to be pushed:"<<endl;
          cin>>data;
          ob.push(data);
          break;
          case 2:
          ob.pop();
          break;
          default:
          cout<<"Invalid Output:"<<endl;
       }
    }
    return 0;
}
