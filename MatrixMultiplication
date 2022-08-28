//Write a C++ program for matrix multiplication.
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,arr[3][3],brr[3][3],crr[3][3];
    cout<<"Enter the elements of the first matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>brr[i][j];
        }
    }
    cout<<"The first matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"The second matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<brr[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            crr[i][j]=0;
            for(k=0;k<3;k++)
            {
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    cout<<"The product of two matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                cout<<crr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
